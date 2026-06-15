/*
 * XREFs of sub_14006CD00 @ 0x14006CD00
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14006CB4C @ 0x14006CB4C (sub_14006CB4C.c)
 */

__int64 __fastcall sub_14006CD00(__int64 a1, char a2)
{
  sub_14006CB4C(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
