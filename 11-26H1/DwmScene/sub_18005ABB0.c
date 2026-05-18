/*
 * XREFs of sub_18005ABB0 @ 0x18005ABB0
 * Callers:
 *     sub_1800875B0 @ 0x1800875B0 (sub_1800875B0.c)
 * Callees:
 *     sub_18005A750 @ 0x18005A750 (sub_18005A750.c)
 *     sub_18005A8BC @ 0x18005A8BC (sub_18005A8BC.c)
 */

__int64 __fastcall sub_18005ABB0(__int64 a1)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v3 = 0LL;
  sub_18005A8BC(a1, v3);
  *(_OWORD *)v3 = 0LL;
  sub_18005A750(a1, v3);
  return sub_180052820((_QWORD *)(a1 + 448));
}
