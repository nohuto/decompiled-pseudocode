/*
 * XREFs of sub_140093F30 @ 0x140093F30
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_140093F30(_QWORD *a1, char a2)
{
  *a1 = off_1400BF318;
  if ( (a2 & 1) != 0 )
    j_j__o_free((__int64)a1);
  return a1;
}
