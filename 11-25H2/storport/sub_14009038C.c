/*
 * XREFs of sub_14009038C @ 0x14009038C
 * Callers:
 *     sub_14000D760 @ 0x14000D760 (sub_14000D760.c)
 *     sub_140021810 @ 0x140021810 (sub_140021810.c)
 *     sub_14009210C @ 0x14009210C (sub_14009210C.c)
 *     sub_140092628 @ 0x140092628 (sub_140092628.c)
 *     sub_1400977C0 @ 0x1400977C0 (sub_1400977C0.c)
 *     sub_140098650 @ 0x140098650 (sub_140098650.c)
 *     sub_14009E168 @ 0x14009E168 (sub_14009E168.c)
 * Callees:
 *     sub_1400903C4 @ 0x1400903C4 (sub_1400903C4.c)
 */

__int64 sub_14009038C()
{
  if ( (dword_1401696F8 & 0x10) != 0 )
    return dword_1401696F8 & 1;
  else
    return sub_1400903C4((unsigned int)dword_1401696F8, 3LL);
}
