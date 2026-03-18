/*
 * XREFs of ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400113C0
 * Callers:
 *     ?vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z @ 0x140092140 (-vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z.c)
 *     ?UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z @ 0x140094AD0 (-UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z.c)
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x140095344 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 *     ?bExpand@RGNCOREOBJ@@QEAA_NK@Z @ 0x140095A28 (-bExpand@RGNCOREOBJ@@QEAA_NK@Z.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x140095EA0 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     GreEqualRgn @ 0x140095FC0 (GreEqualRgn.c)
 *     ?bEqual@RGNCOREOBJ@@QEBA_NAEBV1@@Z @ 0x14009617C (-bEqual@RGNCOREOBJ@@QEBA_NAEBV1@@Z.c)
 *     ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140096290 (-bEqual@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x1400994C4 (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 *     GreRectInRegion @ 0x1400D0D70 (GreRectInRegion.c)
 *     ?bInside@RGNOBJ@@QEAAHPEAU_RECTL@@@Z @ 0x1400DB9E0 (-bInside@RGNOBJ@@QEAAHPEAU_RECTL@@@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140177C40 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x14017D7A8 (-bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z.c)
 *     ?bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z @ 0x14017D850 (-bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z @ 0x1401C4370 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@PEBU_POINTL@@@Z @ 0x1401C4680 (-bOffset@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@PEBU_POINTL@@@Z.c)
 *     ?vDeleteREGION@REGION@@AEAAXAEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C4900 (-vDeleteREGION@REGION@@AEAAXAEBVRustAutoHotpatchLockSH@@@Z.c)
 *     ?bOffset@RGNCOREOBJ@@QEAA_NPEBU_POINTL@@@Z @ 0x1401D2450 (-bOffset@RGNCOREOBJ@@QEAA_NPEBU_POINTL@@@Z.c)
 * Callees:
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400113E4 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 */

struct SCAN *__fastcall REGION_CORE::get_pScan(REGION_CORE *this, struct REGION_CORE *a2)
{
  if ( qword_1402A10B0 )
    return Win32kRS::RegionCore_get_pScan_mut(this, a2);
  else
    return *(struct SCAN **)this;
}
