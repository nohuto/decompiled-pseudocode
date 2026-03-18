/*
 * XREFs of __security_check_cookie @ 0x1400057E0
 * Callers:
 *     CiSchedulerSetPriority @ 0x1400017E0 (CiSchedulerSetPriority.c)
 *     CiSchedulerWait @ 0x140001990 (CiSchedulerWait.c)
 *     CiSchedulerProcessDeadlines @ 0x140002280 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerTaskIndexYield @ 0x1400028B0 (CiSchedulerTaskIndexYield.c)
 *     CiLogSchedulerEvent @ 0x140002F10 (CiLogSchedulerEvent.c)
 *     CiLogThreadBuffering @ 0x140003050 (CiLogThreadBuffering.c)
 *     CiSchedulerSleep @ 0x1400031C0 (CiSchedulerSleep.c)
 *     CiSystemDetectPotentiallyStarvedProcessors @ 0x140003770 (CiSystemDetectPotentiallyStarvedProcessors.c)
 *     CiLogSchedulerWakeup @ 0x140003F70 (CiLogSchedulerWakeup.c)
 *     CiLogSchedulerSleep @ 0x140004010 (CiLogSchedulerSleep.c)
 *     CiLogSetBufferingMode @ 0x1400040A0 (CiLogSetBufferingMode.c)
 *     CiLogTurboEngaged @ 0x140004130 (CiLogTurboEngaged.c)
 *     CiLogThreadJoin @ 0x1400041B0 (CiLogThreadJoin.c)
 *     CiLogThreadLeave @ 0x140004310 (CiLogThreadLeave.c)
 *     CiLogTaskIndexCancelYield @ 0x140004578 (CiLogTaskIndexCancelYield.c)
 *     wil_details_RecordCachedUsage @ 0x14000498C (wil_details_RecordCachedUsage.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x140005174 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     __GSHandlerCheckCommon @ 0x1400056DC (__GSHandlerCheckCommon.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x14000DACC (wil_details_UpdateFeatureConfiguredStates.c)
 *     CiNdisThrottle @ 0x14000DD50 (CiNdisThrottle.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x14000DF40 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     CiCreateTaskIndexClientFromThread @ 0x14000F850 (CiCreateTaskIndexClientFromThread.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x140010AF4 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 *     CiConfigReadDWORD @ 0x140010CEC (CiConfigReadDWORD.c)
 *     CiConfigQueryValue @ 0x140010E80 (CiConfigQueryValue.c)
 *     CiConfigInitializeFromRegistry @ 0x1400112E0 (CiConfigInitializeFromRegistry.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
