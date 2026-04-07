/*
 * XREFs of ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x18005C6F8
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x18005AF7C (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x18005C1A8 (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18005C324 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x180091178 (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x180091EF4 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1800920F0 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x18009217C (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800E9D00 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x1800E9D40 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall wil::ProcessShutdownInProgress(wil *this)
{
  char v1; // bl

  v1 = 0;
  if ( wil::details::g_processShutdownInProgress
    || wil::details::g_pfnDllShutdownInProgress && (unsigned __int8)wil::details::g_pfnDllShutdownInProgress(this) )
  {
    return 1;
  }
  return v1;
}
