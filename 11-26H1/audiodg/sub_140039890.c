/*
 * XREFs of sub_140039890 @ 0x140039890
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400398CC @ 0x1400398CC (sub_1400398CC.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140039890(__int64 a1, char a2)
{
  sub_1400398CC();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 32LL);
  return a1;
}
