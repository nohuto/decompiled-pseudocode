/*
 * XREFs of sub_1400A9560 @ 0x1400A9560
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400A948C @ 0x1400A948C (sub_1400A948C.c)
 */

__int64 __fastcall sub_1400A9560(__int64 a1, char a2)
{
  sub_1400A948C(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
