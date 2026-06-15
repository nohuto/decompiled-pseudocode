/*
 * XREFs of sub_140018470 @ 0x140018470
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400184AC @ 0x1400184AC (sub_1400184AC.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140018470(__int64 a1, char a2)
{
  sub_1400184AC();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 280LL);
  return a1;
}
