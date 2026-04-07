/*
 * XREFs of ?_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@M@Z @ 0x1800A61E0
 * Callers:
 *     ?OnWindowMonitorChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180065CC0 (-OnWindowMonitorChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@@Z @ 0x1800A60F8 (-_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__CCaptureManager::_UpdateCaptureControllerDefaultSDRBoost_::_11_::_lambda_2___ @ 0x18009CA78 (CCaptureManager--_ApplyToAllCaptureControllersForCapturedWindow__CCaptureManager--__ea_18009CA78.c)
 *     CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindowedSwapChain__CCaptureManager::_UpdateCaptureControllerDefaultSDRBoost_::_4_::_lambda_1___ @ 0x18009CDC8 (CCaptureManager--_ApplyToAllCaptureControllersForCapturedWindowedSwapChain__CCaptur_ea_18009CDC8.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CCaptureManager::_UpdateCaptureControllerDefaultSDRBoost(
        CCaptureManager *this,
        __int64 *a2,
        double a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v9; // [rsp+50h] [rbp+18h] BYREF
  char v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0;
  v5 = CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindowedSwapChain__CCaptureManager::_UpdateCaptureControllerDefaultSDRBoost_::_4_::_lambda_1___(
         (__int64)this,
         a2,
         _mm_cvtsi128_si32(*(__m128i *)&a3),
         &v10);
  if ( v5 < 0 )
  {
    v6 = 710LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v9 = 0;
  v5 = CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__CCaptureManager::_UpdateCaptureControllerDefaultSDRBoost_::_11_::_lambda_2___(
         (__int64)this,
         a2,
         _mm_cvtsi128_si32(*(__m128i *)&a3),
         &v9);
  if ( v5 < 0 )
  {
    v6 = 716LL;
    goto LABEL_3;
  }
  if ( !v9 && !v10 )
  {
    v5 = -2147024809;
    v6 = 717LL;
    goto LABEL_3;
  }
  return 0LL;
}
