/*
 * XREFs of ?CreateTransform3dGroupProxy@CCompositor@@QEAAJPEAPEAVCTransform3dGroupProxy@@@Z @ 0x1800A7FEC
 * Callers:
 *     ?Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180096180 (-Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateTransform3dGroupProxy(
        struct IDwmChannel **this,
        struct CTransform3dGroupProxy **a2)
{
  return CResourceProxy::Create<CTransform3dGroupProxy>(this[3], a2);
}
