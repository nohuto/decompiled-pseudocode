/*
 * XREFs of sub_140078820 @ 0x140078820
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400780C0 @ 0x1400780C0 (sub_1400780C0.c)
 */

_QWORD *__fastcall sub_140078820(_QWORD *a1, char a2)
{
  sub_1400780C0(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free((__int64)a1);
  return a1;
}
