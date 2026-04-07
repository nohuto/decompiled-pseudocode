/*
 * XREFs of ?_UpdateCaptureControllerContentOffsetFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800A5F04
 * Callers:
 *     ?_AddDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A3B84 (-_AddDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBU.c)
 *     ?_AddFilteredDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@PEAVCContainerVisualProxy@@@Z @ 0x1800A3CF8 (-_AddFilteredDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPro.c)
 *     ?_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A66B4 (-_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1.c)
 * Callees:
 *     ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18007D428 (-GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$UpdateCaptureControllerTransformFromDisplay@NN@WindowFrameLoggingTelemetry@@SAX$$QEAN0@Z @ 0x18009C928 (--$UpdateCaptureControllerTransformFromDisplay@NN@WindowFrameLoggingTelemetry@@SAX$$QEAN0@Z.c)
 *     ?_SetCaptureControllerContentOffset@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z @ 0x1800A57EC (-_SetCaptureControllerContentOffset@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z.c)
 */

__int64 __fastcall CCaptureManager::_UpdateCaptureControllerContentOffsetFromDisplay(
        CCaptureManager *this,
        HMONITOR a2,
        struct CCaptureControllerProxy *a3)
{
  int DisplayRect; // eax
  CCaptureManager *v5; // rcx
  unsigned int v6; // ebx
  int v8; // ebx
  int v9; // edi
  int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  double v14; // [rsp+40h] [rbp+8h] BYREF
  double v15; // [rsp+58h] [rbp+20h] BYREF

  v14 = *(double *)&this;
  v12 = 0LL;
  DisplayRect = CDesktopManager::GetDisplayRect((__int64)CDesktopManager::s_pDesktopManagerInstance, a2, &v12);
  v6 = DisplayRect;
  if ( DisplayRect >= 0 )
  {
    v8 = HIDWORD(v12);
    v9 = v12;
    v10 = CCaptureManager::_SetCaptureControllerContentOffset(v5, a3, v12, HIDWORD(v12));
    v11 = v10;
    if ( v10 >= 0 )
    {
      v14 = (double)-v8;
      v15 = (double)-v9;
      WindowFrameLoggingTelemetry::UpdateCaptureControllerTransformFromDisplay<double,double>(
        (__int64 *)&v15,
        (__int64 *)&v14);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x765,
        (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)v10);
      return v11;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x762,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)DisplayRect);
    return v6;
  }
}
