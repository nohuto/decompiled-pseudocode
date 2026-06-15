/*
 * XREFs of sub_14006A940 @ 0x14006A940
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003BF4 @ 0x140003BF4 (sub_140003BF4.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_14006A940(_QWORD *a1, char a2)
{
  sub_140003BF4(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free((__int64)a1);
  return a1;
}
