/*
 * XREFs of ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ @ 0x18012388C
 * Callers:
 *     ?ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ @ 0x180123640 (-ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ.c)
 *     ?CheckOcclusionState@CCaptureRenderTarget@@UEAAJ_N@Z @ 0x180123760 (-CheckOcclusionState@CCaptureRenderTarget@@UEAAJ_N@Z.c)
 *     ?Present@CCaptureRenderTarget@@MEAAJXZ @ 0x1801FCCF0 (-Present@CCaptureRenderTarget@@MEAAJXZ.c)
 *     ?SendWindowedSwapChainMetadata@CCaptureRenderTarget@@IEAAJXZ @ 0x180257DEC (-SendWindowedSwapChainMetadata@CCaptureRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CCaptureRenderTarget::GetD3DDeviceNoRef(CCaptureRenderTarget *this)
{
  return CCaptureRenderTarget::CDeviceManager::GetD3DDeviceNoRef(
           (struct CD3DDevice **)this + 299,
           (const struct _LUID *)this + 300,
           *((struct IFlipProducer **)this + 336));
}
