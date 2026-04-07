/*
 * XREFs of ?EnsureResources@CTopLevelWindow3D@@AEAAJXZ @ 0x18004B4E8
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800904A0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateScaleTransformProxy@CCompositor@@QEAAJPEAPEAVCScaleTransformProxy@@@Z @ 0x180036E18 (-CreateScaleTransformProxy@CCompositor@@QEAAJPEAPEAVCScaleTransformProxy@@@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18004B59C (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x1800760F4 (-CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::EnsureResources(struct CMatrixTransformProxy **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int ScaleTransformProxy; // eax
  int MatrixTransformProxy; // eax

  v2 = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation((CTopLevelWindow3D *)this, 1);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x35Cu, 0LL);
  }
  else if ( this[39]
         || (ScaleTransformProxy = CCompositor::CreateScaleTransformProxy(
                                     *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                     this + 39),
             v3 = ScaleTransformProxy,
             ScaleTransformProxy >= 0) )
  {
    if ( !this[38] )
    {
      MatrixTransformProxy = CCompositor::CreateMatrixTransformProxy(
                               *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                               this + 38);
      v3 = MatrixTransformProxy;
      if ( MatrixTransformProxy < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MatrixTransformProxy, 0x365u, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ScaleTransformProxy, 0x360u, 0LL);
  }
  return v3;
}
