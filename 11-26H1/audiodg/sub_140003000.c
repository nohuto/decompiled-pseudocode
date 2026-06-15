/*
 * XREFs of sub_140003000 @ 0x140003000
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000303C @ 0x14000303C (sub_14000303C.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140003000(__int64 a1, char a2)
{
  sub_14000303C();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 56LL);
  return a1;
}
