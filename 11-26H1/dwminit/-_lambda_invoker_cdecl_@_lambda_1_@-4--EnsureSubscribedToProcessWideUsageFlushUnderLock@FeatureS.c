/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_1_@?4??EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ@SA@PEAX@Z @ 0x180006E40
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x18000A034 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 */

void __fastcall `wil::details::FeatureStateManager::EnsureSubscribedToProcessWideUsageFlushUnderLock'::`5'::_lambda_1_::_lambda_invoker_cdecl_(
        char *a1)
{
  if ( *a1 )
    wil::details_abi::SubscriptionList::OnSignaled((LPCRITICAL_SECTION)(a1 + 152), (PSRWLOCK)a1 + 4);
}
