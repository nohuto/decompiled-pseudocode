/*
 * XREFs of RaidDriverGetName @ 0x14004A42C
 * Callers:
 *     RaidPnPPassToMiniPort @ 0x14001A8BC (RaidPnPPassToMiniPort.c)
 *     RaidAdapterRequestDirectComplete @ 0x14002E1A8 (RaidAdapterRequestDirectComplete.c)
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     StorReset @ 0x140050A30 (StorReset.c)
 *     StorEtwMiniportLogError @ 0x140052C80 (StorEtwMiniportLogError.c)
 *     RaidCaptureLiveDump @ 0x1400536B8 (RaidCaptureLiveDump.c)
 *     RaidAdapterCreateDevmapEntry @ 0x14005B814 (RaidAdapterCreateDevmapEntry.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x14006218C (RaidAdapterHwFirmwareActivateIoctl.c)
 *     StorLogMFNDCapability @ 0x14006E24C (StorLogMFNDCapability.c)
 *     StorLogMFNDChildPFControl @ 0x14006E554 (StorLogMFNDChildPFControl.c)
 *     StorLogMFNDNSPageMapControl @ 0x14006E734 (StorLogMFNDNSPageMapControl.c)
 *     StorLogMFNDNameSpaceRead @ 0x14006E9A4 (StorLogMFNDNameSpaceRead.c)
 *     StorLogMFNDNameSpaceWrite @ 0x14006EC68 (StorLogMFNDNameSpaceWrite.c)
 *     StorLogMFNDReconfigure @ 0x14006EF40 (StorLogMFNDReconfigure.c)
 *     StorLogRegisterMFNDInterface @ 0x14006F134 (StorLogRegisterMFNDInterface.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x140071250 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     StorpMarkDeviceFailed @ 0x14007CEEC (StorpMarkDeviceFailed.c)
 *     RaidRequestDIrpForAssociatedUnits @ 0x140080438 (RaidRequestDIrpForAssociatedUnits.c)
 *     RaidAdapterStorageTcgActivateLocking @ 0x140083308 (RaidAdapterStorageTcgActivateLocking.c)
 *     RaidAdapterStorageTcgAssignLockingObject @ 0x140083864 (RaidAdapterStorageTcgAssignLockingObject.c)
 *     RaidAdapterStorageTcgDeassignLockingObject @ 0x140083E90 (RaidAdapterStorageTcgDeassignLockingObject.c)
 *     RaidAdapterStorageTcgEnumerateLockingObjects @ 0x140084420 (RaidAdapterStorageTcgEnumerateLockingObjects.c)
 *     RaidAdapterStorageTcgEraseLockingObject @ 0x140084A2C (RaidAdapterStorageTcgEraseLockingObject.c)
 *     RaidAdapterStorageTcgGetLockingObjectMetadata @ 0x140084FAC (RaidAdapterStorageTcgGetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgQueryCapability @ 0x140085584 (RaidAdapterStorageTcgQueryCapability.c)
 *     RaidAdapterStorageTcgResetState @ 0x140085A88 (RaidAdapterStorageTcgResetState.c)
 *     RaidAdapterStorageTcgRevertConfig @ 0x140085F48 (RaidAdapterStorageTcgRevertConfig.c)
 *     RaidAdapterStorageTcgSetLockingObject @ 0x140086498 (RaidAdapterStorageTcgSetLockingObject.c)
 *     RaidAdapterStorageTcgSetLockingObjectAuthKey @ 0x140086A78 (RaidAdapterStorageTcgSetLockingObjectAuthKey.c)
 *     RaidAdapterStorageTcgSetLockingObjectMetadata @ 0x140087028 (RaidAdapterStorageTcgSetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgSetSpAuthorityKey @ 0x1400875CC (RaidAdapterStorageTcgSetSpAuthorityKey.c)
 *     RaidUnitStorageTcgActivateLocking @ 0x140087B5C (RaidUnitStorageTcgActivateLocking.c)
 *     RaidUnitStorageTcgAssignLockingObject @ 0x1400880D0 (RaidUnitStorageTcgAssignLockingObject.c)
 *     RaidUnitStorageTcgDeassignLockingObject @ 0x140088708 (RaidUnitStorageTcgDeassignLockingObject.c)
 *     RaidUnitStorageTcgEnumerateLockingObjects @ 0x140088CB4 (RaidUnitStorageTcgEnumerateLockingObjects.c)
 *     RaidUnitStorageTcgEraseLockingObject @ 0x1400892C4 (RaidUnitStorageTcgEraseLockingObject.c)
 *     RaidUnitStorageTcgGetLockingObjectMetadata @ 0x140089860 (RaidUnitStorageTcgGetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgQueryCapability @ 0x140089E3C (RaidUnitStorageTcgQueryCapability.c)
 *     RaidUnitStorageTcgResetState @ 0x14008A358 (RaidUnitStorageTcgResetState.c)
 *     RaidUnitStorageTcgRevertConfig @ 0x14008A830 (RaidUnitStorageTcgRevertConfig.c)
 *     RaidUnitStorageTcgSetLockingObject @ 0x14008AD88 (RaidUnitStorageTcgSetLockingObject.c)
 *     RaidUnitStorageTcgSetLockingObjectAuthKey @ 0x14008B3A0 (RaidUnitStorageTcgSetLockingObjectAuthKey.c)
 *     RaidUnitStorageTcgSetLockingObjectMetadata @ 0x14008B974 (RaidUnitStorageTcgSetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgSetSpAuthorityKey @ 0x14008BF3C (RaidUnitStorageTcgSetSpAuthorityKey.c)
 *     TcglibEalLogCommand @ 0x14008D2D8 (TcglibEalLogCommand.c)
 *     TcglibEalLogCommandStatus @ 0x14008D4A4 (TcglibEalLogCommandStatus.c)
 *     TcglibEalLogError @ 0x14008D638 (TcglibEalLogError.c)
 *     TcglibEalLogInfo @ 0x14008D804 (TcglibEalLogInfo.c)
 *     RaCheckAllMiniportSystemThreadsExit @ 0x140091B34 (RaCheckAllMiniportSystemThreadsExit.c)
 *     RaProcessStorageEventNotification @ 0x1400922D0 (RaProcessStorageEventNotification.c)
 *     RaidGetTcgProperties @ 0x140094E78 (RaidGetTcgProperties.c)
 *     StorLogMFNDCCAsyncEvent @ 0x140097770 (StorLogMFNDCCAsyncEvent.c)
 *     StorLogNVMeErrorInfo @ 0x140097970 (StorLogNVMeErrorInfo.c)
 *     StorLogNVMeErrorRecoveryInfo @ 0x140097B30 (StorLogNVMeErrorRecoveryInfo.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009F164 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidUnitAbortSrbCompletion @ 0x1400A6D90 (RaidUnitAbortSrbCompletion.c)
 *     StorEtwMiniportLogByteStream @ 0x1400B1628 (StorEtwMiniportLogByteStream.c)
 *     StorEtwNvmeMiniportEvent @ 0x1400B1BA0 (StorEtwNvmeMiniportEvent.c)
 *     StorEtwNvmeNamespaceEvent @ 0x1400B2058 (StorEtwNvmeNamespaceEvent.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1400B8A68 (StorpLogPhysicalTopologyInfo.c)
 *     StorpTelemetrySendAdapterDlrmStatistics @ 0x1400BFFBC (StorpTelemetrySendAdapterDlrmStatistics.c)
 *     StorLogIdentifyMFNDFailure @ 0x1400CAAFC (StorLogIdentifyMFNDFailure.c)
 *     StorLogMFNDCCQoSStatisticsInfo @ 0x1400CACBC (StorLogMFNDCCQoSStatisticsInfo.c)
 *     StorLogMFNDQueryCCQoSStatisticsLog @ 0x1400CAF1C (StorLogMFNDQueryCCQoSStatisticsLog.c)
 *     StorLogMFNDQueryCCQoSStatisticsProperty @ 0x1400CB15C (StorLogMFNDQueryCCQoSStatisticsProperty.c)
 *     StorLogMFNDQueryCCQueuesState @ 0x1400CB324 (StorLogMFNDQueryCCQueuesState.c)
 *     StorLogMFNDQueryChildPFCommandPermission @ 0x1400CB654 (StorLogMFNDQueryChildPFCommandPermission.c)
 *     StorLogMFNDQueryChildPFList @ 0x1400CB828 (StorLogMFNDQueryChildPFList.c)
 *     StorLogMFNDQueryChildPFProperty @ 0x1400CBA14 (StorLogMFNDQueryChildPFProperty.c)
 *     StorLogMFNDQueryChildPFSettings @ 0x1400CBC04 (StorLogMFNDQueryChildPFSettings.c)
 *     StorLogMFNDQueryMigrationQoS @ 0x1400CBF44 (StorLogMFNDQueryMigrationQoS.c)
 *     StorLogMFNDQueryNSPageMap @ 0x1400CC130 (StorLogMFNDQueryNSPageMap.c)
 *     StorLogMFNDQueryOperationInfo @ 0x1400CC2E8 (StorLogMFNDQueryOperationInfo.c)
 *     StorLogMFNDSetCCQoSStatisticsProperty @ 0x1400CC490 (StorLogMFNDSetCCQoSStatisticsProperty.c)
 *     StorLogMFNDSetCCQueuesState @ 0x1400CC658 (StorLogMFNDSetCCQueuesState.c)
 *     StorLogMFNDSetChildPFCommandPermission @ 0x1400CC998 (StorLogMFNDSetChildPFCommandPermission.c)
 *     StorLogMFNDSetChildPFProperty @ 0x1400CCB6C (StorLogMFNDSetChildPFProperty.c)
 *     StorLogMFNDSetChildPFQoS @ 0x1400CCD5C (StorLogMFNDSetChildPFQoS.c)
 *     StorLogMFNDSetChildPFSettings @ 0x1400CCFB0 (StorLogMFNDSetChildPFSettings.c)
 *     StorLogMFNDSetMigrationQoS @ 0x1400CD2D4 (StorLogMFNDSetMigrationQoS.c)
 *     StorLogMFNDSetOperationInfo @ 0x1400CD4C0 (StorLogMFNDSetOperationInfo.c)
 *     NvmeAdapterRequestDirectComplete @ 0x1400DC60C (NvmeAdapterRequestDirectComplete.c)
 *     StorLogDLRMDripsCallback @ 0x14012E340 (StorLogDLRMDripsCallback.c)
 *     StorLogDLRMEffectivePowerModeCallback @ 0x14012E4F0 (StorLogDLRMEffectivePowerModeCallback.c)
 *     StorLogDLRMInitialization @ 0x14012E6A0 (StorLogDLRMInitialization.c)
 *     StorLogDLRMSetLinkToDesiredSpeed @ 0x14012E8D4 (StorLogDLRMSetLinkToDesiredSpeed.c)
 *     StorLogDLRMUpdateLinkInfo @ 0x14012EAF0 (StorLogDLRMUpdateLinkInfo.c)
 *     RaidInitializeAdapter @ 0x140186B24 (RaidInitializeAdapter.c)
 *     InitializeNvmeAdapter @ 0x140196AC0 (InitializeNvmeAdapter.c)
 *     NvmeDumpCreateDumpDriverInfo @ 0x1401A1ED0 (NvmeDumpCreateDumpDriverInfo.c)
 *     NvmeNativeDumpCreateDumpDriverInfo @ 0x1401A3264 (NvmeNativeDumpCreateDumpDriverInfo.c)
 *     RaidAdapterCreateDriverInfo @ 0x1401BD5E4 (RaidAdapterCreateDriverInfo.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RaidDriverGetName(__int64 a1, __int64 a2)
{
  _WORD *v2; // r8
  __int16 v5; // ax
  __int16 result; // ax
  unsigned int v7; // eax
  unsigned int v8; // ecx
  _WORD *v9; // rdx

  v2 = *(_WORD **)(a1 + 48);
  if ( v2 )
  {
    v7 = *(unsigned __int16 *)(a1 + 40);
    if ( (_WORD)v7 )
    {
      v8 = v7 >> 1;
      while ( v8 )
      {
        v9 = &v2[--v8];
        if ( *v9 == 92 )
        {
          if ( v9 )
            v2 = v9 + 1;
          break;
        }
      }
    }
  }
  v5 = *(_WORD *)(a1 + 40) + *(_WORD *)(a1 + 48) - (_WORD)v2;
  *(_WORD *)a2 = v5;
  result = v5 + 2;
  *(_WORD *)(a2 + 2) = result;
  *(_QWORD *)(a2 + 8) = v2;
  return result;
}
