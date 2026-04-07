/*
 * XREFs of ?_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800C47D0
 * Callers:
 *     ?OnWindowMinimized@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180086650 (-OnWindowMinimized@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180086700 (-OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowRestored@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180093DF0 (-OnWindowRestored@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800BFFE0 (-OnWindowStyleChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@_N@Z @ 0x18008C784 (-_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@_N@Z.c)
 *     ??$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@AEA_N@Z @ 0x1800BD764 (--$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAP.c)
 *     CProjectionBorderManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_4ba5dd8d9c462c04f6ab12b46ce7a702___ @ 0x1800BD90C (CProjectionBorderManager--_ApplyToAllCaptureControllersForCapturedWindow__lambda_4ba5dd8d9c462c0.c)
 *     ?_GetCaptureControllerForCapturedWindow@CProjectionBorderManager@@AEAAPEAVCCaptureControllerProxy@@PEAUHWND__@@@Z @ 0x1800C3E80 (-_GetCaptureControllerForCapturedWindow@CProjectionBorderManager@@AEAAPEAVCCaptureControllerProx.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_uDWMFixMultipleWindowCaptures@@@details@wil@@QEAA_NXZ @ 0x1800C5180 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_uDWMFixMultipleWindowCapt.c)
 */

__int64 __fastcall CProjectionBorderManager::_UpdateCaptureControllerCaptureState(
        struct _RTL_GENERIC_TABLE *this,
        CCaptureControllerProxy *a2,
        char a3)
{
  struct CCaptureControllerProxy *CaptureControllerForCapturedWindow; // rax
  struct _RTL_CRITICAL_SECTION *v8; // rcx
  CCaptureControllerProxy *v9; // [rsp+38h] [rbp+10h] BYREF
  char v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  WindowFrameLoggingTelemetry::UpdateCaptureControllerCaptureState<HWND__ * &,bool &>((__int64 *)&v9, &v10);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_uDWMFixMultipleWindowCaptures>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_uDWMFixMultipleWindowCaptures>::GetImpl'::`2'::impl) )
    return CProjectionBorderManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_4ba5dd8d9c462c04f6ab12b46ce7a702___(
             this,
             a2,
             a3);
  CaptureControllerForCapturedWindow = CProjectionBorderManager::_GetCaptureControllerForCapturedWindow(this, (HWND)a2);
  return CProjectionBorderManager::_PauseOrResumeWindowCapture(v8, CaptureControllerForCapturedWindow, a3);
}
