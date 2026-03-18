/*
 * XREFs of PruneMode @ 0x140080EE0
 * Callers:
 *     PruneModesByDisplayDeviceCaps @ 0x140080A98 (PruneModesByDisplayDeviceCaps.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PruneMode(_DWORD *a1, _DWORD *a2, int a3, unsigned int *a4, int a5)
{
  unsigned int v5; // ebp
  unsigned int v6; // r10d
  BOOL v7; // ebx
  __int64 v8; // r14
  unsigned int v11; // r8d
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // ebx
  unsigned int v15; // r11d
  int v16; // edx
  _DWORD *v17; // rcx
  __int64 i; // r9
  int v19; // r8d
  int v20; // eax

  v5 = 0;
  v6 = a1[46];
  v7 = 0;
  v8 = a3;
  if ( (a1[18] & 0x80u) != 0 )
    v7 = ((a1[21] - 1) & 0xFFFFFFFD) == 0;
  if ( v6 > 1 && a5 < 0 )
  {
    if ( v6 < *a4 || v6 > a4[1] && v6 > 0x3D )
      return 1LL;
    v11 = a1[44];
    v12 = v6 * v11;
    if ( v6 * v11 < a4[2] && v6 < 0x3C )
      return 1LL;
    if ( v12 > a4[3] && v6 > 0x3D || a1[43] * v12 > a4[5] )
      return 1LL;
    v13 = 107;
    if ( v11 <= 0x258 )
      v13 = 105;
    v5 = v12 * v13 / 0x64;
  }
  if ( v7 )
  {
    v14 = a1[44];
    v15 = a1[43];
  }
  else
  {
    v14 = a1[43];
    v15 = a1[44];
  }
  if ( !(_DWORD)v8 || (a5 & 0x40000000) == 0 || v15 <= a2[6 * v8 - 5] )
  {
    v16 = 0;
    v17 = a2;
    for ( i = 0LL; i < v8; ++i )
    {
      if ( v14 == *v17 )
        v19 = v15 - v17[1];
      else
        v19 = v14 - *v17;
      if ( v19 <= 0 )
        goto LABEL_26;
      if ( v16 >= (int)v8 - 1 )
      {
        if ( (a5 & 0x40000000) != 0 )
          return 1LL;
LABEL_26:
        if ( v6 <= 1 || a5 >= 0 )
          return 0LL;
        if ( !v19 || (v20 = v16 - 1, !v16) )
          v20 = v16;
        return v6 > a2[6 * v20 + 2] && v6 > 0x3D && (!v19 || v16 > 0)
            || v6 < a2[6 * v20 + 3]
            || v5 < a2[6 * v20 + 4] && v6 < 0x3C
            || v5 > a2[6 * v20 + 5] && v6 > 0x3D;
      }
      ++v16;
      v17 += 6;
    }
  }
  return 1LL;
}
