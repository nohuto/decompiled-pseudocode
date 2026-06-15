/*
 * XREFs of sub_140059760 @ 0x140059760
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400592A0 @ 0x1400592A0 (sub_1400592A0.c)
 */

__int64 __fastcall sub_140059760(__int64 a1, char a2)
{
  sub_1400592A0(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
