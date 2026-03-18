/*
 * XREFs of _lambda_c9e4fec9532ca8e5b5101c78de254c3e_::_lambda_invoker_cdecl_ @ 0x14014CC90
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAXXZ @ 0x14014CCC4 (-HandleRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAXXZ.c)
 *     ?HandleRefreshRateUnboostTimer@KST@InputTraceLogging@@SAXXZ @ 0x14014CD2C (-HandleRefreshRateUnboostTimer@KST@InputTraceLogging@@SAXXZ.c)
 */

void __fastcall lambda_c9e4fec9532ca8e5b5101c78de254c3e_::_lambda_invoker_cdecl_(void *a1)
{
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  __int64 UserSessionState; // rax

  InputTraceLogging::KST::HandleRefreshRateUnboostTimer();
  UserSessionState = W32GetUserSessionState(v2, v1, v3);
  CCompositionRefreshRateBooster::HandleRefreshRateUnboostTimer((CCompositionRefreshRateBooster *)(*(_QWORD *)(UserSessionState + 3104)
                                                                                                 + 88LL));
}
