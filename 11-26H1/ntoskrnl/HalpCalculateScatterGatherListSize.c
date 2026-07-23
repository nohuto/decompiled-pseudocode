/*
 * XREFs of HalpCalculateScatterGatherListSize @ 0x14035C470
 * Callers:
 *     HalBuildScatterGatherListV2 @ 0x14035BE20 (HalBuildScatterGatherListV2.c)
 *     HalCalculateScatterGatherListSizeV2 @ 0x1404E1870 (HalCalculateScatterGatherListSizeV2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpCalculateScatterGatherListSize(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        _DWORD *a6,
        int *a7)
{
  int v7; // r10d
  int v9; // esi
  int v10; // edi
  unsigned int v11; // eax
  int v12; // r8d
  unsigned int v13; // r11d
  unsigned int v14; // edx
  unsigned int v15; // ecx
  unsigned __int64 v16; // rdi
  int v17; // esi
  bool v18; // cc
  bool v19; // zf
  unsigned int v20; // ecx
  unsigned int v22; // ecx
  int v23; // ebp
  bool v24; // cc
  bool v25; // zf
  unsigned int v26; // esi
  bool v27; // cc

  v7 = 0;
  if ( *(_DWORD *)(a1 + 156) == 2 )
  {
    v9 = 1;
  }
  else
  {
    v9 = HalpCoreDmaAlignment;
    if ( *(_BYTE *)(a1 + 445) )
      v9 = 1;
  }
  if ( a2 )
  {
    v10 = 0;
    v11 = *((_DWORD *)a2 + 8) + *((_DWORD *)a2 + 10) + *((_DWORD *)a2 + 11) - a3;
    v12 = a3 & 0xFFF;
    v13 = v11;
    if ( v11 >= a4 )
    {
LABEL_5:
      if ( v11 + 4096 < v12 + a4 )
        return 3221225507LL;
      v14 = a4 + v13 + v12 - v11;
      v15 = (v14 + 4095) >> 12;
      LODWORD(v16) = v15 + v10;
      v17 = v9 - 1;
      if ( (v17 & v12) != 0 )
      {
        ++v7;
        v18 = v15 <= 1;
      }
      else
      {
        v18 = v15 <= 1;
        if ( v15 == 1 )
        {
          v19 = ((a4 + v13 - v11) & v17) == 0;
          goto LABEL_9;
        }
      }
      if ( !v18 )
      {
        v19 = (v14 & v17) == 0;
        goto LABEL_9;
      }
      goto LABEL_11;
    }
    while ( 1 )
    {
      a2 = (__int64 *)*a2;
      if ( !a2 )
        goto LABEL_5;
      v22 = (v12 + v13 + 4095) >> 12;
      v23 = v9 - 1;
      v10 += v22;
      if ( ((v9 - 1) & v12) != 0 )
      {
        ++v7;
        v24 = v22 <= 1;
      }
      else
      {
        v24 = v22 <= 1;
        if ( v22 == 1 )
        {
          v25 = (v23 & v13) == 0;
          goto LABEL_26;
        }
      }
      if ( !v24 )
      {
        v25 = ((v12 + v13) & v23) == 0;
LABEL_26:
        if ( !v25 )
          ++v7;
      }
      v13 = *((_DWORD *)a2 + 10);
      v11 += v13;
      v12 = *((_DWORD *)a2 + 11);
      if ( v11 >= a4 )
        goto LABEL_5;
    }
  }
  v16 = ((a3 & 0xFFF) + (unsigned __int64)a4 + 4095) >> 12;
  v26 = v9 - 1;
  if ( (v26 & (unsigned int)a3) != 0 )
  {
    v7 = 1;
    v27 = (unsigned int)v16 <= 1;
  }
  else
  {
    v27 = (unsigned int)v16 <= 1;
    if ( (_DWORD)v16 == 1 )
    {
      if ( (v26 & a4) != 0 )
        v7 = 1;
      goto LABEL_11;
    }
  }
  if ( !v27 )
  {
    v19 = ((a4 + a3) & v26) == 0;
LABEL_9:
    if ( !v19 )
      ++v7;
  }
LABEL_11:
  if ( (unsigned int)v16 > *(_DWORD *)(a1 + 232) )
    return 3221225626LL;
  v20 = 24 * v16 + 16;
  if ( *(_BYTE *)(a1 + 440) || !*(_BYTE *)(a1 + 445) )
  {
    v20 = 24 * v16 + 64;
    if ( v20 < 0xA0 )
      v20 = 160;
  }
  *a5 = v20;
  if ( a6 )
    *a6 = v16;
  if ( a7 )
    *a7 = v7;
  return 0LL;
}
