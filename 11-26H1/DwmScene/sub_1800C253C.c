/*
 * XREFs of sub_1800C253C @ 0x1800C253C
 * Callers:
 *     sub_1800C31E8 @ 0x1800C31E8 (sub_1800C31E8.c)
 *     sub_1800C37E0 @ 0x1800C37E0 (sub_1800C37E0.c)
 *     sub_1800C50F4 @ 0x1800C50F4 (sub_1800C50F4.c)
 * Callees:
 *     sub_180053314 @ 0x180053314 (sub_180053314.c)
 */

void ***__fastcall sub_1800C253C(void ***a1, void ***a2)
{
  void **v2; // rax
  void **v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    sub_180053314((__int64)a1, v4);
  return a1;
}
