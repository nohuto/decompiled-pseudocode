/*
 * XREFs of ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x1401C3F80
 * Callers:
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x14000F730 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1400156C0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vInit@RGNMEMOBJ@@QEAAXXZ @ 0x14001FA3C (-vInit@RGNMEMOBJ@@QEAAXXZ.c)
 *     RGNCOREOBJ::bMerge__RGNOBJ::bMerge_::_2_::_lambda_1___ @ 0x140022050 (RGNCOREOBJ--bMerge__RGNOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x140044A0C (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ??0RGNCOREMEMOBJ@@QEAA@XZ @ 0x140044C7C (--0RGNCOREMEMOBJ@@QEAA@XZ.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXXZ @ 0x1400FD0A0 (-vSet@RGNCOREOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 */

void RustOnZeroSizedScanCallback(void)
{
  GrepCaptureLiveMemoryDump(400LL, 64LL, 0LL, 0LL, 0LL, 0);
}
