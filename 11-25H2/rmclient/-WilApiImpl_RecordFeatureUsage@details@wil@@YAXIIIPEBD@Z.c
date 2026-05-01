/*
 * XREFs of ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180007360
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180007530 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ??$EnsureCoalescedTimer@VFeatureStateManager@details@wil@@@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@AEA_NPEAVFeatureStateManager@01@@Z @ 0x1800075E0 (--$EnsureCoalescedTimer@VFeatureStateManager@details@wil@@@details@wil@@YAXAEAV-$unique_any_t@V-.c)
 *     ?RecordFeatureUsageUnderLock@FeatureStateData@details_abi@wil@@QEAA_NIW4wil_details_ServiceReportingKind@@_K@Z @ 0x180007700 (-RecordFeatureUsageUnderLock@FeatureStateData@details_abi@wil@@QEAA_NIW4wil_details_ServiceRepor.c)
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x180007C58 (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180007CA4 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x1800135A4 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     wil_details_RtlNotifyFeatureUsage @ 0x180017F4C (wil_details_RtlNotifyFeatureUsage.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::WilApiImpl_RecordFeatureUsage(wil::details *this, int a2, unsigned int a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  unsigned int v5; // ebp
  RTL_SRWLOCK *v6; // rsi
  char v7; // bl
  int v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+24h] [rbp-14h]

  v3 = a3;
  v4 = a2 & 0x7FFFFFFF;
  v5 = (unsigned int)this;
  if ( !(_DWORD)this && !a3 && !v4 )
  {
    wil::details::FeatureStateManager::FlushUsage((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
    return;
  }
  if ( (a2 & 0x40000000) != 0 )
  {
    wil::details::FeatureStateManager::QueueBackgroundSRUMUsageReporting(
      (wil::details::FeatureStateManager *)&wil::details::g_featureStateManager,
      (unsigned int)this,
      a2,
      a3);
    return;
  }
  if ( !a3 && v4 != 254 )
  {
    v8 = (int)this;
    v9 = (unsigned __int16)a2;
    if ( a2 < 0 )
      HIWORD(v9) |= 1u;
    wil_details_RtlNotifyFeatureUsage(&v8);
    return;
  }
  if ( !wil::details::g_featureStateManager
    || !wil::details::FeatureStateManager::EnsureStateData((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager) )
  {
    return;
  }
  v6 = qword_18002F148;
  if ( v4 == 254 )
  {
    wil::details_abi::FeatureStateData::RecordUsage(qword_18002F148);
LABEL_11:
    if ( !wil::details::g_processShutdownInProgress
      && (!wil::details::g_pfnDllShutdownInProgress || !(unsigned __int8)wil::details::g_pfnDllShutdownInProgress()) )
    {
      AcquireSRWLockExclusive(&stru_18002F150);
      wil::details::EnsureCoalescedTimer<wil::details::FeatureStateManager>(
        &unk_18002F160,
        &unk_18002F171,
        &wil::details::g_featureStateManager);
      ReleaseSRWLockExclusive(&stru_18002F150);
    }
    return;
  }
  if ( v4 <= 0xC7 || v4 - 256 <= 0xFF )
  {
    AcquireSRWLockExclusive(qword_18002F148);
    v7 = wil::details_abi::FeatureStateData::RecordFeatureUsageUnderLock(v6, v5, v4, v3);
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    if ( v7 )
      goto LABEL_11;
  }
}
