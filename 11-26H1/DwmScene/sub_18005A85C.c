/*
 * XREFs of sub_18005A85C @ 0x18005A85C
 * Callers:
 *     sub_18006904C @ 0x18006904C (sub_18006904C.c)
 *     sub_180069C74 @ 0x180069C74 (sub_180069C74.c)
 *     sub_180086D20 @ 0x180086D20 (sub_180086D20.c)
 * Callees:
 *     sub_18005A910 @ 0x18005A910 (sub_18005A910.c)
 */

__int64 __fastcall sub_18005A85C(__int64 a1, float a2)
{
  __int64 result; // rax

  if ( a2 != *(float *)(a1 + 324) )
  {
    *(float *)(a1 + 324) = a2;
    return sub_18005A910(a1, 2LL);
  }
  return result;
}
