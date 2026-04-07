/*
 * XREFs of ?CreateLegacyVisualCaptureRenderTargetProxy@CCompositor@@QEAAJPEAPEAVCLegacyVisualCaptureRenderTargetProxy@@@Z @ 0x1800A7F9C
 * Callers:
 *     ?CaptureWindow@CWindowList@@UEAAJPEAUIDwmWindow@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x1800DFD50 (-CaptureWindow@CWindowList@@UEAAJPEAUIDwmWindow@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateLegacyVisualCaptureRenderTargetProxy(
        struct IDwmChannel **this,
        struct CLegacyVisualCaptureRenderTargetProxy **a2)
{
  return CResourceProxy::Create<CLegacyVisualCaptureRenderTargetProxy>(this[3], a2);
}
