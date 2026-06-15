/*
 * XREFs of sub_1400A2BC8 @ 0x1400A2BC8
 * Callers:
 *     sub_14009E120 @ 0x14009E120 (sub_14009E120.c)
 * Callees:
 *     sub_14009D86C @ 0x14009D86C (sub_14009D86C.c)
 *     sub_1400A22A4 @ 0x1400A22A4 (sub_1400A22A4.c)
 */

char __fastcall sub_1400A2BC8(__int64 a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  sub_14009D86C(a1, &v5);
  v2 = v5 & 1;
  sub_1400A22A4(a1, v5 & 1, v3);
  return v2;
}
