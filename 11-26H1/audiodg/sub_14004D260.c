/*
 * XREFs of sub_14004D260 @ 0x14004D260
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14004CEE8 @ 0x14004CEE8 (sub_14004CEE8.c)
 */

_QWORD *__fastcall sub_14004D260(_QWORD *a1, char a2)
{
  sub_14004CEE8(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free((__int64)a1);
  return a1;
}
