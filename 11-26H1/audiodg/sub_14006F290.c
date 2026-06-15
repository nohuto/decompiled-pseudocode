/*
 * XREFs of sub_14006F290 @ 0x14006F290
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14006F158 @ 0x14006F158 (sub_14006F158.c)
 */

__int64 __fastcall sub_14006F290(__int64 a1, char a2)
{
  sub_14006F158(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
