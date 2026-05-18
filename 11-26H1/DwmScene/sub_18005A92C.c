/*
 * XREFs of sub_18005A92C @ 0x18005A92C
 * Callers:
 *     sub_18006904C @ 0x18006904C (sub_18006904C.c)
 *     sub_180069C74 @ 0x180069C74 (sub_180069C74.c)
 *     sub_180086D20 @ 0x180086D20 (sub_180086D20.c)
 * Callees:
 *     sub_18005A910 @ 0x18005A910 (sub_18005A910.c)
 */

void __fastcall sub_18005A92C(__int64 a1, float a2)
{
  if ( a2 != *(float *)(a1 + 320) )
  {
    *(float *)(a1 + 320) = a2;
    sub_18005A910(a1, 2);
  }
}
