/*
 * XREFs of ?_SetProjectionBorderForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800A5930
 * Callers:
 *     ?StartWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A20B0 (-StartWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StartWindowedSwapChainCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A22F0 (-StartWindowedSwapChainCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A2FF0 (-StopWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopWindowedSwapChainCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A3290 (-StopWindowedSwapChainCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800A3670 (-UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z.c)
 *     ?UpdateWindowCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800A3950 (-UpdateWindowCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z.c)
 *     ?UpdateWindowedSwapChainCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800A3A70 (-UpdateWindowedSwapChainCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z.c)
 * Callees:
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001AB8C (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::_SetProjectionBorderForWindow(CCaptureManager *this, HWND a2, char a3)
{
  struct CWindowData *v5; // rbx
  struct CWindowData *v8; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+48h] [rbp+20h] BYREF

  v8 = this;
  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), a2, &v8);
  v5 = v8;
  if ( v8 && *((_QWORD *)v8 + 55) )
  {
    if ( a3 )
    {
      if ( !*((_DWORD *)v8 + 118) )
        CWindowList::ShowProjectionBorder(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), v8, 1);
      ++*((_DWORD *)v5 + 118);
    }
    else if ( (*((_DWORD *)v8 + 118))-- == 1 )
    {
      CWindowList::ShowProjectionBorder(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), v5, 0);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return 0LL;
}
