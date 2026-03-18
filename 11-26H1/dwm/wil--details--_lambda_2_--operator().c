/*
 * XREFs of wil::details::_lambda_2_::operator() @ 0x140007224
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_header_init_InitializeResultHeader__ @ 0x140001E40 (wil--details--_dynamic_initializer_for__g_header_init_InitializeResultHeader__.c)
 * Callees:
 *     <none>
 */

__int64 wil::details::_lambda_2_::operator()()
{
  wil::details::g_pfnGetContextAndNotifyFailure = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))wil::details::GetContextAndNotifyFailure;
  wil::details_abi::g_pProcessLocalData = (__int64)&wil::details::g_processLocalData;
  wil::details::g_pThreadFailureCallbacks = (__int64)&wil::details::g_threadFailureCallbacks;
  return 1LL;
}
