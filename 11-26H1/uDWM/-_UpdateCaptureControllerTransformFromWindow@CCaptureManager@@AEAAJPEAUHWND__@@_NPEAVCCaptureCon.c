/*
 * XREFs of ?_UpdateCaptureControllerTransformFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z @ 0x1800A6558
 * Callers:
 *     CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__CCaptureManager::_UpdateCaptureControllerTransform_::_11_::_lambda_2___ @ 0x18009CC1C (CCaptureManager--_ApplyToAllCaptureControllersForCapturedWindow__CCaptureManager--__ea_18009CC1C.c)
 *     CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindowedSwapChain__CCaptureManager::_UpdateCaptureControllerTransform_::_4_::_lambda_1___ @ 0x18009CF6C (CCaptureManager--_ApplyToAllCaptureControllersForCapturedWindowedSwapChain__CCaptur_ea_18009CF6C.c)
 *     ?UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800A3670 (-UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z.c)
 *     ?_AddWindowCaptureEntry@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A44B8 (-_AddWindowCaptureEntry@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAV.c)
 * Callees:
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x180029CF4 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800A53C8 (-_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetCaptureControllerOffsetTransform@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HHM@Z @ 0x1800A5834 (-_SetCaptureControllerOffsetTransform@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HHM@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::_UpdateCaptureControllerTransformFromWindow(
        CCaptureManager *this,
        HWND a2,
        char a3,
        struct CCaptureControllerProxy *a4)
{
  int ProxyWindowHandle; // eax
  unsigned int v8; // ebx
  HWND v10; // rbx
  CTopLevelWindow *v11; // rcx
  int v12; // r8d
  int v13; // r9d
  FLOAT v14; // xmm0_4
  int v15; // eax
  struct _MARGINS v16; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  HWND v18; // [rsp+60h] [rbp+20h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+78h] [rbp+38h] BYREF

  v18 = (HWND)this;
  if ( a4 )
  {
    v18 = 0LL;
    ProxyWindowHandle = CCaptureManager::_GetProxyWindowHandle(this, a2, &v18);
    v8 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6BE,
        (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)ProxyWindowHandle);
      return v8;
    }
    v10 = v18;
    if ( !v18 )
      v10 = a2;
    v19 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v18 = 0LL;
    CWindowList::GetSyncedWindowDataByHwnd(
      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
      v10,
      (struct CWindowData **)&v18);
    if ( v18 )
    {
      v11 = (CTopLevelWindow *)*((_QWORD *)v18 + 55);
      if ( v11 )
      {
        if ( a3 )
        {
          v16 = 0LL;
          CTopLevelWindow::GetFrameMargins(v11, &v16);
          v12 = -v16.cxLeftWidth;
          v13 = -v16.cyTopHeight;
          v14 = FLOAT_1_0;
        }
        else
        {
          v12 = 0;
          v13 = 0;
          v14 = *((float *)v18 + 83);
        }
        v15 = CCaptureManager::_SetCaptureControllerOffsetTransform(v11, a4, v12, v13, v14);
        v8 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6E1,
            (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
            (const char *)(unsigned int)v15);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
          return v8;
        }
      }
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
  }
  return 0LL;
}
