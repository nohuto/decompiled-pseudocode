/*
 * XREFs of MiSkipEntirePagefileRegions @ 0x140470110
 * Callers:
 *     MiQueryVadForVaAttributes @ 0x1402E7CD4 (MiQueryVadForVaAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSkipEntirePagefileRegions(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *v6; // rdi
  unsigned __int64 v7; // r11
  unsigned __int64 v9; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8

  v6 = *(_DWORD **)(a1 + 80);
  v7 = a2
     + ((__int64)(*(_QWORD *)(a1 + 88) - *((_QWORD *)v6 + 1)) >> 3)
     - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32));
  if ( (*(_DWORD *)(*(_QWORD *)v6 + 56LL) & 0x1000) != 0 || v6[12] >= 0x40000000u )
  {
    v11 = 0x40000LL;
    if ( v6[12] < 0x40000000u )
      v11 = 0x20000LL;
    v12 = (unsigned int)(v7 / v11);
    v13 = v7 / v11;
    v14 = v7 % v11;
    v15 = v12 + 1;
    if ( !v14 )
      v15 = v12;
    if ( v15 <= *(unsigned int *)(*(_QWORD *)v6 + 96LL) && v14 < (unsigned int)v6[22 * v13 + 11] )
      LODWORD(v7) = v14;
  }
  while ( !*(_QWORD *)(a5 + 8) )
  {
    v9 = (unsigned int)(*(_DWORD *)(a5 + 44) - v7);
    if ( v9 < (a4 - a3) >> 3 )
    {
      a5 = *(_QWORD *)(a5 + 16);
      a3 += 8 * v9;
      LODWORD(v7) = 0;
      if ( a5 )
        continue;
    }
    return a4;
  }
  return a3;
}
