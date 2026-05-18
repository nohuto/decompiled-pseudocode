/*
 * XREFs of sub_1800277D0 @ 0x1800277D0
 * Callers:
 *     sub_18007AD40 @ 0x18007AD40 (sub_18007AD40.c)
 *     sub_1800978E8 @ 0x1800978E8 (sub_1800978E8.c)
 * Callees:
 *     sub_180012970 @ 0x180012970 (sub_180012970.c)
 */

__int64 __fastcall sub_1800277D0(unsigned __int64 a1)
{
  if ( a1 > 0x492492492492492LL )
    sub_180012970();
  return 56 * a1;
}
