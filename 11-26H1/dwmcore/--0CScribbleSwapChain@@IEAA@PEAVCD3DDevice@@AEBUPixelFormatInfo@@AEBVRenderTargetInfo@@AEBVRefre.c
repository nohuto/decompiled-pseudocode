/*
 * XREFs of ??0CScribbleSwapChain@@IEAA@PEAVCD3DDevice@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IIU_LUID@@W4Enum@FrontBufferRender@@@Z @ 0x180218304
 * Callers:
 *     ??0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@IAEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IIU_LUID@@W4Enum@FrontBufferRender@@@Z @ 0x180199694 (--0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@IAEBUPixelFormatInfo@@AEBVRend.c)
 *     ??0CDDisplaySwapChain@@IEAA@AEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@AEAUDDisplayTaskPoolResources@@AEAUDDisplayTargetResources@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@@Z @ 0x18029C75C (--0CDDisplaySwapChain@@IEAA@AEAV-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@AEAUD.c)
 * Callees:
 *     ??0COverlaySwapChain@@IEAA@PEAVCD3DDevice@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IIU_LUID@@@Z @ 0x1801D3B00 (--0COverlaySwapChain@@IEAA@PEAVCD3DDevice@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefres.c)
 */

__int64 __fastcall CScribbleSwapChain::CScribbleSwapChain(
        __int64 a1,
        struct CD3DDevice *a2,
        const struct PixelFormatInfo *a3,
        const struct RenderTargetInfo *a4,
        struct RefreshRateInfo *a5,
        unsigned int a6,
        unsigned int a7,
        struct _LUID a8,
        int a9)
{
  __int64 result; // rax

  COverlaySwapChain::COverlaySwapChain((COverlaySwapChain *)a1, a2, a3, a4, a5, a6, a7, a8);
  *(_QWORD *)(a1 + 256) = &IScribbleSwapChain::`vftable';
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_DWORD *)(a1 + 272) = a9;
  result = a1;
  *(_WORD *)(a1 + 276) = 0;
  return result;
}
