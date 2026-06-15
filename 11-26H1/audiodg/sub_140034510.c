/*
 * XREFs of sub_140034510 @ 0x140034510
 * Callers:
 *     <none>
 * Callees:
 *     sub_14003454C @ 0x14003454C (sub_14003454C.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140034510(__int64 a1, char a2)
{
  sub_14003454C();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 392LL);
  return a1;
}
