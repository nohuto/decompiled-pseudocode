/*
 * XREFs of ?Ensure2DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180021E20
 * Callers:
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180021B3C (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x1800760F4 (-CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Ensure2DResources(struct CMatrixTransformProxy **this)
{
  unsigned int v1; // ebx
  int MatrixTransformProxy; // eax

  v1 = 0;
  if ( !this[36] )
  {
    MatrixTransformProxy = CCompositor::CreateMatrixTransformProxy(
                             *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                             this + 36);
    v1 = MatrixTransformProxy;
    if ( MatrixTransformProxy < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MatrixTransformProxy, 0x41Du, 0LL);
  }
  return v1;
}
