/*
 * XREFs of sub_14006B800 @ 0x14006B800
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14006B7BC @ 0x14006B7BC (sub_14006B7BC.c)
 */

__int64 __fastcall sub_14006B800(__int64 a1, char a2)
{
  sub_14006B7BC(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
