/*
 * XREFs of ?_SetCaptureControllerContentOffset@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z @ 0x1800A57EC
 * Callers:
 *     ?_UpdateCaptureControllerContentOffsetFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800A5F04 (-_UpdateCaptureControllerContentOffsetFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCap.c)
 *     ?_UpdateCaptureControllerContentOffsetFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800A5FD8 (-_UpdateCaptureControllerContentOffsetFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCCaptureC.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetContentOffset@CCaptureControllerProxy@@QEAAJHH@Z @ 0x18009BDF4 (-SetContentOffset@CCaptureControllerProxy@@QEAAJHH@Z.c)
 */

__int64 __fastcall CCaptureManager::_SetCaptureControllerContentOffset(
        CCaptureManager *this,
        struct CCaptureControllerProxy *a2,
        unsigned int a3,
        unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CCaptureControllerProxy::SetContentOffset(a2, a3, a4);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7FB,
    (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
