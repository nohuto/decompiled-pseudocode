/*
 * XREFs of PnpCompileDeviceInstancePaths @ 0x1409B394C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     PnpAllocateCriticalMemory @ 0x1409B4B74 (PnpAllocateCriticalMemory.c)
 */

__int64 __fastcall PnpCompileDeviceInstancePaths(unsigned int a1, __int64 a2, char a3, __int64 *a4)
{
  unsigned int v4; // edi
  unsigned int v8; // edx
  int v9; // r9d
  unsigned int *v10; // r8
  __int64 v11; // rax
  unsigned int v12; // r10d
  __int64 v13; // r8
  __int64 CriticalMemory; // rax
  _WORD *v15; // r14
  unsigned int v16; // edx
  unsigned int *v17; // r8
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // r9
  unsigned int v21; // esi
  unsigned int v22; // r10d
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx
  _WORD *v26; // rcx

  v4 = 0;
  if ( !a2 )
    __fastfail(5u);
  *a4 = 0LL;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    v10 = *(unsigned int **)a2;
    if ( v8 >= **(_DWORD **)a2 || !v10 )
      break;
    _mm_lfence();
    v11 = *(_QWORD *)&v10[6 * v8 + 4];
    v12 = v10[6 * v8++ + 6];
    if ( v11 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(v11 + 312) + 40LL);
      if ( v13 )
      {
        if ( *(_QWORD *)(v13 + 48) && (!a3 || v12) )
          v9 += *(unsigned __int16 *)(v13 + 40) + 2;
      }
    }
  }
  CriticalMemory = PnpAllocateCriticalMemory(a1, 256LL, (unsigned int)(v9 + 2), 1265659472LL);
  *a4 = CriticalMemory;
  v15 = (_WORD *)CriticalMemory;
  if ( CriticalMemory )
  {
    v16 = 0;
    while ( *(_BYTE *)(a2 + 8) )
    {
      v17 = *(unsigned int **)a2;
      v18 = **(_DWORD **)a2;
      if ( v16 >= v18 )
        break;
      v19 = v18 - v16 - 1;
      if ( !v17 || (unsigned int)v19 >= v18 )
        break;
      _mm_lfence();
      v20 = *(_QWORD *)&v17[6 * v19 + 4];
      v21 = v16 + 1;
      v22 = v17[6 * v19 + 6];
      ++v16;
      if ( v20 )
      {
        v23 = *(_QWORD *)(v20 + 312);
        v24 = *(_QWORD *)(v23 + 40);
        if ( v24 )
        {
          if ( *(_QWORD *)(v24 + 48) )
          {
            if ( !a3 || v22 )
            {
              v25 = *(_QWORD *)(v23 + 40);
              memmove(v15, *(const void **)(v24 + 48), *(unsigned __int16 *)(v24 + 40));
              v26 = &v15[(unsigned __int64)*(unsigned __int16 *)(v25 + 40) >> 1];
              *v26 = 0;
              v15 = v26 + 1;
            }
            v16 = v21;
          }
        }
      }
    }
    *v15 = 0;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
