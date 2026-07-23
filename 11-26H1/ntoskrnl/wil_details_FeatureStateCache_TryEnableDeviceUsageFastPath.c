/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140534EB0
 * Callers:
 *     Feature_NewWpsAssignmentAlgorithm__private_IsEnabledPreCheck @ 0x140417018 (Feature_NewWpsAssignmentAlgorithm__private_IsEnabledPreCheck.c)
 *     Feature_IoInvalidateDeviceState_Unconditional__private_ReportDeviceUsage @ 0x14047C334 (Feature_IoInvalidateDeviceState_Unconditional__private_ReportDeviceUsage.c)
 *     Feature_OpocksAndMappedSections__private_ReportDeviceUsage @ 0x14048BB5C (Feature_OpocksAndMappedSections__private_ReportDeviceUsage.c)
 *     Feature_ID51912085__private_IsEnabledPreCheck @ 0x14048E9D0 (Feature_ID51912085__private_IsEnabledPreCheck.c)
 *     Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage @ 0x1404AF264 (Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage.c)
 *     Feature_PdcClientPnpActionQueue__private_ReportDeviceUsage @ 0x1404CC6CC (Feature_PdcClientPnpActionQueue__private_ReportDeviceUsage.c)
 *     Feature_UpperThresholdInheritance__private_IsEnabledPreCheck @ 0x1404CF690 (Feature_UpperThresholdInheritance__private_IsEnabledPreCheck.c)
 *     wil_details_IsEnabledFallback @ 0x1404FAECC (wil_details_IsEnabledFallback.c)
 *     Feature_MachineHiveCache__private_ReportDeviceUsage @ 0x1405276FC (Feature_MachineHiveCache__private_ReportDeviceUsage.c)
 *     IopAddBugcheckDirectedTransitionTriageData @ 0x1405D649C (IopAddBugcheckDirectedTransitionTriageData.c)
 *     Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportUsageFallback @ 0x1405F5F4C (Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportUsageFallback.c)
 *     Feature_Servicing_DeadlineQosReschedule__private_ReportUsageFallback @ 0x1405F8C8C (Feature_Servicing_DeadlineQosReschedule__private_ReportUsageFallback.c)
 *     Feature_Sx_PEP_Notification_Synchronization__private_ReportUsageFallback @ 0x140603D70 (Feature_Sx_PEP_Notification_Synchronization__private_ReportUsageFallback.c)
 *     Feature_NoPrecisePoolTagQueries__private_ReportDeviceUsage @ 0x1406CDF50 (Feature_NoPrecisePoolTagQueries__private_ReportDeviceUsage.c)
 *     ExpPrepareNewAtsDevice @ 0x1406D46DC (ExpPrepareNewAtsDevice.c)
 *     WheaResumedFromHibernate @ 0x1406D871C (WheaResumedFromHibernate.c)
 *     Feature_CFR_Child_KM_C__private_ReportUsageFallback @ 0x1406E70F4 (Feature_CFR_Child_KM_C__private_ReportUsageFallback.c)
 *     Feature_CFR_Parent_KM_C__private_ReportUsageFallback @ 0x1406E7164 (Feature_CFR_Parent_KM_C__private_ReportUsageFallback.c)
 *     Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback @ 0x1406E71D4 (Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback.c)
 *     PopMonitorInvocation @ 0x14077EBD0 (PopMonitorInvocation.c)
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x140988354 (PspSchedulerSharedDataRegionCreate.c)
 *     PopPowerAggregatorHandleActiveIntent @ 0x140ADB1A0 (PopPowerAggregatorHandleActiveIntent.c)
 *     SepSetSystemPaths @ 0x140B603B4 (SepSetSystemPaths.c)
 *     PnpEarlyLaunchImageNotificationPostProcess @ 0x140CC9EA0 (PnpEarlyLaunchImageNotificationPostProcess.c)
 *     KiInitializeVelocity @ 0x140CD02B4 (KiInitializeVelocity.c)
 *     PopEvaluateInputSuppressionRequired @ 0x140CD922C (PopEvaluateInputSuppressionRequired.c)
 *     PopPowerButtonSuppressionInit @ 0x140CD931C (PopPowerButtonSuppressionInit.c)
 *     ExpTimerInitialization @ 0x140CEC8C4 (ExpTimerInitialization.c)
 *     MiProtectSharedUserPage @ 0x140CFA190 (MiProtectSharedUserPage.c)
 *     KeInitializeClock @ 0x140D117AC (KeInitializeClock.c)
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
