/*
 * XREFs of sub_14004D2A0 @ 0x14004D2A0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14004CF38 @ 0x14004CF38 (sub_14004CF38.c)
 */

_QWORD *__fastcall sub_14004D2A0(_QWORD *a1, char a2)
{
  sub_14004CF38(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free((__int64)a1);
  return a1;
}
