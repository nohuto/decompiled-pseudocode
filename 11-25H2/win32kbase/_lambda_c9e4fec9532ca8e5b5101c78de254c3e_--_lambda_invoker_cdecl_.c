/*
 * XREFs of _lambda_c9e4fec9532ca8e5b5101c78de254c3e_::_lambda_invoker_cdecl_ @ 0x1401112D0
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleRefreshRateUnboostTimer@KST@InputTraceLogging@@SAXXZ @ 0x140111304 (-HandleRefreshRateUnboostTimer@KST@InputTraceLogging@@SAXXZ.c)
 *     ?HandleRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAXXZ @ 0x140223544 (-HandleRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAXXZ.c)
 */

void __fastcall lambda_c9e4fec9532ca8e5b5101c78de254c3e_::_lambda_invoker_cdecl_(void *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax

  InputTraceLogging::KST::HandleRefreshRateUnboostTimer();
  UserSessionState = W32GetUserSessionState(v2, v1);
  CCompositionRefreshRateBooster::HandleRefreshRateUnboostTimer((CCompositionRefreshRateBooster *)(*(_QWORD *)(UserSessionState + 3104)
                                                                                                 + 88LL));
}
