/*
 * XREFs of sub_1400970A0 @ 0x1400970A0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400969E8 @ 0x1400969E8 (sub_1400969E8.c)
 */

_QWORD *__fastcall sub_1400970A0(_QWORD *a1, char a2)
{
  sub_1400969E8(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free((__int64)a1);
  return a1;
}
