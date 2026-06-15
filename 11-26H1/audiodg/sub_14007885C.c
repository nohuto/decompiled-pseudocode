/*
 * XREFs of sub_14007885C @ 0x14007885C
 * Callers:
 *     sub_140078490 @ 0x140078490 (sub_140078490.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_140078134 @ 0x140078134 (sub_140078134.c)
 */

__int64 __fastcall sub_14007885C(__int64 a1, char a2)
{
  sub_140078134(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
