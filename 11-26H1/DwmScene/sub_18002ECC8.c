/*
 * XREFs of sub_18002ECC8 @ 0x18002ECC8
 * Callers:
 *     sub_18002F640 @ 0x18002F640 (sub_18002F640.c)
 *     sub_180030B88 @ 0x180030B88 (sub_180030B88.c)
 *     sub_180056274 @ 0x180056274 (sub_180056274.c)
 *     sub_180056560 @ 0x180056560 (sub_180056560.c)
 *     sub_18005BD60 @ 0x18005BD60 (sub_18005BD60.c)
 *     sub_18005BED0 @ 0x18005BED0 (sub_18005BED0.c)
 *     sub_18005BF04 @ 0x18005BF04 (sub_18005BF04.c)
 *     sub_180060338 @ 0x180060338 (sub_180060338.c)
 *     sub_180060454 @ 0x180060454 (sub_180060454.c)
 *     sub_1800607F0 @ 0x1800607F0 (sub_1800607F0.c)
 *     sub_18007F964 @ 0x18007F964 (sub_18007F964.c)
 *     sub_1800BEF90 @ 0x1800BEF90 (sub_1800BEF90.c)
 *     sub_1800CFB2C @ 0x1800CFB2C (sub_1800CFB2C.c)
 * Callees:
 *     sub_180012970 @ 0x180012970 (sub_180012970.c)
 */

__int64 __fastcall sub_18002ECC8(unsigned __int64 a1)
{
  if ( a1 > 0x555555555555555LL )
    sub_180012970();
  return 48 * a1;
}
