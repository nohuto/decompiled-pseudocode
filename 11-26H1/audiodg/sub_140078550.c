/*
 * XREFs of sub_140078550 @ 0x140078550
 * Callers:
 *     sub_140078480 @ 0x140078480 (sub_140078480.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_140077E70 @ 0x140077E70 (sub_140077E70.c)
 */

__int64 __fastcall sub_140078550(__int64 a1, char a2)
{
  sub_140077E70(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
