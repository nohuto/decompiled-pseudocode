/*
 * XREFs of sub_140070680 @ 0x140070680
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14007054C @ 0x14007054C (sub_14007054C.c)
 */

__int64 __fastcall sub_140070680(__int64 a1, char a2)
{
  sub_14007054C(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
