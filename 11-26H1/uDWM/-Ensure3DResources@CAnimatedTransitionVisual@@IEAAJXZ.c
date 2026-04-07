/*
 * XREFs of ?Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180096180
 * Callers:
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180082594 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateEffectGroupProxy@CCompositor@@QEAAJPEAPEAVCEffectGroupProxy@@@Z @ 0x180081F80 (-CreateEffectGroupProxy@CCompositor@@QEAAJPEAPEAVCEffectGroupProxy@@@Z.c)
 *     ?CreateMatrixTransform3dProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransform3dProxy@@@Z @ 0x1800A7FBC (-CreateMatrixTransform3dProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransform3dProxy@@@Z.c)
 *     ?CreateTransform3dGroupProxy@CCompositor@@QEAAJPEAPEAVCTransform3dGroupProxy@@@Z @ 0x1800A7FEC (-CreateTransform3dGroupProxy@CCompositor@@QEAAJPEAPEAVCTransform3dGroupProxy@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Ensure3DResources(struct CEffectGroupProxy **this)
{
  unsigned int v1; // ebx
  int v3; // eax
  int MatrixTransform3dProxy; // eax
  int Transform3dGroupProxy; // eax
  int EffectGroupProxy; // eax

  v1 = 0;
  if ( this[30]
    || (v3 = CCompositor::CreateMatrixTransform3dProxy(
               *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
               this + 30),
        v1 = v3,
        v3 >= 0) )
  {
    if ( this[31]
      || (MatrixTransform3dProxy = CCompositor::CreateMatrixTransform3dProxy(
                                     *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                     this + 31),
          v1 = MatrixTransform3dProxy,
          MatrixTransform3dProxy >= 0) )
    {
      if ( this[32]
        || (Transform3dGroupProxy = CCompositor::CreateTransform3dGroupProxy(
                                      *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                      this + 32),
            v1 = Transform3dGroupProxy,
            Transform3dGroupProxy >= 0) )
      {
        if ( !this[33] )
        {
          EffectGroupProxy = CCompositor::CreateEffectGroupProxy(
                               *((struct IDwmChannel ***)CDesktopManager::s_pDesktopManagerInstance + 6),
                               this + 33);
          v1 = EffectGroupProxy;
          if ( EffectGroupProxy < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, EffectGroupProxy, 0x541u, 0LL);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Transform3dGroupProxy, 0x53Cu, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MatrixTransform3dProxy, 0x537u, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x532u, 0LL);
  }
  return v1;
}
