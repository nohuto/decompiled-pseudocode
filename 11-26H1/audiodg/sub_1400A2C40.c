/*
 * XREFs of sub_1400A2C40 @ 0x1400A2C40
 * Callers:
 *     sub_14009E30C @ 0x14009E30C (sub_14009E30C.c)
 * Callees:
 *     sub_14009DAF4 @ 0x14009DAF4 (sub_14009DAF4.c)
 *     sub_1400A23BC @ 0x1400A23BC (sub_1400A23BC.c)
 */

char __fastcall sub_1400A2C40(__int64 a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  sub_14009DAF4(a1, &v5);
  v2 = v5 & 1;
  sub_1400A23BC(a1, v5 & 1, v3);
  return v2;
}
