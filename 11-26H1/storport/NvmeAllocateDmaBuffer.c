/*
 * XREFs of NvmeAllocateDmaBuffer @ 0x140044FB4
 * Callers:
 *     NvmeNamespaceDsmDeallocate @ 0x140044400 (NvmeNamespaceDsmDeallocate.c)
 *     NvmeControllerGetChangedNamespaceListLog @ 0x1400C5C50 (NvmeControllerGetChangedNamespaceListLog.c)
 *     NvmeControllerIdentifyChangedNamespaces @ 0x1400C5E88 (NvmeControllerIdentifyChangedNamespaces.c)
 *     NvmeNamespaceIdentify @ 0x1400C6954 (NvmeNamespaceIdentify.c)
 *     NvmeControllerGetCloudSSDErrorRecoveryLog @ 0x1400CDA54 (NvmeControllerGetCloudSSDErrorRecoveryLog.c)
 *     NvmeControllerGetCloudSSDLog @ 0x1400CDD20 (NvmeControllerGetCloudSSDLog.c)
 *     NvmeControllerGetCommandEffectsLog @ 0x1400CDF84 (NvmeControllerGetCommandEffectsLog.c)
 *     NvmeControllerGetFeatureIdentifiersSupportedLog @ 0x1400CE1CC (NvmeControllerGetFeatureIdentifiersSupportedLog.c)
 *     NvmeControllerGetHealthInfoLog @ 0x1400CE460 (NvmeControllerGetHealthInfoLog.c)
 *     NvmeControllerGetSupportedLogPagesLog @ 0x1400CE71C (NvmeControllerGetSupportedLogPagesLog.c)
 *     NvmeControllerBuildIoPollingConfiguration @ 0x1400CEA24 (NvmeControllerBuildIoPollingConfiguration.c)
 *     NvmeControllerSetHostBehaviorSupport @ 0x1400CFE2C (NvmeControllerSetHostBehaviorSupport.c)
 *     NvmeControllerSetHostIdentifier @ 0x1400CFFDC (NvmeControllerSetHostIdentifier.c)
 *     NvmeControllerSetHostMemoryBuffer @ 0x1400D0214 (NvmeControllerSetHostMemoryBuffer.c)
 *     NvmeControllerSyncHostTime @ 0x1400D0D28 (NvmeControllerSyncHostTime.c)
 *     NvmeGetAutoPowerStateTransition @ 0x1400D0F40 (NvmeGetAutoPowerStateTransition.c)
 *     NvmeAdapterFirmwareDownloadIoctl @ 0x1400D6F6C (NvmeAdapterFirmwareDownloadIoctl.c)
 *     NvmeAdapterFirmwareGetInfoIoctl @ 0x1400D7D50 (NvmeAdapterFirmwareGetInfoIoctl.c)
 *     NvmeControllerAsyncEventCommandCompletion @ 0x1400F06B0 (NvmeControllerAsyncEventCommandCompletion.c)
 *     NvmeControllerCheckOCPCompliance @ 0x1400F15A4 (NvmeControllerCheckOCPCompliance.c)
 *     NvmeControllerGetIoCommandSetIdentify @ 0x1400F3F00 (NvmeControllerGetIoCommandSetIdentify.c)
 *     NvmeControllerGetTelemetryLog @ 0x1400F4BE8 (NvmeControllerGetTelemetryLog.c)
 *     NvmeControllerIdentify @ 0x1400F5094 (NvmeControllerIdentify.c)
 *     NvmeControllerIdentifyUUIDList @ 0x1400F5278 (NvmeControllerIdentifyUUIDList.c)
 *     NvmeControllerInitializeAdminQueue @ 0x1400F5F24 (NvmeControllerInitializeAdminQueue.c)
 *     NvmeControllerIoQueuesInitialize @ 0x1400F71AC (NvmeControllerIoQueuesInitialize.c)
 *     NvmeControllerSubmissionQueueInit @ 0x1400FB3FC (NvmeControllerSubmissionQueueInit.c)
 *     NvmeGetNVMSetAttributeList @ 0x1400FE8C0 (NvmeGetNVMSetAttributeList.c)
 *     NvmeGetNamespaceDescriptorListIdentify @ 0x1400FEB00 (NvmeGetNamespaceDescriptorListIdentify.c)
 *     NvmeGetNamespaceIoCommandSetIdentify @ 0x1400FED48 (NvmeGetNamespaceIoCommandSetIdentify.c)
 *     NvmeNamespaceDsmWriteZeroes @ 0x140103E38 (NvmeNamespaceDsmWriteZeroes.c)
 *     NvmeNamespaceReinitializeMediaRecoverWorker @ 0x14010CBE0 (NvmeNamespaceReinitializeMediaRecoverWorker.c)
 *     NvmeNamespaceReservationAcquire @ 0x14010D88C (NvmeNamespaceReservationAcquire.c)
 *     NvmeNamespaceReservationRegister @ 0x14010DAC4 (NvmeNamespaceReservationRegister.c)
 *     NvmeNamespaceReservationRegisterAndMove @ 0x14010DD1C (NvmeNamespaceReservationRegisterAndMove.c)
 *     NvmeNamespaceReservationRelease @ 0x14010DF2C (NvmeNamespaceReservationRelease.c)
 *     NvmeNamespaceReservationReport @ 0x14010E124 (NvmeNamespaceReservationReport.c)
 *     NvmeNamespaceStorMQFirmwareGetInfoIoctl @ 0x140113B00 (NvmeNamespaceStorMQFirmwareGetInfoIoctl.c)
 *     ScsiToNVMeCommand @ 0x140116B04 (ScsiToNVMeCommand.c)
 *     NvmeQueryProtocolInfoFeatureData @ 0x140120B58 (NvmeQueryProtocolInfoFeatureData.c)
 *     NvmeQueryProtocolInfoIdentifyData @ 0x14012113C (NvmeQueryProtocolInfoIdentifyData.c)
 *     NvmeQueryProtocolInfoLogPageData @ 0x140121494 (NvmeQueryProtocolInfoLogPageData.c)
 *     NvmeSetProtocolInfoFeatureData @ 0x140122774 (NvmeSetProtocolInfoFeatureData.c)
 *     NvmeAdapterGetTemperatureProperty @ 0x14019D994 (NvmeAdapterGetTemperatureProperty.c)
 *     NvmeAdapterStorageProtocolCommandIoctl @ 0x14019FB54 (NvmeAdapterStorageProtocolCommandIoctl.c)
 *     NvmeNamespaceStorageQueryDeviceEndurancePropertyIoctl @ 0x1401AAF40 (NvmeNamespaceStorageQueryDeviceEndurancePropertyIoctl.c)
 *     NvmeNamespaceStorageProtocolCommandIoctl @ 0x1401BCE2C (NvmeNamespaceStorageProtocolCommandIoctl.c)
 * Callees:
 *     NvmeAllocateContiguousMemorySpecifyCacheNodeEx @ 0x140045134 (NvmeAllocateContiguousMemorySpecifyCacheNodeEx.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeAllocateDmaBuffer(__int64 a1, unsigned int a2, __int64 a3, void **a4, _QWORD *a5, char a6)
{
  size_t v8; // r14
  unsigned int v10; // ebp
  __int64 v11; // rax
  int ContiguousMemorySpecifyCacheNode; // eax

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 128) + 144LL) & 0x1000LL) != 0
    && a2 <= 0x1000
    && !a6
    && !_interlockedbittestandset((volatile signed __int32 *)(a1 + 1072), 0) )
  {
    *a4 = *(void **)(a1 + 1112);
    v8 = a2;
    *a5 = *(_QWORD *)(a1 + 1120);
LABEL_6:
    memset_0(*a4, 0, v8);
    return 0LL;
  }
  if ( *(_BYTE *)(a1 + 1728) == 1 )
  {
    v10 = *(_DWORD *)(*(_QWORD *)(a1 + 1648) + 8LL);
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 1048);
    if ( !v11 || (*(_DWORD *)(v11 + 24) & 2) != 0 )
      v10 = 0x80000000;
    else
      v10 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 1024LL);
  }
  v8 = a2;
  ContiguousMemorySpecifyCacheNode = NvmeAllocateContiguousMemorySpecifyCacheNodeEx(
                                       *(_QWORD *)(a1 + 128),
                                       a2,
                                       0,
                                       -1,
                                       0LL,
                                       1,
                                       v10,
                                       (__int64)a4,
                                       (__int64)a5);
  if ( !ContiguousMemorySpecifyCacheNode )
    goto LABEL_6;
  if ( v10 != 0x80000000 )
    ContiguousMemorySpecifyCacheNode = NvmeAllocateContiguousMemorySpecifyCacheNodeEx(
                                         *(_QWORD *)(a1 + 128),
                                         v8,
                                         0,
                                         -1,
                                         0LL,
                                         1,
                                         0x80000000,
                                         (__int64)a4,
                                         (__int64)a5);
  if ( !ContiguousMemorySpecifyCacheNode )
    goto LABEL_6;
  return 3221225626LL;
}
