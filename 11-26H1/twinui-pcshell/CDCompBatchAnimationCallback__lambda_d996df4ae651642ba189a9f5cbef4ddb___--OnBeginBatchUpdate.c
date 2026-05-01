/*
 * XREFs of CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::OnBeginBatchUpdate @ 0x18052A4C0
 * Callers:
 *     <none>
 * Callees:
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InitializeTimer @ 0x18052CD2C (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_InitializeTimer.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::OnBeginBatchUpdate(
        __int64 a1)
{
  __int64 result; // rax

  if ( !*(_DWORD *)(a1 + 40) )
  {
    *(_DWORD *)(a1 + 28) = 1;
    result = CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InitializeTimer();
  }
  ++*(_DWORD *)(a1 + 40);
  return result;
}
