/*
 * XREFs of sub_14004D0F0 @ 0x14004D0F0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14004CC14 @ 0x14004CC14 (sub_14004CC14.c)
 */

__int64 __fastcall sub_14004D0F0(__int64 a1, char a2)
{
  sub_14004CC14(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
