/*
 * XREFs of ?CreateContainerVisualProxy@CCompositor@@QEAAJPEAPEAVCContainerVisualProxy@@@Z @ 0x18008424C
 * Callers:
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x180021BA0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 *     ?Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18009C1D0 (-Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?SetupFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A16B0 (-SetupFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateContainerVisualProxy(
        struct IDwmChannel **this,
        struct CContainerVisualProxy **a2)
{
  return CResourceProxy::Create<CContainerVisualProxy>(this[3], a2);
}
