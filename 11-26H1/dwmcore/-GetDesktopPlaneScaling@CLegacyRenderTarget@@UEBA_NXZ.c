/*
 * XREFs of ?GetDesktopPlaneScaling@CLegacyRenderTarget@@UEBA_NXZ @ 0x1802474E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CLegacyRenderTarget::GetDesktopPlaneScaling(CLegacyRenderTarget *this)
{
  return COverlayContext::AnyDesktopPlaneScaling((CLegacyRenderTarget *)((char *)this + 56));
}
