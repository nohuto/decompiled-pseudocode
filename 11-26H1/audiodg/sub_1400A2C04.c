/*
 * XREFs of sub_1400A2C04 @ 0x1400A2C04
 * Callers:
 *     sub_14009E224 @ 0x14009E224 (sub_14009E224.c)
 * Callees:
 *     sub_14009D9B0 @ 0x14009D9B0 (sub_14009D9B0.c)
 *     sub_1400A2330 @ 0x1400A2330 (sub_1400A2330.c)
 */

char __fastcall sub_1400A2C04(__int64 a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  sub_14009D9B0(a1, &v5);
  v2 = v5 & 1;
  sub_1400A2330(a1, v5 & 1, v3);
  return v2;
}
