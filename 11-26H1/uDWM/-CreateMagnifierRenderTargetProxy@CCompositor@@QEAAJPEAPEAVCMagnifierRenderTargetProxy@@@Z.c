/*
 * XREFs of ?CreateMagnifierRenderTargetProxy@CCompositor@@QEAAJPEAPEAVCMagnifierRenderTargetProxy@@@Z @ 0x1800A7FAC
 * Callers:
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x1800B9FA4 (-Initialize@CMagnifier@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateMagnifierRenderTargetProxy(
        struct IDwmChannel **this,
        struct CMagnifierRenderTargetProxy **a2)
{
  return CResourceProxy::Create<CMagnifierRenderTargetProxy>(this[3], a2);
}
