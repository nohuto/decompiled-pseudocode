/*
 * XREFs of CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback @ 0x18050A9E0
 * Callers:
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::OnAnimationCompleted @ 0x180508020 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--OnAnimationCompleted.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::OnEndBatchUpdate @ 0x180508140 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--OnEndBatchUpdate.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::s_TimerWndProc @ 0x18050AB30 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--s_TimerWndProc.c)
 * Callees:
 *     _lambda_d996df4ae651642ba189a9f5cbef4ddb_::operator() @ 0x180505EB4 (_lambda_d996df4ae651642ba189a9f5cbef4ddb_--operator().c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_CleanupTimer @ 0x18050A7B0 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_CleanupTimer.c)
 */

BOOL __fastcall CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  BOOL result; // eax

  if ( *(_DWORD *)(a1 + 28) != 3 )
  {
    lambda_d996df4ae651642ba189a9f5cbef4ddb_::operator()((__int64 *)(a1 + 16), a2, a3);
    *(_DWORD *)(a1 + 28) = 3;
    return CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_CleanupTimer(a1);
  }
  return result;
}
