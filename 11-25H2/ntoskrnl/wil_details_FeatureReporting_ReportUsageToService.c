/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x14053A294
 * Callers:
 *     CmpRecordRegistryLockAcquire @ 0x1402067A0 (CmpRecordRegistryLockAcquire.c)
 *     CmpRecordRegistryLockRelease @ 0x140206F20 (CmpRecordRegistryLockRelease.c)
 *     CmpIsRegistryLockAcquired @ 0x140206FB0 (CmpIsRegistryLockAcquired.c)
 *     KeConfigureHeteroProcessors @ 0x14042819C (KeConfigureHeteroProcessors.c)
 *     Feature_OpocksAndMappedSections__private_ReportDeviceUsage @ 0x140463FC0 (Feature_OpocksAndMappedSections__private_ReportDeviceUsage.c)
 *     Feature_IoInvalidateDeviceState_Unconditional__private_ReportDeviceUsage @ 0x14046EDC4 (Feature_IoInvalidateDeviceState_Unconditional__private_ReportDeviceUsage.c)
 *     Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage @ 0x14047CDDC (Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage.c)
 *     Feature_PdcClientPnpActionQueue__private_ReportDeviceUsage @ 0x1404946E4 (Feature_PdcClientPnpActionQueue__private_ReportDeviceUsage.c)
 *     Feature_NewWpsAssignmentAlgorithm__private_IsEnabledPreCheck @ 0x1404A4928 (Feature_NewWpsAssignmentAlgorithm__private_IsEnabledPreCheck.c)
 *     Feature_UpperThresholdInheritance__private_ReportDeviceUsage @ 0x1404A4C64 (Feature_UpperThresholdInheritance__private_ReportDeviceUsage.c)
 *     PopEsUpdateState @ 0x1404B8AA0 (PopEsUpdateState.c)
 *     Feature_UserModeAutoBoost__private_IsEnabledPreCheck @ 0x1404BA1F0 (Feature_UserModeAutoBoost__private_IsEnabledPreCheck.c)
 *     PopDiagTraceCsResiliencyEnter @ 0x1404D4570 (PopDiagTraceCsResiliencyEnter.c)
 *     wil_details_IsEnabledFallback @ 0x1404D57A0 (wil_details_IsEnabledFallback.c)
 *     Feature_ID51912085__private_IsEnabledPreCheck @ 0x1404F1B70 (Feature_ID51912085__private_IsEnabledPreCheck.c)
 *     Feature_MachineHiveCache__private_ReportDeviceUsage @ 0x1404F3748 (Feature_MachineHiveCache__private_ReportDeviceUsage.c)
 *     Feature_HaltOnAddress_QueuedSpinLock__private_ReportDeviceUsage @ 0x1404F3B38 (Feature_HaltOnAddress_QueuedSpinLock__private_ReportDeviceUsage.c)
 *     Feature_HaltOnAddress_Barrier__private_ReportDeviceUsage @ 0x1404F3BA0 (Feature_HaltOnAddress_Barrier__private_ReportDeviceUsage.c)
 *     Feature_ShortThreadQuantum__private_ReportDeviceUsage @ 0x1404F3C08 (Feature_ShortThreadQuantum__private_ReportDeviceUsage.c)
 *     Feature_AggressiveInputSuppression__private_IsEnabledPreCheck @ 0x1404F6FA0 (Feature_AggressiveInputSuppression__private_IsEnabledPreCheck.c)
 *     Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage @ 0x1404F8560 (Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage.c)
 *     IopAddBugcheckDirectedTransitionTriageData @ 0x14059BD48 (IopAddBugcheckDirectedTransitionTriageData.c)
 *     Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportUsageFallback @ 0x1405BB57C (Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportUsageFallback.c)
 *     Feature_Servicing_DeadlineQosReschedule__private_ReportUsageFallback @ 0x1405BE0A8 (Feature_Servicing_DeadlineQosReschedule__private_ReportUsageFallback.c)
 *     PopDiagTraceEsState @ 0x1405D030C (PopDiagTraceEsState.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting @ 0x140642F0C (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting.c)
 *     ExpPrepareNewAtsDevice @ 0x14064C110 (ExpPrepareNewAtsDevice.c)
 *     WheaResumedFromHibernate @ 0x14064F77C (WheaResumedFromHibernate.c)
 *     Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback @ 0x14065CE6C (Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x14068ACD4 (SdbpCheckApplicationTypeAttributes.c)
 *     PopEsSnapTelemetry @ 0x1406EC300 (PopEsSnapTelemetry.c)
 *     PopEsPublishState @ 0x140750C88 (PopEsPublishState.c)
 *     SshSessionManagerFlushBuffers @ 0x1407568A8 (SshSessionManagerFlushBuffers.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14075844C (SshpAlpcProcessAlpcMessage.c)
 *     SshpAlpcProcessMessage @ 0x1407586A8 (SshpAlpcProcessMessage.c)
 *     SepSetSystemPaths @ 0x14077F780 (SepSetSystemPaths.c)
 *     CmpLoadHiveThread @ 0x1407BB850 (CmpLoadHiveThread.c)
 *     SdbpCheckBackupApplicationAttributes @ 0x1407F2AE0 (SdbpCheckBackupApplicationAttributes.c)
 *     SdbpCheckPackageAttributes @ 0x1407F41D0 (SdbpCheckPackageAttributes.c)
 *     SdbpFreeAppAttributes @ 0x1407F4928 (SdbpFreeAppAttributes.c)
 *     SdbpCheckAttribute @ 0x1407F7A84 (SdbpCheckAttribute.c)
 *     SdbpCheckFromStringVersion @ 0x1407F7D84 (SdbpCheckFromStringVersion.c)
 *     SdbpCheckUptoStringVersion @ 0x1407F7F5C (SdbpCheckUptoStringVersion.c)
 *     PnpActivatePdcForDeviceEvent @ 0x14096C250 (PnpActivatePdcForDeviceEvent.c)
 *     PopPowerAggregatorHandleActiveIntent @ 0x140A31D40 (PopPowerAggregatorHandleActiveIntent.c)
 *     PopEsInStandbyAcDcCallback @ 0x140A36BB0 (PopEsInStandbyAcDcCallback.c)
 *     PnpEarlyLaunchImageNotificationPostProcess @ 0x140C11950 (PnpEarlyLaunchImageNotificationPostProcess.c)
 *     PopEvaluateInputSuppressionRequired @ 0x140C1F4FC (PopEvaluateInputSuppressionRequired.c)
 *     PopPowerButtonSuppressionInit @ 0x140C1F5E0 (PopPowerButtonSuppressionInit.c)
 *     ExpTimerInitialization @ 0x140C319BC (ExpTimerInitialization.c)
 *     MiProtectSharedUserPage @ 0x140C3EF24 (MiProtectSharedUserPage.c)
 *     KeInitializeClock @ 0x140C4ECE8 (KeInitializeClock.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1403B86D0 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_MapReportingKind @ 0x140482C90 (wil_details_MapReportingKind.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToService(__int64 a1, char a2, int a3)
{
  unsigned int v4; // eax
  int v5; // r9d
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
