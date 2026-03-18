/*
 * XREFs of ??$IsBaseRustExportsEnabled@$00@@YA_NXZ @ 0x14009C598
 * Callers:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x14007FBDC (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x14009BC38 (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x14009C5BC (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x14009D0F4 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400F5C6C (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?bContain@RGNCOREOBJ@@QEBA_NAEAU_RECTL@@@Z @ 0x1401C9E6C (-bContain@RGNCOREOBJ@@QEBA_NAEAU_RECTL@@@Z.c)
 *     W32kCddClipRegion @ 0x140326C60 (W32kCddClipRegion.c)
 * Callees:
 *     <none>
 */

bool IsBaseRustExportsEnabled<1>()
{
  return GetBaseRustGlobals() != 0LL;
}
