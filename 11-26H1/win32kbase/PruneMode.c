/*
 * XREFs of PruneMode @ 0x140029930
 * Callers:
 *     PruneModesByDisplayDeviceCaps @ 0x140029454 (PruneModesByDisplayDeviceCaps.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PruneMode(_DWORD *a1, _DWORD *a2, int a3, unsigned int *a4, int a5)
{
  int v5; // r10d
  unsigned int v6; // edi
  __int64 v8; // rbx
  unsigned int v10; // esi
  int v11; // r8d
  int v12; // eax
  unsigned int v13; // esi
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // r8d
  unsigned int v17; // r9d
  _DWORD *v18; // rdx
  int v19; // eax
  int v20; // ecx

  v5 = 0;
  v6 = a1[46];
  v8 = a3;
  v10 = 0;
  v11 = 0;
  if ( (a1[18] & 0x80u) != 0 )
  {
    v12 = a1[21];
    if ( v12 == 1 || v12 == 3 )
      v11 = 1;
  }
  if ( v6 > 1 && a5 < 0 )
  {
    if ( v6 < *a4 || v6 > a4[1] && v6 > 0x3D )
      return 1LL;
    v13 = a1[44];
    v14 = v6 * v13;
    if ( v6 * v13 < a4[2] && v6 < 0x3C )
      return 1LL;
    if ( v14 > a4[3] && v6 > 0x3D || a1[43] * v14 > a4[5] )
      return 1LL;
    v15 = 107;
    if ( v13 <= 0x258 )
      v15 = 105;
    v10 = v14 * v15 / 0x64;
  }
  if ( v11 )
  {
    v16 = a1[44];
    v17 = a1[43];
  }
  else
  {
    v16 = a1[43];
    v17 = a1[44];
  }
  if ( !(_DWORD)v8 || (a5 & 0x40000000) == 0 || v17 <= a2[6 * v8 - 5] )
  {
    v18 = a2;
    while ( v5 < (int)v8 )
    {
      if ( v16 == *v18 )
        v19 = v17 - v18[1];
      else
        v19 = v16 - *v18;
      if ( v19 <= 0 )
        goto LABEL_27;
      if ( v5 >= (int)v8 - 1 )
      {
        if ( (a5 & 0x40000000) != 0 )
          return 1LL;
LABEL_27:
        if ( v6 <= 1 || a5 >= 0 )
          return 0LL;
        v20 = v19 && v5 ? v5 - 1 : v5;
        return v6 > a2[6 * v20 + 2] && v6 > 0x3D && (!v19 || v5 > 0)
            || v6 < a2[6 * v20 + 3]
            || v10 < a2[6 * v20 + 4] && v6 < 0x3C
            || v10 > a2[6 * v20 + 5] && v6 > 0x3D;
      }
      ++v5;
      v18 += 6;
    }
  }
  return 1LL;
}
