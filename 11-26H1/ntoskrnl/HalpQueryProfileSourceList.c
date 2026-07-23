/*
 * XREFs of HalpQueryProfileSourceList @ 0x140433340
 * Callers:
 *     HalpQueryProfileInformation @ 0x140B1B8D8 (HalpQueryProfileInformation.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     wcscpy_s @ 0x14053EF80 (wcscpy_s.c)
 */

__int64 __fastcall HalpQueryProfileSourceList(unsigned int a1, __int64 a2, unsigned int *a3)
{
  int v3; // ebp
  unsigned int v5; // r13d
  _DWORD *v6; // r14
  unsigned __int8 v9; // al
  __int64 v10; // rbx
  unsigned __int16 i; // cx
  __int64 v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // ebx
  unsigned __int8 v18; // [rsp+50h] [rbp+8h]

  v3 = HalpProfileSourceDescriptorCount;
  v5 = a1;
  *a3 = 0;
  v6 = 0LL;
  v9 = HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
  v10 = HalpProfileSourceDescriptorListHead;
  v18 = v9;
  if ( (__int64 *)HalpProfileSourceDescriptorListHead != &HalpProfileSourceDescriptorListHead )
  {
    do
    {
      if ( !v3 )
        break;
      for ( i = 0; i < *(_WORD *)(v10 + 24); ++i )
      {
        if ( *(_QWORD *)(v10 + 8LL * i + 32) )
        {
          v12 = -1LL;
          do
            ++v12;
          while ( *(_WORD *)(*(_QWORD *)(v10 + 288) + 2 * v12) );
          v13 = (2 * (v12 + 1) + 31) & 0xFFFFFFF8;
          if ( v13 <= v5 )
          {
            v14 = HalpProfileIntervalLimits;
            *(_DWORD *)a2 = v13;
            *(_DWORD *)(a2 + 4) = *(_DWORD *)(v10 - 8);
            v15 = *(unsigned __int8 *)(v10 + 20);
            *(_DWORD *)(a2 + 8) = *(_DWORD *)(v14 + 8 * v15 + 4);
            *(_DWORD *)(a2 + 12) = *(_DWORD *)(v14 + 8 * v15);
            *(_QWORD *)(a2 + 16) = 0LL;
            wcscpy_s((wchar_t *)(a2 + 24), (unsigned int)(v12 + 1), *(const wchar_t **)(v10 + 288));
            v6 = (_DWORD *)a2;
            a2 += v13;
            v5 -= v13;
          }
          *a3 += v13;
          --v3;
          break;
        }
      }
      v10 = *(_QWORD *)v10;
    }
    while ( (__int64 *)v10 != &HalpProfileSourceDescriptorListHead );
    v9 = v18;
    if ( v6 )
      *v6 = 0;
  }
  v16 = a1 < *a3 ? 0xC0000004 : 0;
  HalpReleaseHighLevelLock(&HalpProfileSourceDescriptorListLock, v9);
  return v16;
}
