/*
 * XREFs of sub_140064E60 @ 0x140064E60
 * Callers:
 *     <none>
 * Callees:
 *     sub_14001DBC0 @ 0x14001DBC0 (sub_14001DBC0.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140064E60(__int64 a1, char a2)
{
  sub_14001DBC0(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
