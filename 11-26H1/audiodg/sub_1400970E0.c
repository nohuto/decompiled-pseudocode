/*
 * XREFs of sub_1400970E0 @ 0x1400970E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140044FC4 @ 0x140044FC4 (sub_140044FC4.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_1400970E0(_QWORD *a1, char a2)
{
  sub_140044FC4(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free((__int64)a1);
  return a1;
}
