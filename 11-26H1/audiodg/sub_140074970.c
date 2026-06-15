/*
 * XREFs of sub_140074970 @ 0x140074970
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_140074874 @ 0x140074874 (sub_140074874.c)
 */

__int64 __fastcall sub_140074970(__int64 a1, char a2)
{
  sub_140074874(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
