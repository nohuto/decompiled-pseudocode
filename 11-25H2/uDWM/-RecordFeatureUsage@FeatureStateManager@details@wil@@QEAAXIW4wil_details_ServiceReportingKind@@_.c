/*
 * XREFs of ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x180058100
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800853F0 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180056B24 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?RecordFeatureUsage@FeatureStateData@details_abi@wil@@QEAA_NIW4wil_details_ServiceReportingKind@@_K@Z @ 0x1800581A0 (-RecordFeatureUsage@FeatureStateData@details_abi@wil@@QEAA_NIW4wil_details_ServiceReportingKind@.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180098DDC (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ??$EnsureCoalescedTimer@VFeatureStateManager@details@wil@@@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@AEA_NPEAVFeatureStateManager@01@@Z @ 0x180098FD0 (--$EnsureCoalescedTimer@VFeatureStateManager@details@wil@@@details@wil@@YAXAEAV-$unique_any_t@V-.c)
 */

void __fastcall wil::details::FeatureStateManager::RecordFeatureUsage(
        RTL_SRWLOCK *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  wil *v8; // rcx

  if ( LOBYTE(a1->Ptr)
    && wil::details::FeatureStateManager::EnsureStateData((wil::details::FeatureStateManager *)a1)
    && (unsigned __int8)wil::details_abi::FeatureStateData::RecordFeatureUsage(a1[3].Ptr, a2, a3, a4)
    && !wil::ProcessShutdownInProgress(v8) )
  {
    AcquireSRWLockExclusive(a1 + 4);
    wil::details::EnsureCoalescedTimer<wil::details::FeatureStateManager>(&a1[6], (char *)&a1[8].Ptr + 1, a1);
    if ( a1 != (RTL_SRWLOCK *)-32LL )
      ReleaseSRWLockExclusive(a1 + 4);
  }
}
