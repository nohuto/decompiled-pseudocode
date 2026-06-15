/*
 * XREFs of sub_1400787E0 @ 0x1400787E0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_140078040 @ 0x140078040 (sub_140078040.c)
 */

_QWORD *__fastcall sub_1400787E0(_QWORD *a1, char a2)
{
  sub_140078040(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free((__int64)a1);
  return a1;
}
