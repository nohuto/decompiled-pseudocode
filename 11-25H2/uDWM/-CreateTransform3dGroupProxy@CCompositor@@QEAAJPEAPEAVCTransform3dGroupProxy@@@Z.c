/*
 * XREFs of ?CreateTransform3dGroupProxy@CCompositor@@QEAAJPEAPEAVCTransform3dGroupProxy@@@Z @ 0x1800A9F20
 * Callers:
 *     ?Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A3990 (-Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateTransform3dGroupProxy(__int64 this, CBaseObject **a2)
{
  return CCompositor::CreateProxy<CTransform3dGroupProxy>(this, a2);
}
