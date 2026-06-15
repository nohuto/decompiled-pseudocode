/*
 * XREFs of sub_140016D20 @ 0x140016D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_140016D5C @ 0x140016D5C (sub_140016D5C.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140016D20(__int64 a1, char a2)
{
  sub_140016D5C();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 232LL);
  return a1;
}
