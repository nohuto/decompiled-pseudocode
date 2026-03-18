/*
 * XREFs of ?clear@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@QEAAXXZ @ 0x1801D7D00
 * Callers:
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x18029A3D8 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 *     ?SetFrontBufferRenderingMode@CDDisplaySwapChain@@UEAAJ_N@Z @ 0x18029B070 (-SetFrontBufferRenderingMode@CDDisplaySwapChain@@UEAAJ_N@Z.c)
 *     ?TransitionAwayCurrentPrimaries@CDDisplaySwapChain@@IEAAXXZ @ 0x18029B0AC (-TransitionAwayCurrentPrimaries@CDDisplaySwapChain@@IEAAXXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanout@@QEAV1@AEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x1801D7D30 (--$_Destroy_range@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanou.c)
 */

CDDisplayCachedScanout *__fastcall std::vector<CDDisplayCachedScanout>::clear(__int64 a1)
{
  CDDisplayCachedScanout *result; // rax

  if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<CDDisplayCachedScanout>>(*(CDDisplayCachedScanout **)a1);
    result = *(CDDisplayCachedScanout **)a1;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)a1;
  }
  return result;
}
