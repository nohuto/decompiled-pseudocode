/*
 * XREFs of sub_140097020 @ 0x140097020
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004505C @ 0x14004505C (sub_14004505C.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140097020(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl

  v3 = a2;
  sub_14004505C(a1, a2, a3);
  if ( (v3 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
