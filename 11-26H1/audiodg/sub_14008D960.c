/*
 * XREFs of sub_14008D960 @ 0x14008D960
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14008D8B0 @ 0x14008D8B0 (sub_14008D8B0.c)
 */

__int64 __fastcall sub_14008D960(__int64 a1, char a2)
{
  sub_14008D8B0(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
