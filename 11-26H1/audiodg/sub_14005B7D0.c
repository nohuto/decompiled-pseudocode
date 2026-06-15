/*
 * XREFs of sub_14005B7D0 @ 0x14005B7D0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14005B75C @ 0x14005B75C (sub_14005B75C.c)
 */

__int64 __fastcall sub_14005B7D0(__int64 a1, char a2)
{
  sub_14005B75C(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
