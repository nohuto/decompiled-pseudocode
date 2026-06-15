/*
 * XREFs of sub_140035D64 @ 0x140035D64
 * Callers:
 *     sub_14009EE00 @ 0x14009EE00 (sub_14009EE00.c)
 *     sub_14009F2B0 @ 0x14009F2B0 (sub_14009F2B0.c)
 *     sub_1400A01A0 @ 0x1400A01A0 (sub_1400A01A0.c)
 *     sub_1400A10D0 @ 0x1400A10D0 (sub_1400A10D0.c)
 *     sub_1400AC6D0 @ 0x1400AC6D0 (sub_1400AC6D0.c)
 *     sub_1400ACC20 @ 0x1400ACC20 (sub_1400ACC20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140035D64(__int64 a1, unsigned __int64 a2)
{
  if ( is_mul_ok(1uLL, a2) )
    return sub_1400B6010(a2);
  else
    return 0LL;
}
