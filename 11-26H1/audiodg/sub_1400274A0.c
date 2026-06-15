/*
 * XREFs of sub_1400274A0 @ 0x1400274A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400274DC @ 0x1400274DC (sub_1400274DC.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_1400274A0(__int64 a1, char a2)
{
  sub_1400274DC();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 280LL);
  return a1;
}
