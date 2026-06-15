/*
 * XREFs of sub_14001DB00 @ 0x14001DB00
 * Callers:
 *     <none>
 * Callees:
 *     sub_14001DB3C @ 0x14001DB3C (sub_14001DB3C.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_14001DB00(__int64 a1, char a2)
{
  sub_14001DB3C();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 112LL);
  return a1;
}
