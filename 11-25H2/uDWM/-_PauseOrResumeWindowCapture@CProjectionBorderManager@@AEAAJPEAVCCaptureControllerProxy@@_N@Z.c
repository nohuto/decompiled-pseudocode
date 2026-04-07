/*
 * XREFs of ?_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@_N@Z @ 0x18008C784
 * Callers:
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C4470 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptur.c)
 *     ?_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800C47D0 (-_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z @ 0x180096E24 (-SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::_PauseOrResumeWindowCapture(
        struct _RTL_CRITICAL_SECTION *this,
        struct CCaptureControllerProxy *a2,
        bool a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = this;
  if ( a2 )
  {
    v10 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v5 = CCaptureControllerProxy::SetCaptureState(a2, a3);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x767,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)v5,
        v8);
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      return v6;
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  }
  return 0LL;
}
