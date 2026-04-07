/*
 * XREFs of ?_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C43D0
 * Callers:
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800C3078 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPr.c)
 *     ?_AddFilteredDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_NPEAVCContainerVisualProxy@@@Z @ 0x1800C325C (-_AddFilteredDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureCont.c)
 *     ?_UpdateDisplayCaptureControllerProperties@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800C4E3C (-_UpdateDisplayCaptureControllerProperties@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MA.c)
 * Callees:
 *     ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x180094068 (-GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Width@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ @ 0x1800996C4 (-Width@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ.c)
 *     ?Height@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ @ 0x18009A434 (-Height@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ.c)
 *     ?SetContentSize@CCaptureControllerProxy@@QEAAJNN@Z @ 0x1800A8C34 (-SetContentSize@CCaptureControllerProxy@@QEAAJNN@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_SendBoundsToCaptureControllerFromDisplay(
        CProjectionBorderManager *this,
        HMONITOR a2,
        struct CCaptureControllerProxy *a3)
{
  int DisplayRect; // ebx
  __int64 v5; // rdx
  double v7; // xmm2_8
  int v8; // eax
  _DWORD v9[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  DisplayRect = CDesktopManager::GetDisplayRect((__int64)CDesktopManager::s_pDesktopManagerInstance, a2, v9);
  if ( DisplayRect < 0 )
  {
    v5 = 1982LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)DisplayRect);
    return (unsigned int)DisplayRect;
  }
  v7 = (double)(int)TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::Height((__int64)v9);
  v8 = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::Width(v9);
  DisplayRect = CCaptureControllerProxy::SetContentSize(a3, (double)v8, v7);
  if ( DisplayRect < 0 )
  {
    v5 = 1987LL;
    goto LABEL_3;
  }
  return 0LL;
}
