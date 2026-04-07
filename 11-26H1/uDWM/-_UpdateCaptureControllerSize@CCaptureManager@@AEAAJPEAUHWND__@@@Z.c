/*
 * XREFs of ?_UpdateCaptureControllerSize@CCaptureManager@@AEAAJPEAUHWND__@@@Z @ 0x1800A6310
 * Callers:
 *     ?OnWindowSizeUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180039570 (-OnWindowSizeUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$UpdateCaptureControllerSize@AEAPEAUHWND__@@@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@@Z @ 0x18009C8D0 (--$UpdateCaptureControllerSize@AEAPEAUHWND__@@@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@@Z.c)
 *     CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__CCaptureManager::_UpdateCaptureControllerSize_::_11_::_lambda_2___ @ 0x18009CB48 (CCaptureManager--_ApplyToAllCaptureControllersForCapturedWindow__CCaptureManager--__ea_18009CB48.c)
 *     CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindowedSwapChain__CCaptureManager::_UpdateCaptureControllerSize_::_4_::_lambda_1___ @ 0x18009CE98 (CCaptureManager--_ApplyToAllCaptureControllersForCapturedWindowedSwapChain__CCaptur_ea_18009CE98.c)
 */

__int64 __fastcall CCaptureManager::_UpdateCaptureControllerSize(CCaptureManager *this, __int64 *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v7; // ebx
  __int64 v8; // rdx
  CCaptureManager *v9; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v10; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  char v12; // [rsp+50h] [rbp+20h] BYREF
  __int64 *v13; // [rsp+58h] [rbp+28h] BYREF

  v13 = a2;
  WindowFrameLoggingTelemetry::UpdateCaptureControllerSize<HWND__ * &>((__int64 *)&v13, (__int64)a2);
  v12 = 0;
  v9 = this;
  v10 = a2;
  v4 = CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindowedSwapChain__CCaptureManager::_UpdateCaptureControllerSize_::_4_::_lambda_1___(
         (__int64)this,
         a2,
         (__int64)&v9,
         &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x288,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  LOBYTE(v13) = 0;
  v9 = this;
  v10 = a2;
  v7 = CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__CCaptureManager::_UpdateCaptureControllerSize_::_11_::_lambda_2___(
         (__int64)this,
         a2,
         (__int64)&v9,
         &v13);
  if ( v7 < 0 )
  {
    v8 = 654LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  if ( !(_BYTE)v13 && !v12 )
  {
    v7 = -2147024809;
    v8 = 655LL;
    goto LABEL_5;
  }
  return 0LL;
}
