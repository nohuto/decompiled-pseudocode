/*
 * XREFs of CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::_InvokeCallback @ 0x18050A9AC
 * Callers:
 *     CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::OnAnimationCompleted @ 0x180507FF0 (CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___--OnAnimationCompleted.c)
 *     CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::OnEndBatchUpdate @ 0x180508110 (CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___--OnEndBatchUpdate.c)
 *     CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::s_TimerWndProc @ 0x18050AA20 (CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___--s_TimerWndProc.c)
 * Callees:
 *     _lambda_83894a20d7676cc7370719a196cbc3a9_::operator() @ 0x180505E74 (_lambda_83894a20d7676cc7370719a196cbc3a9_--operator().c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_CleanupTimer @ 0x18050A7B0 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_CleanupTimer.c)
 */

BOOL __fastcall CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::_InvokeCallback(__int64 a1)
{
  BOOL result; // eax

  if ( *(_DWORD *)(a1 + 28) != 3 )
  {
    lambda_83894a20d7676cc7370719a196cbc3a9_::operator()((WindowArrangementView **)(a1 + 16));
    *(_DWORD *)(a1 + 28) = 3;
    return CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_CleanupTimer(a1);
  }
  return result;
}
