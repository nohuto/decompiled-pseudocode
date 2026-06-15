/*
 * XREFs of sub_14004AE90 @ 0x14004AE90
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x1400492B8 (j__o_free.c)
 *     sub_14004AE5C @ 0x14004AE5C (sub_14004AE5C.c)
 */

_QWORD *__fastcall sub_14004AE90(_QWORD *a1, char a2)
{
  sub_14004AE5C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free((__int64)a1);
  return a1;
}
