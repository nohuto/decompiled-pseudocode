/*
 * XREFs of ?Initialize@CMagnifier@@AEAAJXZ @ 0x1800B9FA4
 * Callers:
 *     ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z @ 0x1800B9ECC (-Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x1800BA214 (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180060C40 (-Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x18008437C (-CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?CreateMagnifierRenderTargetProxy@CCompositor@@QEAAJPEAPEAVCMagnifierRenderTargetProxy@@@Z @ 0x1800A7FAC (-CreateMagnifierRenderTargetProxy@CCompositor@@QEAAJPEAPEAVCMagnifierRenderTargetProxy@@@Z.c)
 *     ?SetTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCMatrixTransformProxy@@@Z @ 0x1800BB73C (-SetTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCMatrixTransformProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMagnifier::Initialize(struct CMagnifierRenderTargetProxy **this)
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
                                 *((struct IDwmChannel ***)CDesktopManager::s_pDesktopManagerInstance + 6),
                                 this + 3);
  v4 = MagnifierRenderTargetProxy;
  if ( MagnifierRenderTargetProxy < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MagnifierRenderTargetProxy, 0x7Fu, 0LL);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(CMagnifierRenderTargetProxy *, _QWORD))(*(_QWORD *)*v1 + 8LL))(
           *v1,
           *((_QWORD *)this[2] + 2));
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x81u, 0LL);
    }
    else if ( this[4]
           || (MatrixTransformProxy = CCompositor::CreateMatrixTransformProxy(
                                        *((struct IDwmChannel ***)CDesktopManager::s_pDesktopManagerInstance + 6),
                                        this + 4),
               v4 = MatrixTransformProxy,
               MatrixTransformProxy >= 0) )
    {
      v7 = this[4];
      *(__m128i *)&v11.m11 = _mm_load_si128((const __m128i *)&_xmm);
      *(_QWORD *)&v11.m[2][0] = 0LL;
      v8 = CMatrixTransformProxy::Update(v7, &v11);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x90u, 0LL);
      }
      else
      {
        v9 = CMagnifierRenderTargetProxy::SetTransform(*v1, this[4]);
        v4 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x91u, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MatrixTransformProxy, 0x85u, 0LL);
    }
  }
  return v4;
}
