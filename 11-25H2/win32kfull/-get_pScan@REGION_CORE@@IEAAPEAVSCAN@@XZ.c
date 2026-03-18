/*
 * XREFs of ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400F5938
 * Callers:
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x14009BC38 (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x14009C5BC (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ?bFindFirstScan@XCLIPOBJ@@IEAAHXZ @ 0x1400F4C68 (-bFindFirstScan@XCLIPOBJ@@IEAAHXZ.c)
 * Callees:
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400F5AF4 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 */

struct SCAN *__fastcall REGION_CORE::get_pScan(REGION_CORE *this)
{
  struct REGION_CORE *v2; // rdx

  if ( GetBaseRustGlobals() )
    return Win32kRS::RegionCore_get_pScan_mut(this, v2);
  else
    return *(struct SCAN **)this;
}
