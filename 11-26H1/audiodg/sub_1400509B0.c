/*
 * XREFs of sub_1400509B0 @ 0x1400509B0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_1400509B0(_QWORD *a1, char a2)
{
  *a1 = off_1400BB828;
  if ( (a2 & 1) != 0 )
    j_j__o_free((__int64)a1);
  return a1;
}
