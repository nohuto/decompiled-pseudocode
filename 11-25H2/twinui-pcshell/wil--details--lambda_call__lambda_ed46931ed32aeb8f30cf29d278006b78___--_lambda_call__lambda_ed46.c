/*
 * XREFs of wil::details::lambda_call__lambda_ed46931ed32aeb8f30cf29d278006b78___::_lambda_call__lambda_ed46931ed32aeb8f30cf29d278006b78___ @ 0x18034126C
 * Callers:
 *     _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1_::_1_::dtor$13 @ 0x1806BD390 (_GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1_--_1_--dtor$13.c)
 * Callees:
 *     _lambda_ed46931ed32aeb8f30cf29d278006b78_::operator() @ 0x18034232C (_lambda_ed46931ed32aeb8f30cf29d278006b78_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_ed46931ed32aeb8f30cf29d278006b78___::_lambda_call__lambda_ed46931ed32aeb8f30cf29d278006b78___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return lambda_ed46931ed32aeb8f30cf29d278006b78_::operator()();
  }
  return result;
}
