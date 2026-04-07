/*
 * XREFs of ?_UpdateCaptureControllerContentOffsetFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C4848
 * Callers:
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800C3078 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPr.c)
 *     ?_AddFilteredDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_NPEAVCContainerVisualProxy@@@Z @ 0x1800C325C (-_AddFilteredDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureCont.c)
 *     ?_UpdateDisplayCaptureControllerProperties@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800C4E3C (-_UpdateDisplayCaptureControllerProperties@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MA.c)
 * Callees:
 *     ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x180094068 (-GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$UpdateCaptureControllerTransformFromDisplay@NN@WindowFrameLoggingTelemetry@@SAX$$QEAN0@Z @ 0x1800BD894 (--$UpdateCaptureControllerTransformFromDisplay@NN@WindowFrameLoggingTelemetry@@SAX$$QEAN0@Z.c)
 *     ?_SetCaptureControllerContentOffset@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z @ 0x1800C4620 (-_SetCaptureControllerContentOffset@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@.c)
 */

__int64 __fastcall CProjectionBorderManager::_UpdateCaptureControllerContentOffsetFromDisplay(
        CProjectionBorderManager *this,
        HMONITOR a2,
        struct CCaptureControllerProxy *a3)
{
  int DisplayRect; // eax
  CProjectionBorderManager *v5; // rcx
  unsigned int v6; // ebx
  int v8; // ebx
  int v9; // edi
  int v10; // eax
  unsigned int v11; // esi
  int v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+24h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  double v15; // [rsp+40h] [rbp+8h] BYREF
  double v16; // [rsp+58h] [rbp+20h] BYREF

  v15 = *(double *)&this;
  DisplayRect = CDesktopManager::GetDisplayRect((__int64)CDesktopManager::s_pDesktopManagerInstance, a2, &v12);
  v6 = DisplayRect;
  if ( DisplayRect >= 0 )
  {
    v8 = v13;
    v9 = v12;
    v10 = CProjectionBorderManager::_SetCaptureControllerContentOffset(v5, a3, v12, v13);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v15 = (double)-v8;
      v16 = (double)-v9;
      WindowFrameLoggingTelemetry::UpdateCaptureControllerTransformFromDisplay<double,double>(
        (__int64 *)&v16,
        (__int64 *)&v15);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7DF,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)v10);
      return v11;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7DC,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)DisplayRect);
    return v6;
  }
}
