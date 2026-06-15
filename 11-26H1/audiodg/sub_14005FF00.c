/*
 * XREFs of sub_14005FF00 @ 0x14005FF00
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14005FDB0 @ 0x14005FDB0 (sub_14005FDB0.c)
 */

__int64 __fastcall sub_14005FF00(__int64 a1, char a2)
{
  sub_14005FDB0(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
