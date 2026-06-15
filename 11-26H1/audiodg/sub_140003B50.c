/*
 * XREFs of sub_140003B50 @ 0x140003B50
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003BF4 @ 0x140003BF4 (sub_140003BF4.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140003B50(__int64 a1, char a2)
{
  sub_140003BF4();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 64LL);
  return a1;
}
