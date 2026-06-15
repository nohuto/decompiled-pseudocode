/*
 * XREFs of sub_14003D190 @ 0x14003D190
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_14003D190(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 24LL);
  return a1;
}
