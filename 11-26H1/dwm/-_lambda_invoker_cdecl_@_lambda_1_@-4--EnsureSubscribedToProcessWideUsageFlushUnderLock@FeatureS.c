/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_1_@?4??EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ@SA@PEAX@Z @ 0x1400061C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x14000984C (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 */

void __fastcall `wil::details::FeatureStateManager::EnsureSubscribedToProcessWideUsageFlushUnderLock'::`5'::_lambda_1_::_lambda_invoker_cdecl_(
        char *a1)
{
  if ( *a1 )
    wil::details_abi::SubscriptionList::OnSignaled((LPCRITICAL_SECTION)(a1 + 152), (PSRWLOCK)a1 + 4);
}
