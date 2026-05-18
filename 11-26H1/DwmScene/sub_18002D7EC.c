/*
 * XREFs of sub_18002D7EC @ 0x18002D7EC
 * Callers:
 *     sub_1800369D4 @ 0x1800369D4 (sub_1800369D4.c)
 * Callees:
 *     sub_18002CF4C @ 0x18002CF4C (sub_18002CF4C.c)
 */

float __fastcall sub_18002D7EC(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  float v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  sub_18002CF4C((__int64)&v3, (__int64)&v2);
  return v3;
}
