/*
 * XREFs of ?CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z @ 0x1803EE150
 * Callers:
 *     ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1803E9770 (-GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??1?$unique_ptr@VDDAScreenCapture@@U?$default_delete@VDDAScreenCapture@@@std@@@std@@QEAA@XZ @ 0x1803E92C4 (--1-$unique_ptr@VDDAScreenCapture@@U-$default_delete@VDDAScreenCapture@@@std@@@std@@QEAA@XZ.c)
 *     ?Initialize@DDAScreenCapture@@AEAAJXZ @ 0x1803EEB60 (-Initialize@DDAScreenCapture@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DDAScreenCapture::CreateInstance(struct DDAScreenCapture **a1, HMONITOR a2)
{
  _QWORD *v4; // rdi
  int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DDAScreenCapture *v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = operator new(0x88uLL);
  v10 = (DDAScreenCapture *)v4;
  *v4 = 0LL;
  v4[13] = 0LL;
  v4[14] = 0LL;
  v4[15] = 0LL;
  v4[16] = a2;
  memset_0(v4 + 1, 0, 0x60uLL);
  v10 = (DDAScreenCapture *)v4;
  v5 = DDAScreenCapture::Initialize((DDAScreenCapture *)v4);
  v7 = v5;
  if ( v5 >= 0 )
  {
    v10 = 0LL;
    *a1 = (struct DDAScreenCapture *)v4;
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v5);
  }
  std::unique_ptr<DDAScreenCapture>::~unique_ptr<DDAScreenCapture>(&v10, v6);
  return v7;
}
