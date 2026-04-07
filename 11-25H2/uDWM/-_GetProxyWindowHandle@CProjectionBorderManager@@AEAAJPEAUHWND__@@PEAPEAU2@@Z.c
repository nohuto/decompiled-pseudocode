/*
 * XREFs of ?_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800C413C
 * Callers:
 *     ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180078530 (-StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C1250 (-StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C2C10 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateWindowCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800C2F60 (-UpdateWindowCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C4470 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptur.c)
 *     ?_UpdateCaptureControllerContentOffsetFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C4914 (-_UpdateCaptureControllerContentOffsetFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAV.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C4D20 (-_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCap.c)
 *     ?_UpdateTabGroupMap@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C4F90 (-_UpdateTabGroupMap@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180092FBC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::_GetProxyWindowHandle(CProjectionBorderManager *this, HWND a2, HWND *a3)
{
  __int64 v5; // rax
  struct CWindowData *v7; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = this;
  *a3 = 0LL;
  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), a2, &v7);
  if ( v7 )
  {
    v5 = *((_QWORD *)v7 + 81);
    if ( v5 )
      *a3 = *(HWND *)(v5 + 40);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return 0LL;
}
