/*
 * XREFs of sub_140005860 @ 0x140005860
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000589C @ 0x14000589C (sub_14000589C.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140005860(__int64 a1, char a2)
{
  sub_14000589C();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 56LL);
  return a1;
}
