/*
 * XREFs of ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x1800C3B24
 * Callers:
 *     ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180078530 (-StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C2320 (-StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopFilteredDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C2490 (-StopFilteredDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C25A0 (-StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800C3078 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPr.c)
 *     ?_AddFilteredDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_NPEAVCContainerVisualProxy@@@Z @ 0x1800C325C (-_AddFilteredDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureCont.c)
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C3490 (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresent.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x1800ADC34 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 */

void __fastcall CProjectionBorderManager::_EnsureCursorStateForCapture(struct _RTL_GENERIC_TABLE *this)
{
  bool v2; // cl
  char TableRoot; // al

  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
  {
    v2 = RtlIsGenericTableEmpty(this + 7) && RtlIsGenericTableEmpty(this + 6);
    TableRoot = (char)this[9].TableRoot;
    if ( v2 )
    {
      if ( TableRoot )
      {
        EnableSoftwareCursorForScreenCapture(0LL);
        LOBYTE(this[9].TableRoot) = 0;
      }
    }
    else if ( !TableRoot )
    {
      EnableSoftwareCursorForScreenCapture(1LL);
      LOBYTE(this[9].TableRoot) = 1;
    }
  }
}
