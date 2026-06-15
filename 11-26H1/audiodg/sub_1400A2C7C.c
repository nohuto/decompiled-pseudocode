/*
 * XREFs of sub_1400A2C7C @ 0x1400A2C7C
 * Callers:
 *     sub_1400A01A0 @ 0x1400A01A0 (sub_1400A01A0.c)
 *     sub_1400A10D0 @ 0x1400A10D0 (sub_1400A10D0.c)
 * Callees:
 *     sub_14009DC38 @ 0x14009DC38 (sub_14009DC38.c)
 *     sub_1400A2448 @ 0x1400A2448 (sub_1400A2448.c)
 */

char __fastcall sub_1400A2C7C(__int64 a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  sub_14009DC38(a1, &v5);
  v2 = v5 & 1;
  sub_1400A2448(a1, v5 & 1, v3);
  return v2;
}
