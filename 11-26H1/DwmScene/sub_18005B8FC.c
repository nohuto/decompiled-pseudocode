/*
 * XREFs of sub_18005B8FC @ 0x18005B8FC
 * Callers:
 *     sub_180059108 @ 0x180059108 (sub_180059108.c)
 * Callees:
 *     sub_18005B9D8 @ 0x18005B9D8 (sub_18005B9D8.c)
 */

float __fastcall sub_18005B8FC(__int64 a1, float a2)
{
  float v3; // [rsp+80h] [rbp+10h] BYREF
  float v4; // [rsp+88h] [rbp+18h] BYREF

  v4 = 0.0;
  v3 = 0.0;
  sub_18005B9D8(&v4, &v3);
  return (float)(v3 / v4) / a2;
}
