/*
 * XREFs of ?IsValidFONTSIM@@YA_NPEBXKJ@Z @ 0x1401BF02C
 * Callers:
 *     ?IsValidIFIMETRICS@@YA_NPEBU_IFIMETRICS@@K@Z @ 0x1401BEE4C (-IsValidIFIMETRICS@@YA_NPEBU_IFIMETRICS@@K@Z.c)
 * Callees:
 *     ?IsValidFONTDIFF@@YA_NPEBXKJ@Z @ 0x1401BF0A0 (-IsValidFONTDIFF@@YA_NPEBXKJ@Z.c)
 */

bool __fastcall IsValidFONTSIM(char *a1, unsigned int a2, int a3)
{
  int *v3; // r10
  unsigned int v4; // edx
  __int64 v5; // r10
  const void *v6; // r11
  unsigned int v7; // edx
  __int64 v8; // r10
  const void *v9; // r11
  bool result; // al

  result = 1;
  if ( a3 )
  {
    if ( a3 <= 0 )
      return 0;
    if ( a3 >= a2 )
      return 0;
    if ( a2 <= 0xC )
      return 0;
    if ( (unsigned int)a3 >= (unsigned __int64)a2 - 12 )
      return 0;
    v3 = (int *)&a1[a3];
    if ( ((unsigned __int8)v3 & 3) != 0
      || !IsValidFONTDIFF(a1, a2, *v3)
      || !IsValidFONTDIFF(v6, v4, *(_DWORD *)(v5 + 4))
      || !IsValidFONTDIFF(v9, v7, *(_DWORD *)(v8 + 8)) )
    {
      return 0;
    }
  }
  return result;
}
