/*
 * XREFs of ?GetDesktopPlaneScaling@CDDisplayRenderTarget@@UEBA_NXZ @ 0x1802474D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CDDisplayRenderTarget::GetDesktopPlaneScaling(CDDisplayRenderTarget *this)
{
  return COverlayContext::AnyDesktopPlaneScaling((CDDisplayRenderTarget *)((char *)this + 72));
}
