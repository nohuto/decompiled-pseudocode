/*
 * XREFs of sub_180024D18 @ 0x180024D18
 * Callers:
 *     sub_1800260D0 @ 0x1800260D0 (sub_1800260D0.c)
 *     sub_180026C20 @ 0x180026C20 (sub_180026C20.c)
 *     sub_180026D10 @ 0x180026D10 (sub_180026D10.c)
 *     sub_180032AD4 @ 0x180032AD4 (sub_180032AD4.c)
 *     sub_180036544 @ 0x180036544 (sub_180036544.c)
 *     sub_1800369D4 @ 0x1800369D4 (sub_1800369D4.c)
 *     sub_180036EBC @ 0x180036EBC (sub_180036EBC.c)
 *     sub_180097D90 @ 0x180097D90 (sub_180097D90.c)
 * Callees:
 *     sub_180024738 @ 0x180024738 (sub_180024738.c)
 */

float __fastcall sub_180024D18(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  float v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  sub_180024738((__int64)&v3, (__int64)&v2);
  return v3;
}
