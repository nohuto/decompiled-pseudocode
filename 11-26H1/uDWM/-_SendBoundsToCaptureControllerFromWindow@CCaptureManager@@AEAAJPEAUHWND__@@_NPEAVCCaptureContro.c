/*
 * XREFs of ?_SendBoundsToCaptureControllerFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z @ 0x1800A55EC
 * Callers:
 *     CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__CCaptureManager::_UpdateCaptureControllerSize_::_11_::_lambda_2___ @ 0x18009CB48 (CCaptureManager--_ApplyToAllCaptureControllersForCapturedWindow__CCaptureManager--__ea_18009CB48.c)
 *     CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindowedSwapChain__CCaptureManager::_UpdateCaptureControllerSize_::_4_::_lambda_1___ @ 0x18009CE98 (CCaptureManager--_ApplyToAllCaptureControllersForCapturedWindowedSwapChain__CCaptur_ea_18009CE98.c)
 *     ?UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800A3670 (-UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z.c)
 *     ?_AddWindowCaptureEntry@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A44B8 (-_AddWindowCaptureEntry@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAV.c)
 * Callees:
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x180029CF4 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetContentSize@CCaptureControllerProxy@@QEAAJNN@Z @ 0x18007882C (-SetContentSize@CCaptureControllerProxy@@QEAAJNN@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z @ 0x18008A6BC (-SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z.c)
 *     ?_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800A53C8 (-_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::_SendBoundsToCaptureControllerFromWindow(
        CCaptureManager *this,
        HWND a2,
        char a3,
        struct CCaptureControllerProxy *a4)
{
  int ProxyWindowHandle; // eax
  unsigned int v8; // ebx
  HWND v10; // rbx
  __int64 v11; // r8
  HWND v12; // rdi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r9d
  int v17; // r9d
  int v18; // eax
  int v19; // eax
  float v20; // xmm2_4
  __int64 v21; // rdx
  int v22; // eax
  int v23; // eax
  struct _MARGINS v24; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  HWND v26; // [rsp+50h] [rbp+20h] BYREF
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+68h] [rbp+38h] BYREF

  v26 = (HWND)this;
  if ( a4 )
  {
    v26 = 0LL;
    ProxyWindowHandle = CCaptureManager::_GetProxyWindowHandle(this, a2, &v26);
    v8 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x68A,
        (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)ProxyWindowHandle);
      return v8;
    }
    v10 = v26;
    if ( !v26 )
      v10 = a2;
    v27 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v26 = 0LL;
    CWindowList::GetSyncedWindowDataByHwnd(
      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
      v10,
      (struct CWindowData **)&v26);
    v12 = v26;
    if ( v26 && *((_QWORD *)v26 + 55) )
    {
      if ( ((_DWORD)v26[29] & 0x20000000) != 0 )
      {
        v13 = CCaptureControllerProxy::SetCaptureState(a4, 0, v11);
        v8 = v13;
        if ( v13 < 0 )
        {
          v14 = 1689LL;
LABEL_25:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v14,
            (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
            (const char *)(unsigned int)v13);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v27);
          return v8;
        }
      }
      if ( a3 )
      {
        v24 = 0LL;
        CTopLevelWindow::GetFrameMargins(*((CTopLevelWindow **)v12 + 55), &v24);
        v15 = *((_QWORD *)v12 + 6);
        v16 = 0;
        if ( (int)(*((_QWORD *)v12 + 7) - v15) >= 0 )
          v16 = *((_QWORD *)v12 + 7) - v15;
        v17 = v16 - v24.cxRightWidth - v24.cxLeftWidth;
        v18 = 0;
        if ( (int)(HIDWORD(*((_QWORD *)v12 + 7)) - HIDWORD(v15)) >= 0 )
          v18 = HIDWORD(*((_QWORD *)v12 + 7)) - HIDWORD(v15);
        v19 = v18 - v24.cyTopHeight - v24.cyBottomHeight;
      }
      else
      {
        v20 = *((float *)v12 + 83);
        v21 = *(_QWORD *)(v12 + 59);
        v22 = 0;
        if ( (int)(*(_QWORD *)(v12 + 61) - v21) >= 0 )
          v22 = *(_QWORD *)(v12 + 61) - v21;
        v17 = (int)(float)((float)v22 * v20);
        v23 = 0;
        if ( (int)(HIDWORD(*(_QWORD *)(v12 + 61)) - HIDWORD(v21)) >= 0 )
          v23 = HIDWORD(*(_QWORD *)(v12 + 61)) - HIDWORD(v21);
        v19 = (int)(float)((float)v23 * v20);
      }
      v13 = CCaptureControllerProxy::SetContentSize(a4, (double)v17, (double)v19);
      v8 = v13;
      if ( v13 < 0 )
      {
        v14 = 1714LL;
        goto LABEL_25;
      }
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v27);
  }
  return 0LL;
}
