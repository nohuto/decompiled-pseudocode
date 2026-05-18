/*
 * XREFs of sub_180085EA0 @ 0x180085EA0
 * Callers:
 *     sub_1800856D4 @ 0x1800856D4 (sub_1800856D4.c)
 * Callees:
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 */

__int64 __fastcall sub_180085EA0(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > 0x1555555555555555LL )
    sub_180012A30();
  return sub_180085EC8();
}
