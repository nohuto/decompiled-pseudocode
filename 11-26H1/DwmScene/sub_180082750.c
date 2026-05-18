/*
 * XREFs of sub_180082750 @ 0x180082750
 * Callers:
 *     sub_1800826C4 @ 0x1800826C4 (sub_1800826C4.c)
 *     sub_180082920 @ 0x180082920 (sub_180082920.c)
 *     sub_180082980 @ 0x180082980 (sub_180082980.c)
 *     sub_180082A80 @ 0x180082A80 (sub_180082A80.c)
 * Callees:
 *     sub_180082810 @ 0x180082810 (sub_180082810.c)
 */

__int64 __fastcall sub_180082750(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_180082810(v1, 1LL);
  return result;
}
