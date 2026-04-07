/*
 * XREFs of ?_SendBoundsToCaptureControllerFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x180084FD8
 * Callers:
 *     ?_AddDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A3B84 (-_AddDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBU.c)
 *     ?_AddFilteredDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@PEAVCContainerVisualProxy@@@Z @ 0x1800A3CF8 (-_AddFilteredDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPro.c)
 *     ?_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A66B4 (-_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1.c)
 * Callees:
 *     ?SetContentSize@CCaptureControllerProxy@@QEAAJNN@Z @ 0x18007882C (-SetContentSize@CCaptureControllerProxy@@QEAAJNN@Z.c)
 *     ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18007D428 (-GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Height@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ @ 0x180085074 (-Height@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ.c)
 *     ?Width@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ @ 0x180085090 (-Width@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ.c)
 */

__int64 __fastcall CCaptureManager::_SendBoundsToCaptureControllerFromDisplay(
        CCaptureManager *this,
        HMONITOR a2,
        struct CCaptureControllerProxy *a3)
{
  int DisplayRect; // ebx
  __int64 v5; // rdx
  int v7; // eax
  double v8; // xmm2_8
  int v9; // eax
  int v10[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_OWORD *)v10 = 0LL;
  DisplayRect = CDesktopManager::GetDisplayRect((__int64)CDesktopManager::s_pDesktopManagerInstance, a2, v10);
  if ( DisplayRect < 0 )
  {
    v5 = 1860LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)DisplayRect);
    return (unsigned int)DisplayRect;
  }
  TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::Height(v10);
  v8 = (double)v7;
  TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::Width(v10);
  DisplayRect = CCaptureControllerProxy::SetContentSize(a3, (double)v9, v8);
  if ( DisplayRect < 0 )
  {
    v5 = 1865LL;
    goto LABEL_3;
  }
  return 0LL;
}
