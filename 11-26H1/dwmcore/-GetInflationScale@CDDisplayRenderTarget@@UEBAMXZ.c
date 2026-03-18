/*
 * XREFs of ?GetInflationScale@CDDisplayRenderTarget@@UEBAMXZ @ 0x180194AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ @ 0x180194BF8 (-AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ.c)
 */

float __fastcall CDDisplayRenderTarget::GetInflationScale(CDDisplayRenderTarget *this)
{
  bool v1; // al
  __int64 v2; // r8

  v1 = COverlayContext::AnyDesktopPlaneScaling((CDDisplayRenderTarget *)((char *)this + 144));
  return CMonitorTransform::GetInflationScale((CMonitorTransform *)(v2 + 29848), v1);
}
