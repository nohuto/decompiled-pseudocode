/*
 * XREFs of ?_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800A5A08
 * Callers:
 *     ?SetupWindowCapture@CCaptureManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A18E0 (-SetupWindowCapture@CCaptureManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A2FF0 (-StopWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopWindowedSwapChainCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A3290 (-StopWindowedSwapChainCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800A3670 (-UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z.c)
 * Callees:
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::_SetScreenCaptureForWindow(CCaptureManager *this, HWND a2, char a3)
{
  struct CWindowData *v6; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+48h] [rbp+20h] BYREF

  v6 = this;
  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), a2, &v6);
  if ( v6 && *((_QWORD *)v6 + 55) )
  {
    if ( a3 )
      ++*((_DWORD *)v6 + 114);
    else
      --*((_DWORD *)v6 + 114);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return 0LL;
}
