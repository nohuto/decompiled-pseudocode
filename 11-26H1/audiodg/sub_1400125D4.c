/*
 * XREFs of sub_1400125D4 @ 0x1400125D4
 * Callers:
 *     sub_1400124DC @ 0x1400124DC (sub_1400124DC.c)
 *     sub_140012D6C @ 0x140012D6C (sub_140012D6C.c)
 *     sub_140016EDC @ 0x140016EDC (sub_140016EDC.c)
 *     sub_14001A1A8 @ 0x14001A1A8 (sub_14001A1A8.c)
 *     sub_14001A4BC @ 0x14001A4BC (sub_14001A4BC.c)
 *     sub_14001A534 @ 0x14001A534 (sub_14001A534.c)
 *     sub_14001A5F0 @ 0x14001A5F0 (sub_14001A5F0.c)
 *     sub_14001A5FC @ 0x14001A5FC (sub_14001A5FC.c)
 *     sub_14001AA24 @ 0x14001AA24 (sub_14001AA24.c)
 *     sub_14001AAD4 @ 0x14001AAD4 (sub_14001AAD4.c)
 *     sub_14001B398 @ 0x14001B398 (sub_14001B398.c)
 *     sub_14001B584 @ 0x14001B584 (sub_14001B584.c)
 *     sub_14001B838 @ 0x14001B838 (sub_14001B838.c)
 *     sub_14001BB78 @ 0x14001BB78 (sub_14001BB78.c)
 *     sub_14001BE38 @ 0x14001BE38 (sub_14001BE38.c)
 *     sub_140059BCC @ 0x140059BCC (sub_140059BCC.c)
 *     sub_140060040 @ 0x140060040 (sub_140060040.c)
 *     sub_140061B80 @ 0x140061B80 (sub_140061B80.c)
 *     sub_140061EC0 @ 0x140061EC0 (sub_140061EC0.c)
 *     sub_140075F84 @ 0x140075F84 (sub_140075F84.c)
 *     sub_140076414 @ 0x140076414 (sub_140076414.c)
 *     sub_1400769B8 @ 0x1400769B8 (sub_1400769B8.c)
 *     sub_140076D48 @ 0x140076D48 (sub_140076D48.c)
 *     sub_140077D64 @ 0x140077D64 (sub_140077D64.c)
 *     sub_140077DA0 @ 0x140077DA0 (sub_140077DA0.c)
 *     sub_140077DC8 @ 0x140077DC8 (sub_140077DC8.c)
 *     sub_140077E10 @ 0x140077E10 (sub_140077E10.c)
 *     sub_140078610 @ 0x140078610 (sub_140078610.c)
 *     sub_140078A54 @ 0x140078A54 (sub_140078A54.c)
 *     sub_140079184 @ 0x140079184 (sub_140079184.c)
 *     sub_140079AA0 @ 0x140079AA0 (sub_140079AA0.c)
 *     sub_140079B90 @ 0x140079B90 (sub_140079B90.c)
 *     sub_140079D40 @ 0x140079D40 (sub_140079D40.c)
 *     sub_14007A790 @ 0x14007A790 (sub_14007A790.c)
 *     sub_14007A990 @ 0x14007A990 (sub_14007A990.c)
 *     sub_14007B440 @ 0x14007B440 (sub_14007B440.c)
 *     sub_14007B4E0 @ 0x14007B4E0 (sub_14007B4E0.c)
 *     sub_14007B580 @ 0x14007B580 (sub_14007B580.c)
 *     sub_14007BEF0 @ 0x14007BEF0 (sub_14007BEF0.c)
 *     sub_14007BFE0 @ 0x14007BFE0 (sub_14007BFE0.c)
 *     sub_14007EF4C @ 0x14007EF4C (sub_14007EF4C.c)
 *     sub_1400A60D0 @ 0x1400A60D0 (sub_1400A60D0.c)
 *     sub_1400A61CC @ 0x1400A61CC (sub_1400A61CC.c)
 *     sub_1400AC678 @ 0x1400AC678 (sub_1400AC678.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400125D4(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return sub_1400B6010(v3);
  }
  return result;
}
