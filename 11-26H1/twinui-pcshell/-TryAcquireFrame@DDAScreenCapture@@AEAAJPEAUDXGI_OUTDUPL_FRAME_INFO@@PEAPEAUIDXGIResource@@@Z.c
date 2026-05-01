/*
 * XREFs of ?TryAcquireFrame@DDAScreenCapture@@AEAAJPEAUDXGI_OUTDUPL_FRAME_INFO@@PEAPEAUIDXGIResource@@@Z @ 0x1803EF228
 * Callers:
 *     ?GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBitmapSource@@@Z @ 0x1803EE20C (-GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBit.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsScreenDRMProtected@DDAScreenCapture@@AEAAJPEA_N@Z @ 0x1803EF13C (-IsScreenDRMProtected@DDAScreenCapture@@AEAAJPEA_N@Z.c)
 */

__int64 __fastcall DDAScreenCapture::TryAcquireFrame(
        DDAScreenCapture *this,
        struct DXGI_OUTDUPL_FRAME_INFO *a2,
        struct IDXGIResource **a3)
{
  int IsScreenDRMProtected; // eax
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0;
  IsScreenDRMProtected = DDAScreenCapture::IsScreenDRMProtected(this, &v11);
  if ( IsScreenDRMProtected < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD8,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)IsScreenDRMProtected);
  if ( v11 )
    return 2147942405LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct DXGI_OUTDUPL_FRAME_INFO *, struct IDXGIResource **))(**(_QWORD **)this + 64LL))(
         *(_QWORD *)this,
         1000LL,
         a2,
         a3);
  v9 = v8;
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDD,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v8);
  return v9;
}
