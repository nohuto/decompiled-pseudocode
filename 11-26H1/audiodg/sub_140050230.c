/*
 * XREFs of sub_140050230 @ 0x140050230
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14005005C @ 0x14005005C (sub_14005005C.c)
 */

__int64 __fastcall sub_140050230(__int64 a1, char a2)
{
  sub_14005005C(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
