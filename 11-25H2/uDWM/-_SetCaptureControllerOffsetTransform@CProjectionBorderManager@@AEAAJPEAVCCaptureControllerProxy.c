/*
 * XREFs of ?_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z @ 0x180075E98
 * Callers:
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x180093F9C (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEA.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C4D20 (-_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCap.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180018CD8 (-Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x1800760F4 (-CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?SetTransform@CCaptureControllerProxy@@QEAAJPEAVCMatrixTransformProxy@@@Z @ 0x1800A8CE0 (-SetTransform@CCaptureControllerProxy@@QEAAJPEAVCMatrixTransformProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::_SetCaptureControllerOffsetTransform(
        CProjectionBorderManager *this,
        struct CCaptureControllerProxy *a2,
        int a3,
        int a4)
{
  CCompositor *v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v11; // eax
  CBaseObject *v12; // rcx
  CBaseObject *v14; // [rsp+20h] [rbp-30h] BYREF
  struct D2D_MATRIX_3X2_F v15; // [rsp+28h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v14 = 0LL;
  v7 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v14);
  v8 = CCompositor::CreateMatrixTransformProxy(v7, &v14);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 2133LL;
    goto LABEL_8;
  }
  *(_OWORD *)&v15.m11 = _xmm;
  v15.dx = (float)a3;
  v15.dy = (float)a4;
  v11 = CMatrixTransformProxy::Update(v14, &v15);
  v9 = v11;
  if ( v11 >= 0 )
  {
    v8 = CCaptureControllerProxy::SetTransform(a2, v14);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v9 = 0;
      goto LABEL_10;
    }
    v10 = 2144LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)v8,
      (int)v14);
LABEL_10:
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v14);
    return v9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x85F,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)v11,
    (int)v14);
  v12 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    CBaseObject::Release(v12);
  }
  return v9;
}
