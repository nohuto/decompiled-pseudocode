/*
 * XREFs of ?_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@@Z @ 0x1800A60F8
 * Callers:
 *     ?SetupWindowCapture@CCaptureManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A18E0 (-SetupWindowCapture@CCaptureManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800A3670 (-UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z.c)
 * Callees:
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetDefaultSDRBoostForWindow@CCaptureManager@@AEAAJPEAVCWindowData@@PEAM@Z @ 0x1800A5224 (-_GetDefaultSDRBoostForWindow@CCaptureManager@@AEAAJPEAVCWindowData@@PEAM@Z.c)
 *     ?_GetHostWindowHandleForProxyWindow@CCaptureManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z @ 0x1800A53AC (-_GetHostWindowHandleForProxyWindow@CCaptureManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@M@Z @ 0x1800A61E0 (-_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@M@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::_UpdateCaptureControllerDefaultSDRBoost(CCaptureManager *this, HWND a2)
{
  CCaptureManager *v4; // rcx
  struct CWindowData *v5; // rdi
  int DefaultSDRBoostForWindow; // eax
  CCaptureManager *v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  HWND HostWindowHandleForProxyWindow; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CWindowData *v13; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+48h] [rbp+20h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v13 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), a2, &v13);
  v5 = v13;
  if ( !v13 || !*((_QWORD *)v13 + 55) )
    goto LABEL_8;
  LODWORD(v13) = 0;
  DefaultSDRBoostForWindow = CCaptureManager::_GetDefaultSDRBoostForWindow(v4, (HMONITOR *)v5, (float *)&v13);
  v8 = DefaultSDRBoostForWindow;
  if ( DefaultSDRBoostForWindow >= 0 )
  {
    HostWindowHandleForProxyWindow = CCaptureManager::_GetHostWindowHandleForProxyWindow(v7, v5);
    DefaultSDRBoostForWindow = CCaptureManager::_UpdateCaptureControllerDefaultSDRBoost(
                                 this,
                                 HostWindowHandleForProxyWindow,
                                 *(float *)&v13);
    v8 = DefaultSDRBoostForWindow;
    if ( DefaultSDRBoostForWindow < 0 )
    {
      v9 = 733LL;
      goto LABEL_7;
    }
LABEL_8:
    v8 = 0;
    goto LABEL_9;
  }
  v9 = 730LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)(unsigned int)DefaultSDRBoostForWindow);
LABEL_9:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v8;
}
