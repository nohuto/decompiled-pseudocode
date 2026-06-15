/*
 * XREFs of sub_1400A3010 @ 0x1400A3010
 * Callers:
 *     <none>
 * Callees:
 *     sub_140038DA4 @ 0x140038DA4 (sub_140038DA4.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_1400A3010(_QWORD *a1, char a2)
{
  sub_140038DA4(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free((__int64)a1);
  return a1;
}
