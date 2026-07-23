/*
 * XREFs of GxpMatchPaletteColor @ 0x14071B074
 * Callers:
 *     BgpGxConvertRectangleEx @ 0x14048B3C0 (BgpGxConvertRectangleEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GxpMatchPaletteColor(int a1, _BYTE *a2)
{
  unsigned int v2; // r11d
  unsigned int v3; // r8d
  signed __int64 v5; // r9
  unsigned int v6; // r10d
  unsigned __int8 *v7; // rbx
  __int64 v8; // rsi
  int v9; // eax
  int v10; // edx
  __int64 result; // rax
  int v12; // [rsp+8h] [rbp+8h] BYREF

  v12 = a1;
  v2 = -1;
  v3 = 0;
  v5 = (char *)FourBitPalette - (char *)&v12;
  do
  {
    v6 = 0;
    v7 = (unsigned __int8 *)&v12;
    v8 = 3LL;
    do
    {
      v9 = v7[v5];
      v10 = v9 - *v7;
      if ( v10 < 0 )
        v10 = *v7 - v9;
      ++v7;
      result = v6 + v10;
      v6 = result + 2 * v10;
      --v8;
    }
    while ( v8 );
    if ( v6 < v2 )
    {
      v2 = result + 2 * v10;
      *a2 = v3;
    }
    ++v3;
    v5 += 4LL;
  }
  while ( v3 < 0x10 );
  return result;
}
