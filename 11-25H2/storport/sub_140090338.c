/*
 * XREFs of sub_140090338 @ 0x140090338
 * Callers:
 *     sub_14000D760 @ 0x14000D760 (sub_14000D760.c)
 *     sub_140021810 @ 0x140021810 (sub_140021810.c)
 *     sub_14009210C @ 0x14009210C (sub_14009210C.c)
 *     sub_140092628 @ 0x140092628 (sub_140092628.c)
 *     sub_1400977C0 @ 0x1400977C0 (sub_1400977C0.c)
 *     sub_140098650 @ 0x140098650 (sub_140098650.c)
 *     sub_14009E168 @ 0x14009E168 (sub_14009E168.c)
 * Callees:
 *     sub_140090370 @ 0x140090370 (sub_140090370.c)
 */

__int64 __fastcall sub_140090338()
{
  if ( (dword_1401696F0 & 0x10) != 0 )
    return dword_1401696F0 & 1;
  else
    return sub_140090370((unsigned int)dword_1401696F0, 3LL);
}
