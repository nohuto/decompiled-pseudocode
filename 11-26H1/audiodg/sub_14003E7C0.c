/*
 * XREFs of sub_14003E7C0 @ 0x14003E7C0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_14003E7C0(_QWORD *a1, char a2)
{
  *a1 = off_1400BAED8;
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 24LL);
  return a1;
}
