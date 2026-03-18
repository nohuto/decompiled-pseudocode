/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x14052D25C
 * Callers:
 *     Feature_NewWpsAssignmentAlgorithm__private_IsEnabledPreCheck @ 0x14041F7D8 (Feature_NewWpsAssignmentAlgorithm__private_IsEnabledPreCheck.c)
 *     Feature_IoInvalidateDeviceState_Unconditional__private_ReportDeviceUsage @ 0x1404829C4 (Feature_IoInvalidateDeviceState_Unconditional__private_ReportDeviceUsage.c)
 *     Feature_OpocksAndMappedSections__private_ReportDeviceUsage @ 0x14049200C (Feature_OpocksAndMappedSections__private_ReportDeviceUsage.c)
 *     Feature_ID51912085__private_IsEnabledPreCheck @ 0x140494E80 (Feature_ID51912085__private_IsEnabledPreCheck.c)
 *     Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage @ 0x1404B5E14 (Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage.c)
 *     Feature_PdcClientPnpActionQueue__private_ReportDeviceUsage @ 0x1404D2E5C (Feature_PdcClientPnpActionQueue__private_ReportDeviceUsage.c)
 *     Feature_UpperThresholdInheritance__private_IsEnabledPreCheck @ 0x1404D5ECC (Feature_UpperThresholdInheritance__private_IsEnabledPreCheck.c)
 *     wil_details_IsEnabledFallback @ 0x1405016DC (wil_details_IsEnabledFallback.c)
 *     Feature_MachineHiveCache__private_ReportDeviceUsage @ 0x14052508C (Feature_MachineHiveCache__private_ReportDeviceUsage.c)
 *     IopAddBugcheckDirectedTransitionTriageData @ 0x1405D3CAC (IopAddBugcheckDirectedTransitionTriageData.c)
 *     Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportUsageFallback @ 0x1405F358C (Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportUsageFallback.c)
 *     Feature_Servicing_DeadlineQosReschedule__private_ReportUsageFallback @ 0x1405F62CC (Feature_Servicing_DeadlineQosReschedule__private_ReportUsageFallback.c)
 *     Feature_Sx_PEP_Notification_Synchronization__private_ReportUsageFallback @ 0x1406012C0 (Feature_Sx_PEP_Notification_Synchronization__private_ReportUsageFallback.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting @ 0x1406C6030 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting.c)
 *     Feature_NoPrecisePoolTagQueries__private_ReportDeviceUsage @ 0x1406C9F14 (Feature_NoPrecisePoolTagQueries__private_ReportDeviceUsage.c)
 *     ExpPrepareNewAtsDevice @ 0x1406D06AC (ExpPrepareNewAtsDevice.c)
 *     WheaResumedFromHibernate @ 0x1406D469C (WheaResumedFromHibernate.c)
 *     Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback @ 0x1406E2E14 (Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback.c)
 *     PopMonitorInvocation @ 0x14077C050 (PopMonitorInvocation.c)
 *     CmpLoadHiveThread @ 0x14084B550 (CmpLoadHiveThread.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x1409B7374 (PspSchedulerSharedDataRegionCreate.c)
 *     PopPowerAggregatorHandleActiveIntent @ 0x140AC2DC0 (PopPowerAggregatorHandleActiveIntent.c)
 *     SepSetSystemPaths @ 0x140B5D234 (SepSetSystemPaths.c)
 *     PnpEarlyLaunchImageNotificationPostProcess @ 0x140CC3DC0 (PnpEarlyLaunchImageNotificationPostProcess.c)
 *     KiInitializeVelocity @ 0x140CCA1CC (KiInitializeVelocity.c)
 *     PopEvaluateInputSuppressionRequired @ 0x140CD308C (PopEvaluateInputSuppressionRequired.c)
 *     PopPowerButtonSuppressionInit @ 0x140CD317C (PopPowerButtonSuppressionInit.c)
 *     ExpTimerInitialization @ 0x140CE6524 (ExpTimerInitialization.c)
 *     MiProtectSharedUserPage @ 0x140CF3E10 (MiProtectSharedUserPage.c)
 *     KeInitializeClock @ 0x140D0B7A4 (KeInitializeClock.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x140356CD0 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_MapReportingKind @ 0x1404C5968 (wil_details_MapReportingKind.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToService(__int64 a1, char a2, int a3)
{
  unsigned int v4; // eax
  unsigned int v5; // r9d
  __int64 v6; // r10
  __int64 result; // rax

  v4 = wil_details_MapReportingKind(a3, a2 & 1);
  result = wil_details_FeatureReporting_ReportUsageToServiceDirect(a1, v6, v4, v5);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return guard_dispatch_icall_no_overrides(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16));
  }
  return result;
}
