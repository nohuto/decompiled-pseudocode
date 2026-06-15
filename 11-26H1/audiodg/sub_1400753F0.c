/*
 * XREFs of sub_1400753F0 @ 0x1400753F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140048258 @ 0x140048258 (sub_140048258.c)
 *     j__o_free @ 0x1400492B8 (j__o_free.c)
 */

__int64 __fastcall sub_1400753F0(__int64 a1, char a2)
{
  sub_140048258(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
