/*
 * XREFs of sub_14006F2D0 @ 0x14006F2D0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14006F0F4 @ 0x14006F0F4 (sub_14006F0F4.c)
 */

__int64 __fastcall sub_14006F2D0(__int64 a1, char a2)
{
  sub_14006F0F4(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
