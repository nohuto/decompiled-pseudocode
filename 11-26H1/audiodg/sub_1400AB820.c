/*
 * XREFs of sub_1400AB820 @ 0x1400AB820
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400461D0 @ 0x1400461D0 (sub_1400461D0.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_1400AB820(__int64 a1, char a2)
{
  sub_1400461D0(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
