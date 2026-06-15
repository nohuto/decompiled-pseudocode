/*
 * XREFs of sub_140064EE0 @ 0x140064EE0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_140064AE0 @ 0x140064AE0 (sub_140064AE0.c)
 */

__int64 __fastcall sub_140064EE0(__int64 a1, char a2)
{
  sub_140064AE0(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
