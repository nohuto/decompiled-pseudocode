/*
 * XREFs of sub_140078760 @ 0x140078760
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_140077F80 @ 0x140077F80 (sub_140077F80.c)
 */

_QWORD *__fastcall sub_140078760(_QWORD *a1, char a2)
{
  sub_140077F80(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free((__int64)a1);
  return a1;
}
