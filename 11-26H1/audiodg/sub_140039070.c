/*
 * XREFs of sub_140039070 @ 0x140039070
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_140039070(_QWORD *a1, char a2)
{
  *a1 = off_1400BA810;
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 192LL);
  return a1;
}
