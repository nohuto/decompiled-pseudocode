/*
 * XREFs of RtlNumberOfSetBitsInRange @ 0x1404FD660
 * Callers:
 *     RtlNumberOfClearBitsInRange @ 0x140618B80 (RtlNumberOfClearBitsInRange.c)
 *     KiTpIsExcludedKernelTracepointLocation @ 0x1407BC378 (KiTpIsExcludedKernelTracepointLocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlNumberOfSetBitsInRange(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // r9d
  char *v5; // r8
  unsigned int v6; // r11d
  __int64 v7; // rdi
  int v8; // esi
  unsigned int v9; // r10d
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  char v13; // dl
  int v14; // edx
  unsigned __int8 v15; // cl
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  char v18; // cl

  if ( a2 >= *(_DWORD *)a1 )
    return 0xFFFFFFFFLL;
  if ( *(_DWORD *)a1 - a2 < a3 )
    return 0xFFFFFFFFLL;
  v4 = 0;
  if ( !a3 )
    return 0xFFFFFFFFLL;
  v5 = (char *)(*(_QWORD *)(a1 + 8) + (a2 >> 3));
  v6 = (a3 + a2 - 1) >> 3;
  v7 = a2 & 7;
  v8 = (a3 + a2 - 1) & 7;
  v9 = a2 >> 3;
  if ( a2 >> 3 == v6 )
    return *((unsigned __int8 *)RtlpBitsClearTotal
           + (unsigned __int8)~(*v5 & byte_140017F38[v7] & byte_140032340[v8 + 1]));
  if ( (((unsigned __int8)a3 | (unsigned __int8)a2) & 0x3F) != 0 )
  {
    if ( (a2 & 7) != 0 )
    {
      v13 = *v5++;
      ++v9;
      v4 = *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~(v13 & byte_140017F38[v7]));
    }
    v14 = 8 - (v9 & 7);
    if ( (v14 & 0xFFFFFFF7) != 0 )
    {
      do
      {
        if ( v9 >= v6 )
          break;
        ++v9;
        v15 = ~*v5++;
        v4 += *((unsigned __int8 *)RtlpBitsClearTotal + v15);
        --v14;
      }
      while ( v14 );
    }
    while ( (unsigned __int64)v9 + 8 <= v6 )
    {
      v16 = *(_QWORD *)v5;
      v5 += 8;
      v4 += __popcnt(v16);
      v9 += 8;
    }
    if ( v9 < v6 )
    {
      v17 = v6 - v9;
      do
      {
        v18 = *v5++;
        v4 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v18);
        --v17;
      }
      while ( v17 );
    }
    return v4 + *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~(*v5 & byte_140032340[v8 + 1]));
  }
  else
  {
    v11 = ((a3 - 1) >> 6) + 1;
    do
    {
      v12 = *(_QWORD *)v5;
      v5 += 8;
      v4 += __popcnt(v12);
      --v11;
    }
    while ( v11 );
    return v4;
  }
}
