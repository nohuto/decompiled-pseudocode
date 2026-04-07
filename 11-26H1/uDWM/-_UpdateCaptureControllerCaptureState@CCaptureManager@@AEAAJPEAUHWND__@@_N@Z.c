/*
 * XREFs of ?_UpdateCaptureControllerCaptureState@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800A5E48
 * Callers:
 *     ?OnWindowVisibilityUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180038F30 (-OnWindowVisibilityUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800596E0 (-OnWindowStyleChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowMinimized@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180076610 (-OnWindowMinimized@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowRestored@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800A0C90 (-OnWindowRestored@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@AEA_N@Z @ 0x18009C808 (--$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAP.c)
 *     CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__CCaptureManager::_UpdateCaptureControllerCaptureState_::_11_::_lambda_2___ @ 0x18009C9A0 (CCaptureManager--_ApplyToAllCaptureControllersForCapturedWindow__CCaptureManager--_UpdateCapture.c)
 *     CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindowedSwapChain__CCaptureManager::_UpdateCaptureControllerCaptureState_::_4_::_lambda_1___ @ 0x18009CCF0 (CCaptureManager--_ApplyToAllCaptureControllersForCapturedWindowedSwapChain__CCaptureManager--_Up.c)
 */

__int64 __fastcall CCaptureManager::_UpdateCaptureControllerCaptureState(CCaptureManager *this, __int64 a2, char a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  char v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  v10 = a2;
  WindowFrameLoggingTelemetry::UpdateCaptureControllerCaptureState<HWND__ * &,bool &>(&v10, &v11);
  LOBYTE(v10) = 0;
  v6 = CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindowedSwapChain__CCaptureManager::_UpdateCaptureControllerCaptureState_::_4_::_lambda_1___(
         (__int64)this,
         a2,
         a3,
         &v10);
  if ( v6 < 0 )
  {
    v7 = 689LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v11 = 0;
  v6 = CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__CCaptureManager::_UpdateCaptureControllerCaptureState_::_11_::_lambda_2___(
         (__int64)this,
         a2,
         a3,
         &v11);
  if ( v6 < 0 )
  {
    v7 = 698LL;
    goto LABEL_3;
  }
  if ( !v11 && !(_BYTE)v10 )
  {
    v6 = -2147024809;
    v7 = 699LL;
    goto LABEL_3;
  }
  return 0LL;
}
