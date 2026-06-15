/*
 * XREFs of sub_14002C660 @ 0x14002C660
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_14002C660(_QWORD *a1, char a2)
{
  *a1 = off_1400B9F68;
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 80LL);
  return a1;
}
