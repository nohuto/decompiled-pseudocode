/*
 * XREFs of sub_18001F420 @ 0x18001F420
 * Callers:
 *     sub_1800BC4A0 @ 0x1800BC4A0 (sub_1800BC4A0.c)
 *     sub_1800D1870 @ 0x1800D1870 (sub_1800D1870.c)
 *     sub_1800D1ECC @ 0x1800D1ECC (sub_1800D1ECC.c)
 * Callees:
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18001F8D4 @ 0x18001F8D4 (sub_18001F8D4.c)
 */

__int64 __fastcall sub_18001F420(__int64 a1, __int64 a2)
{
  if ( a1 != a2 )
  {
    sub_180014244(a1);
    sub_18001F8D4(a1, a2);
  }
  return a1;
}
