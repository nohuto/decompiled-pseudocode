/*
 * XREFs of ?CreateMatrixTransform3dProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransform3dProxy@@@Z @ 0x1800A7FBC
 * Callers:
 *     ?Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180096180 (-Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateMatrixTransform3dProxy(
        struct IDwmChannel **this,
        struct CMatrixTransform3dProxy **a2)
{
  return CResourceProxy::Create<CMatrixTransform3dProxy>(this[3], a2);
}
