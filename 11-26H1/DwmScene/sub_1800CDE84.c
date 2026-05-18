/*
 * XREFs of sub_1800CDE84 @ 0x1800CDE84
 * Callers:
 *     sub_1800CF690 @ 0x1800CF690 (sub_1800CF690.c)
 * Callees:
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 */

__int64 __fastcall sub_1800CDE84(__int64 *a1)
{
  sub_18000BFA4((__int64)(a1 + 6), 48LL, 2LL, (void (__fastcall *)(__int64))sub_1800CDE40);
  sub_18000F938(a1 + 4);
  sub_18000F938(a1 + 3);
  sub_18000F938(a1 + 2);
  return sub_18000F938(a1 + 1);
}
