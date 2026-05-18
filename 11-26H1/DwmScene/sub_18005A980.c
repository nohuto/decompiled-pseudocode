/*
 * XREFs of sub_18005A980 @ 0x18005A980
 * Callers:
 *     sub_180069C74 @ 0x180069C74 (sub_180069C74.c)
 * Callees:
 *     sub_18005A910 @ 0x18005A910 (sub_18005A910.c)
 */

void __fastcall sub_18005A980(__int64 a1, float a2)
{
  if ( a2 != *(float *)(a1 + 340) )
  {
    *(float *)(a1 + 340) = a2;
    sub_18005A910(a1, 2);
  }
}
