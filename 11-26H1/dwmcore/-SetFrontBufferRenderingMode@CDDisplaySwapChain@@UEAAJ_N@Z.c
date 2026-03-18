/*
 * XREFs of ?SetFrontBufferRenderingMode@CDDisplaySwapChain@@UEAAJ_N@Z @ 0x18029B070
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@QEAAXXZ @ 0x1801D7D00 (-clear@-$vector@VCDDisplayCachedScanout@@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@QEAAX.c)
 *     ?clear@?$list@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@V?$allocator@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1801D7E1C (-clear@-$list@V-$unique_ptr@VCDDisplayAgedCachedScanout@@U-$default_delete@VCDDisplayAgedCachedS.c)
 */

__int64 __fastcall CDDisplaySwapChain::SetFrontBufferRenderingMode(CDDisplaySwapChain *this)
{
  std::vector<CDDisplayCachedScanout>::clear((__int64)this + 40);
  std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::clear((_QWORD *)this + 8);
  return 0LL;
}
