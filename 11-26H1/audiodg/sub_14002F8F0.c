/*
 * XREFs of sub_14002F8F0 @ 0x14002F8F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14002F92C @ 0x14002F92C (sub_14002F92C.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_14002F8F0(__int64 a1, char a2)
{
  sub_14002F92C();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 96LL);
  return a1;
}
