/*
 * XREFs of ?Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A3990
 * Callers:
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180021B3C (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateScaleTransformProxy@CCompositor@@QEAAJPEAPEAVCScaleTransformProxy@@@Z @ 0x180036E18 (-CreateScaleTransformProxy@CCompositor@@QEAAJPEAPEAVCScaleTransformProxy@@@Z.c)
 *     ?CreateEffectGroupProxy@CCompositor@@QEAAJPEAPEAVCEffectGroupProxy@@@Z @ 0x1800373D0 (-CreateEffectGroupProxy@CCompositor@@QEAAJPEAPEAVCEffectGroupProxy@@@Z.c)
 *     ?CreateMatrixTransform3dProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransform3dProxy@@@Z @ 0x1800A9F08 (-CreateMatrixTransform3dProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransform3dProxy@@@Z.c)
 *     ?CreateTransform3dGroupProxy@CCompositor@@QEAAJPEAPEAVCTransform3dGroupProxy@@@Z @ 0x1800A9F20 (-CreateTransform3dGroupProxy@CCompositor@@QEAAJPEAPEAVCTransform3dGroupProxy@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Ensure3DResources(struct CScaleTransformProxy **this)
{
  unsigned int v1; // ebx
  int v3; // eax
  int MatrixTransform3dProxy; // eax
  int Transform3dGroupProxy; // eax
  int EffectGroupProxy; // eax
  int ScaleTransformProxy; // eax

  v1 = 0;
  if ( this[31]
    || (v3 = CCompositor::CreateMatrixTransform3dProxy(
               *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
               this + 31),
        v1 = v3,
        v3 >= 0) )
  {
    if ( this[32]
      || (MatrixTransform3dProxy = CCompositor::CreateMatrixTransform3dProxy(
                                     *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                     this + 32),
          v1 = MatrixTransform3dProxy,
          MatrixTransform3dProxy >= 0) )
    {
      if ( this[33]
        || (Transform3dGroupProxy = CCompositor::CreateTransform3dGroupProxy(
                                      *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                      this + 33),
            v1 = Transform3dGroupProxy,
            Transform3dGroupProxy >= 0) )
      {
        if ( this[34]
          || (EffectGroupProxy = CCompositor::CreateEffectGroupProxy(
                                   *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                                   this + 34),
              v1 = EffectGroupProxy,
              EffectGroupProxy >= 0) )
        {
          if ( !this[35] )
          {
            ScaleTransformProxy = CCompositor::CreateScaleTransformProxy(
                                    *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                    this + 35);
            v1 = ScaleTransformProxy;
            if ( ScaleTransformProxy < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ScaleTransformProxy, 0x606u, 0LL);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, EffectGroupProxy, 0x601u, 0LL);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Transform3dGroupProxy, 0x5FCu, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MatrixTransform3dProxy, 0x5F7u, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x5F2u, 0LL);
  }
  return v1;
}
