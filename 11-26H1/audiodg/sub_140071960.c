/*
 * XREFs of sub_140071960 @ 0x140071960
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_140071910 @ 0x140071910 (sub_140071910.c)
 */

__int64 __fastcall sub_140071960(__int64 a1, char a2)
{
  sub_140071910(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
