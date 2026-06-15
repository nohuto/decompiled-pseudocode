/*
 * XREFs of sub_1400753C0 @ 0x1400753C0
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x1400492B8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1400753C0(_QWORD *a1, char a2)
{
  *a1 = off_1400BB190;
  if ( (a2 & 1) != 0 )
    j__o_free((__int64)a1);
  return a1;
}
