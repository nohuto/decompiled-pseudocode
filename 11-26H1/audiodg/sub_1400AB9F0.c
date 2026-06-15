/*
 * XREFs of sub_1400AB9F0 @ 0x1400AB9F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004615C @ 0x14004615C (sub_14004615C.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_1400AB9F0(_QWORD *a1, char a2)
{
  sub_14004615C(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free((__int64)a1);
  return a1;
}
