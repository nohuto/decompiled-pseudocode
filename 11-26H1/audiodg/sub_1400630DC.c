/*
 * XREFs of sub_1400630DC @ 0x1400630DC
 * Callers:
 *     sub_1400B2630 @ 0x1400B2630 (sub_1400B2630.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_1400630DC(__int64 *a1)
{
  __int64 result; // rax

  result = j_j__o_free(*a1);
  *a1 = 0LL;
  return result;
}
