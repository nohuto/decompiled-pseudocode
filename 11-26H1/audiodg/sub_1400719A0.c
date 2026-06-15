/*
 * XREFs of sub_1400719A0 @ 0x1400719A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140027570 @ 0x140027570 (sub_140027570.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_1400719A0(__int64 a1, char a2)
{
  sub_140027570(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
