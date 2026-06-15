/*
 * XREFs of sub_140060800 @ 0x140060800
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400607A0 @ 0x1400607A0 (sub_1400607A0.c)
 */

__int64 __fastcall sub_140060800(__int64 a1, char a2)
{
  sub_1400607A0(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
