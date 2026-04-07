/*
 * XREFs of ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800A6294
 * Callers:
 *     ?_AddDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A3B84 (-_AddDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBU.c)
 *     ?_AddFilteredDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@PEAVCContainerVisualProxy@@@Z @ 0x1800A3CF8 (-_AddFilteredDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPro.c)
 *     ?_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A66B4 (-_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDefaultSDRBoost@CCaptureControllerProxy@@QEAAJM@Z @ 0x18009BE24 (-SetDefaultSDRBoost@CCaptureControllerProxy@@QEAAJM@Z.c)
 *     ?GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z @ 0x1800AB854 (-GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z.c)
 */

__int64 __fastcall CCaptureManager::_UpdateCaptureControllerDefaultSDRBoostFromDisplay(
        CCaptureManager *this,
        HMONITOR a2,
        struct CCaptureControllerProxy *a3)
{
  int DisplaySDRWhiteLevel; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  float v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v9 = HIDWORD(this);
  v8 = 0.0;
  DisplaySDRWhiteLevel = CDesktopManager::GetDisplaySDRWhiteLevel(CDesktopManager::s_pDesktopManagerInstance, a2, &v8);
  if ( DisplaySDRWhiteLevel < 0 )
  {
    v5 = 1905LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)DisplaySDRWhiteLevel);
    return (unsigned int)DisplaySDRWhiteLevel;
  }
  DisplaySDRWhiteLevel = CCaptureControllerProxy::SetDefaultSDRBoost(a3, v8);
  if ( DisplaySDRWhiteLevel < 0 )
  {
    v5 = 1906LL;
    goto LABEL_3;
  }
  return 0LL;
}
