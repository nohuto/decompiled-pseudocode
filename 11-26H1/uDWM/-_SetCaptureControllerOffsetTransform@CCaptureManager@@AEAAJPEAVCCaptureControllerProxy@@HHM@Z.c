/*
 * XREFs of ?_SetCaptureControllerOffsetTransform@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HHM@Z @ 0x1800A5834
 * Callers:
 *     ?_UpdateCaptureControllerTransformFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800A6490 (-_UpdateCaptureControllerTransformFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCapture.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z @ 0x1800A6558 (-_UpdateCaptureControllerTransformFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureCon.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180060C40 (-Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x18008437C (-CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?SetTransform@CCaptureControllerProxy@@QEAAJPEAVCMatrixTransformProxy@@@Z @ 0x18009BE90 (-SetTransform@CCaptureControllerProxy@@QEAAJPEAVCMatrixTransformProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::_SetCaptureControllerOffsetTransform(
        CCaptureManager *this,
        struct CCaptureControllerProxy *a2,
        int a3,
        int a4,
        FLOAT a5)
{
  struct IDwmChannel **v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  CMatrixTransformProxy *v13; // [rsp+20h] [rbp-30h] BYREF
  struct D2D_MATRIX_3X2_F v14; // [rsp+28h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v13 = 0LL;
  v8 = (struct IDwmChannel **)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v13);
  v9 = CCompositor::CreateMatrixTransformProxy(v8, &v13);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v14.m11 = a5;
    *(_QWORD *)&v14.m[0][1] = 0LL;
    v14.m22 = a5;
    v14.dx = (float)a3;
    v14.dy = (float)a4;
    v9 = CMatrixTransformProxy::Update(v13, &v14);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v9 = CCaptureControllerProxy::SetTransform(a2, v13);
      v10 = v9;
      if ( v9 >= 0 )
      {
        v10 = 0;
        goto LABEL_9;
      }
      v11 = 2036LL;
    }
    else
    {
      v11 = 2035LL;
    }
  }
  else
  {
    v11 = 2025LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_9:
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v13);
  return v10;
}
