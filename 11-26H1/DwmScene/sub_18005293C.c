/*
 * XREFs of sub_18005293C @ 0x18005293C
 * Callers:
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 * Callees:
 *     sub_180054510 @ 0x180054510 (sub_180054510.c)
 */

__int64 __fastcall sub_18005293C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx

  v4 = *a2;
  *a2 = 0LL;
  sub_180054510(a1, v4);
  return a1;
}
