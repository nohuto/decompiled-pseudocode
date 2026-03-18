/*
 * XREFs of ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x14030112C
 * Callers:
 *     DxgkAddSurfaceToSwapChain @ 0x140208210 (DxgkAddSurfaceToSwapChain.c)
 *     DxgkCreateSwapChain @ 0x140208650 (DxgkCreateSwapChain.c)
 *     DxgkGetSwapChainSurfacePhysicalAddress @ 0x140208FC0 (DxgkGetSwapChainSurfacePhysicalAddress.c)
 *     DxgkRemoveSurfaceFromSwapChain @ 0x140209190 (DxgkRemoveSurfaceFromSwapChain.c)
 *     DxgkUnOrderedPresentSwapChain @ 0x1402094A0 (DxgkUnOrderedPresentSwapChain.c)
 *     DxgkAcquireSwapChain @ 0x140300AB0 (DxgkAcquireSwapChain.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGSWAPCHAINLOCKWITHDEVICE *__fastcall DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE(
        DXGSWAPCHAINLOCKWITHDEVICE *this,
        struct DXGSWAPCHAIN *a2,
        char a3,
        char a4)
{
  *((_BYTE *)this + 16) = a3;
  *(_BYTE *)this = a4;
  *((_QWORD *)this + 1) = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24), a2, 0);
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 80) = 0;
  *((_QWORD *)this + 11) = 0LL;
  return this;
}
