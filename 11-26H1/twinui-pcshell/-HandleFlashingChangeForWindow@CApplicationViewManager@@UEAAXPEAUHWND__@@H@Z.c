/*
 * XREFs of ?HandleFlashingChangeForWindow@CApplicationViewManager@@UEAAXPEAUHWND__@@H@Z @ 0x1801B1670
 * Callers:
 *     <none>
 * Callees:
 *     CApplicationViewManager::_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___ @ 0x1801B16BC (CApplicationViewManager--_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___.c)
 *     ??0_lambda_f475742c0de8d0f2b24fd9d946f0a567_@@QEAA@AEBU?$coroutine_handle@X@experimental@std@@PEAUawaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@6@W4DispatcherQueuePriority@896@@Z@@Z @ 0x18030773C (--0_lambda_f475742c0de8d0f2b24fd9d946f0a567_@@QEAA@AEBU-$coroutine_handle@X@experimental@std@@PE.c)
 */

void __fastcall CApplicationViewManager::HandleFlashingChangeForWindow(CApplicationViewManager *this, HWND a2)
{
  int v2; // r9d
  _BYTE v3[24]; // [rsp+30h] [rbp-18h] BYREF
  HWND v4; // [rsp+58h] [rbp+10h] BYREF

  v4 = a2;
  _lambda_f475742c0de8d0f2b24fd9d946f0a567_::_lambda_f475742c0de8d0f2b24fd9d946f0a567_(v3, &v4, (char *)this - 160);
  CApplicationViewManager::_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___(v2);
}
