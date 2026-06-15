/*
 * XREFs of sub_1400381A0 @ 0x1400381A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400381D8 @ 0x1400381D8 (sub_1400381D8.c)
 *     j__o_free @ 0x1400492B8 (j__o_free.c)
 */

__int64 __fastcall sub_1400381A0(__int64 a1, char a2)
{
  sub_1400381D8();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
