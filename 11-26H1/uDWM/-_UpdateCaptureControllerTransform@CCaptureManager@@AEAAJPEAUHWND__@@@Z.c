/*
 * XREFs of ?_UpdateCaptureControllerTransform@CCaptureManager@@AEAAJPEAUHWND__@@@Z @ 0x1800A63E4
 * Callers:
 *     ?OnWindowTransformUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180075160 (-OnWindowTransformUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__CCaptureManager::_UpdateCaptureControllerTransform_::_11_::_lambda_2___ @ 0x18009CC1C (CCaptureManager--_ApplyToAllCaptureControllersForCapturedWindow__CCaptureManager--__ea_18009CC1C.c)
 *     CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindowedSwapChain__CCaptureManager::_UpdateCaptureControllerTransform_::_4_::_lambda_1___ @ 0x18009CF6C (CCaptureManager--_ApplyToAllCaptureControllersForCapturedWindowedSwapChain__CCaptur_ea_18009CF6C.c)
 */

__int64 __fastcall CCaptureManager::_UpdateCaptureControllerTransform(CCaptureManager *this, __int64 *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  CCaptureManager *v7; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v8; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  char v10; // [rsp+50h] [rbp+20h] BYREF
  char v11; // [rsp+58h] [rbp+28h] BYREF

  v11 = 0;
  v7 = this;
  v8 = a2;
  v4 = CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindowedSwapChain__CCaptureManager::_UpdateCaptureControllerTransform_::_4_::_lambda_1___(
         (__int64)this,
         a2,
         (__int64)&v7,
         &v11);
  if ( v4 < 0 )
  {
    v5 = 666LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v10 = 0;
  v7 = this;
  v8 = a2;
  v4 = CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__CCaptureManager::_UpdateCaptureControllerTransform_::_11_::_lambda_2___(
         (__int64)this,
         a2,
         (__int64)&v7,
         &v10);
  if ( v4 < 0 )
  {
    v5 = 672LL;
    goto LABEL_3;
  }
  if ( !v10 && !v11 )
  {
    v4 = -2147024809;
    v5 = 673LL;
    goto LABEL_3;
  }
  return 0LL;
}
