/*
 * XREFs of ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C4470
 * Callers:
 *     ?UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z @ 0x18008E5C0 (-UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z.c)
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C2C10 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C3490 (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresent.c)
 * Callees:
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x180021020 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@_N@Z @ 0x18008C784 (-_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@_N@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180092FBC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z @ 0x180096E24 (-SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z.c)
 *     ?SetContentSize@CCaptureControllerProxy@@QEAAJNN@Z @ 0x1800A8C34 (-SetContentSize@CCaptureControllerProxy@@QEAAJNN@Z.c)
 *     ?_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800C413C (-_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_uDWMFixMultipleWindowCaptures@@@details@wil@@QEAA_NXZ @ 0x1800C5180 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_uDWMFixMultipleWindowCapt.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::_SendBoundsToCaptureControllerFromWindow(
        CProjectionBorderManager *this,
        HWND a2,
        struct CCaptureControllerProxy *a3)
{
  int ProxyWindowHandle; // eax
  unsigned int v6; // ebx
  HWND v8; // rbx
  HWND v9; // rsi
  struct _RTL_CRITICAL_SECTION *v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r8d
  int v16; // eax
  struct _MARGINS v17; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  HWND v19; // [rsp+60h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+68h] [rbp+38h] BYREF

  if ( a3 )
  {
    v19 = 0LL;
    ProxyWindowHandle = CProjectionBorderManager::_GetProxyWindowHandle(this, a2, &v19);
    v6 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x701,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)ProxyWindowHandle);
      return v6;
    }
    v8 = v19;
    if ( !v19 )
      v8 = a2;
    v20 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v19 = 0LL;
    CWindowList::GetSyncedWindowDataByHwnd(
      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
      v8,
      (struct CWindowData **)&v19);
    v9 = v19;
    if ( v19 && *((_QWORD *)v19 + 55) )
    {
      if ( ((_DWORD)v19[29] & 0x20000000) != 0 )
      {
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_uDWMFixMultipleWindowCaptures>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_uDWMFixMultipleWindowCaptures>::GetImpl'::`2'::impl) )
        {
          v11 = CCaptureControllerProxy::SetCaptureState(a3, 0);
          v6 = v11;
          if ( v11 < 0 )
          {
            v12 = 1810LL;
LABEL_21:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v12,
              (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
              (const char *)(unsigned int)v11);
            CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
            return v6;
          }
        }
        else
        {
          v11 = CProjectionBorderManager::_PauseOrResumeWindowCapture(v10, a3, 0);
          v6 = v11;
          if ( v11 < 0 )
          {
            v12 = 1814LL;
            goto LABEL_21;
          }
        }
      }
      v17 = 0LL;
      CTopLevelWindow::GetFrameMargins(*((CTopLevelWindow **)v9 + 55), &v17);
      v13 = *((_QWORD *)v9 + 6);
      v14 = 0;
      if ( (int)(*((_QWORD *)v9 + 7) - v13) >= 0 )
        v14 = *((_QWORD *)v9 + 7) - v13;
      v15 = v14 - v17.cxRightWidth - v17.cxLeftWidth;
      v16 = 0;
      if ( (int)(HIDWORD(*((_QWORD *)v9 + 7)) - HIDWORD(v13)) >= 0 )
        v16 = HIDWORD(*((_QWORD *)v9 + 7)) - HIDWORD(v13);
      v11 = CCaptureControllerProxy::SetContentSize(
              a3,
              (double)v15,
              (double)(v16 - v17.cyTopHeight - v17.cyBottomHeight));
      v6 = v11;
      if ( v11 < 0 )
      {
        v12 = 1826LL;
        goto LABEL_21;
      }
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  }
  return 0LL;
}
