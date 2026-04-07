/*
 * XREFs of ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x180091178
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18005AF10 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?_lambda_invoker_cdecl_@_lambda_1_@?7???$EnsureCoalescedTimer@VFeatureStateManager@details@wil@@@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@AEA_NPEAVFeatureStateManager@23@@Z@SA@PEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180090120 (-_lambda_invoker_cdecl_@_lambda_1_@-7---$EnsureCoalescedTimer@VFeatureStateManager@details@wil@@.c)
 * Callees:
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18005B47C (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x18005C6F8 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x180065B4C (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18008C548 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 */

void __fastcall wil::details::FeatureStateManager::FlushUsage(wil::details::FeatureStateManager *this)
{
  if ( !wil::ProcessShutdownInProgress(this) && wil::details::FeatureStateManager::EnsureStateData(this) )
  {
    wil::details_abi::SubscriptionList::OnSignaled(
      (LPCRITICAL_SECTION)(*((_QWORD *)this + 3) + 200LL),
      *((PSRWLOCK *)this + 3));
    wil::details_abi::FeatureStateData::RecordUsage(*((RTL_SRWLOCK **)this + 3));
  }
}
