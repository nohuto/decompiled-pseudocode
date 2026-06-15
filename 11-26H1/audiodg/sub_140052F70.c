/*
 * XREFs of sub_140052F70 @ 0x140052F70
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_140050010 @ 0x140050010 (sub_140050010.c)
 */

__int64 __fastcall sub_140052F70(__int64 a1, char a2)
{
  sub_140050010(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
