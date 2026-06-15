/*
 * XREFs of sub_140097120 @ 0x140097120
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_140096A80 @ 0x140096A80 (sub_140096A80.c)
 */

_QWORD *__fastcall sub_140097120(_QWORD *a1, char a2)
{
  sub_140096A80(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free((__int64)a1);
  return a1;
}
