/*
 * XREFs of BgpGxBlendColor @ 0x1404A6618
 * Callers:
 *     RaspAntiAlias @ 0x1404A64BC (RaspAntiAlias.c)
 *     BgpGxBlendRectangle @ 0x140C577E0 (BgpGxBlendRectangle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpGxBlendColor(int a1, int a2, unsigned __int8 a3)
{
  int v3; // r10d
  unsigned int v5; // [rsp+18h] [rbp+18h]

  v3 = 255 - a3;
  HIWORD(v5) = (unsigned __int8)(a3 * (unsigned int)BYTE2(a2) / 0xFF - (-1 - a3) * BYTE2(a1));
  BYTE1(v5) = a3 * (unsigned int)BYTE1(a2) / 0xFF + v3 * BYTE1(a1) / 255;
  LOBYTE(v5) = a3 * (unsigned int)(unsigned __int8)a2 / 0xFF + v3 * (unsigned __int8)a1 / 255;
  return v5;
}
