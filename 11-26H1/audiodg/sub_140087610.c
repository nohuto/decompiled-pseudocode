/*
 * XREFs of sub_140087610 @ 0x140087610
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400874F8 @ 0x1400874F8 (sub_1400874F8.c)
 */

__int64 __fastcall sub_140087610(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_1400874F8(a1, a2);
  if ( (v2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
