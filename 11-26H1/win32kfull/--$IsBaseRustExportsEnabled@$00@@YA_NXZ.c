/*
 * XREFs of ??$IsBaseRustExportsEnabled@$00@@YA_NXZ @ 0x1400AB1D8
 * Callers:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x14006CBDC (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A973C (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400AA854 (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x1400AB1FC (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400ABFD0 (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ?bContain@RGNCOREOBJ@@QEBA_NAEAU_RECTL@@@Z @ 0x1401FED24 (-bContain@RGNCOREOBJ@@QEBA_NAEAU_RECTL@@@Z.c)
 *     W32kCddClipRegion @ 0x140348F50 (W32kCddClipRegion.c)
 * Callees:
 *     <none>
 */

bool IsBaseRustExportsEnabled<1>()
{
  return GetBaseRustGlobals() != 0LL;
}
