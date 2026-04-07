/*
 * XREFs of ?Initialize@CMagnifier@@AEAAJXZ @ 0x1800BA6DC
 * Callers:
 *     ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z @ 0x1800BA60C (-Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x1800BAA2C (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180018CD8 (-Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x1800760F4 (-CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?CreateMagnifierRenderTargetProxy@CCompositor@@QEAAJPEAPEAVCMagnifierRenderTargetProxy@@@Z @ 0x1800A9EFC (-CreateMagnifierRenderTargetProxy@CCompositor@@QEAAJPEAPEAVCMagnifierRenderTargetProxy@@@Z.c)
 *     ?SetTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCMatrixTransformProxy@@@Z @ 0x1800BBF48 (-SetTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCMatrixTransformProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMagnifier::Initialize(CBaseObject **this)
{
  CMagnifierRenderTargetProxy **v1; // rsi
  int MagnifierRenderTargetProxy; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int MatrixTransformProxy; // eax
  CMatrixTransformProxy *v7; // rcx
  int v8; // eax
  int v9; // eax
  struct D2D_MATRIX_3X2_F v11; // [rsp+30h] [rbp-28h] BYREF

  v1 = this + 3;
  MagnifierRenderTargetProxy = CCompositor::CreateMagnifierRenderTargetProxy(
                                 *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                                 this + 3);
  v4 = MagnifierRenderTargetProxy;
  if ( MagnifierRenderTargetProxy < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MagnifierRenderTargetProxy, 0x79u, 0LL);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(CMagnifierRenderTargetProxy *, _QWORD))(*(_QWORD *)*v1 + 8LL))(
           *v1,
           *((_QWORD *)this[2] + 2));
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x7Bu, 0LL);
    }
    else if ( this[4]
           || (MatrixTransformProxy = CCompositor::CreateMatrixTransformProxy(
                                        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                                        this + 4),
               v4 = MatrixTransformProxy,
               MatrixTransformProxy >= 0) )
    {
      v7 = this[4];
      *(_QWORD *)&v11.m[2][0] = 0LL;
      *(_OWORD *)&v11.m11 = _xmm;
      v8 = CMatrixTransformProxy::Update(v7, &v11);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x8Au, 0LL);
      }
      else
      {
        v9 = CMagnifierRenderTargetProxy::SetTransform(*v1, this[4]);
        v4 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x8Bu, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MatrixTransformProxy, 0x7Fu, 0LL);
    }
  }
  return v4;
}
