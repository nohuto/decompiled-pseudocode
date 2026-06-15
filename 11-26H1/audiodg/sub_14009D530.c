/*
 * XREFs of sub_14009D530 @ 0x14009D530
 * Callers:
 *     sub_1400A2730 @ 0x1400A2730 (sub_1400A2730.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400AD6FC @ 0x1400AD6FC (sub_1400AD6FC.c)
 */

_QWORD *__fastcall sub_14009D530(_QWORD *a1, char a2)
{
  *a1 = off_1400C0300;
  sub_1400AD6FC();
  if ( (a2 & 1) != 0 )
    j_j__o_free((__int64)a1);
  return a1;
}
