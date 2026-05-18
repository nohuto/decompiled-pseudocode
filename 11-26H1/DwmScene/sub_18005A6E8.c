/*
 * XREFs of sub_18005A6E8 @ 0x18005A6E8
 * Callers:
 *     sub_18005AE7C @ 0x18005AE7C (sub_18005AE7C.c)
 *     sub_18006904C @ 0x18006904C (sub_18006904C.c)
 * Callees:
 *     sub_18005A910 @ 0x18005A910 (sub_18005A910.c)
 */

__int64 __fastcall sub_18005A6E8(__int64 a1, float a2)
{
  __int64 result; // rax

  if ( a2 != *(float *)(a1 + 332) )
  {
    *(float *)(a1 + 332) = a2;
    return sub_18005A910(a1, 2LL);
  }
  return result;
}
