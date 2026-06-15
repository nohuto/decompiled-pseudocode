/*
 * XREFs of sub_1400484D8 @ 0x1400484D8
 * Callers:
 *     sub_1400253A8 @ 0x1400253A8 (sub_1400253A8.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_1400484D8(__int64 **a1)
{
  __int64 result; // rax
  __int64 v2; // r8

  if ( *((_BYTE *)a1 + 16) )
  {
    result = (__int64)a1[1];
    v2 = **a1;
    **a1 = result;
    if ( v2 )
      return j_j__o_free(v2, 40LL);
  }
  return result;
}
