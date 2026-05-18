/*
 * XREFs of sub_180045E94 @ 0x180045E94
 * Callers:
 *     sub_180043974 @ 0x180043974 (sub_180043974.c)
 *     sub_1800439F0 @ 0x1800439F0 (sub_1800439F0.c)
 *     sub_18007B494 @ 0x18007B494 (sub_18007B494.c)
 * Callees:
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 */

__int64 __fastcall sub_180045E94(__int64 *a1, unsigned __int64 a2)
{
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    sub_180012A30();
  return sub_18001BA3C(a1, a2);
}
