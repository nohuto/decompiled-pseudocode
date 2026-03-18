/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140532A10
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
 *     <none>
 */

void __fastcall wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(unsigned __int8 a1, int a2, __int64 a3)
{
  volatile signed __int32 *v3; // r9
  int v5; // edx
  unsigned int v6; // r8d
  signed __int32 v7; // eax
  signed __int32 v8; // ett

  v3 = *(volatile signed __int32 **)a3;
  v5 = a2 - 3;
  if ( v5 )
  {
    if ( v5 != 1 )
      return;
    v6 = 32;
  }
  else
  {
    v6 = 16;
  }
  if ( *(_BYTE *)(a3 + 30) || *(_BYTE *)(a3 + 29) )
  {
    _InterlockedOr(v3, v6);
  }
  else
  {
    v7 = *v3;
    do
    {
      if ( (v7 & 2) == 0 )
        break;
      if ( ((a1 ^ (unsigned __int8)v7) & 1) != 0 )
        break;
      v8 = v7;
      v7 = _InterlockedCompareExchange(v3, v7 | v6, v7);
    }
    while ( v8 != v7 );
  }
}
