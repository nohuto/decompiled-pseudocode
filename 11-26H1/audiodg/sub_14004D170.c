/*
 * XREFs of sub_14004D170 @ 0x14004D170
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14004CC9C @ 0x14004CC9C (sub_14004CC9C.c)
 */

__int64 __fastcall sub_14004D170(__int64 a1, char a2)
{
  sub_14004CC9C(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
