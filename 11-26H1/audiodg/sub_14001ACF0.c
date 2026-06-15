/*
 * XREFs of sub_14001ACF0 @ 0x14001ACF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14001AF44 @ 0x14001AF44 (sub_14001AF44.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_14001ACF0(__int64 a1, char a2)
{
  sub_14001AF44();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 136LL);
  return a1;
}
