/*
 * XREFs of sub_1400A2F50 @ 0x1400A2F50
 * Callers:
 *     <none>
 * Callees:
 *     sub_140038DD8 @ 0x140038DD8 (sub_140038DD8.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_1400A2F50(__int64 a1, char a2)
{
  sub_140038DD8(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
