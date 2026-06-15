/*
 * XREFs of sub_140097060 @ 0x140097060
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_140096938 @ 0x140096938 (sub_140096938.c)
 */

__int64 __fastcall sub_140097060(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl

  v3 = a2;
  sub_140096938(a1, a2, a3);
  if ( (v3 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
