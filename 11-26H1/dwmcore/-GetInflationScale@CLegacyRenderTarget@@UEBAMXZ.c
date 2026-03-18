/*
 * XREFs of ?GetInflationScale@CLegacyRenderTarget@@UEBAMXZ @ 0x180194B10
 * Callers:
 *     <none>
 * Callees:
 *     ?AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ @ 0x180194BF8 (-AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ.c)
 */

float __fastcall CLegacyRenderTarget::GetInflationScale(CLegacyRenderTarget *this)
{
  bool v1; // al
  __int64 v2; // r8

  v1 = COverlayContext::AnyDesktopPlaneScaling((CLegacyRenderTarget *)((char *)this + 128));
  return CMonitorTransform::GetInflationScale((CMonitorTransform *)(v2 + 29832), v1);
}
