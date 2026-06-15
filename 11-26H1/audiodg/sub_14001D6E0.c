/*
 * XREFs of sub_14001D6E0 @ 0x14001D6E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14001D71C @ 0x14001D71C (sub_14001D71C.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_14001D6E0(__int64 a1, char a2)
{
  sub_14001D71C();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 408LL);
  return a1;
}
