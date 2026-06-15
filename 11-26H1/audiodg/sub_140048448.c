/*
 * XREFs of sub_140048448 @ 0x140048448
 * Callers:
 *     sub_1400253A8 @ 0x1400253A8 (sub_1400253A8.c)
 *     sub_14003D070 @ 0x14003D070 (sub_14003D070.c)
 *     sub_1400AF645 @ 0x1400AF645 (sub_1400AF645.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140048448(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return j_j__o_free(v1, 40LL);
  return result;
}
