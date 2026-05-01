/*
 * XREFs of CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback @ 0x18052CE48
 * Callers:
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::OnAnimationCompleted @ 0x18052A450 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--OnAnimationCompleted.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::OnEndBatchUpdate @ 0x18052A570 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--OnEndBatchUpdate.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::s_TimerWndProc @ 0x18052CFB0 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--s_TimerWndProc.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1a08449ab0a2814bb2af7204eecc9930___ @ 0x180527A68 (Windows--Internal--ComTaskPool--QueueTask__lambda_1a08449ab0a2814bb2af7204eecc9930___.c)
 *     ?InternalAddRef@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ @ 0x18052A1D0 (-InternalAddRef@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18052A1F4 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_CleanupTimer @ 0x18052CBFC (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_CleanupTimer.c)
 */

BOOL __fastcall CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx
  BOOL result; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 28) != 3 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalAddRef(&v5, a2);
    Windows::Internal::ComTaskPool::QueueTask__lambda_1a08449ab0a2814bb2af7204eecc9930___(v3, &v5);
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v5);
    *(_DWORD *)(a1 + 28) = 3;
    return CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_CleanupTimer(a1);
  }
  return result;
}
