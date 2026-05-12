/*
 * XREFs of RaidpPortGetAdapter @ 0x1400010E0
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 *     StorpCompleteServiceIrp @ 0x140049FFC (StorpCompleteServiceIrp.c)
 *     StorEnableRegistryKeyNotification @ 0x140050904 (StorEnableRegistryKeyNotification.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x140051AE8 (StorAdapterDeviceRegistryKeyProxy.c)
 *     StorEtwMiniportLogError @ 0x140052C80 (StorEtwMiniportLogError.c)
 *     StorpBuildScatterGatherList @ 0x140058304 (StorpBuildScatterGatherList.c)
 *     StorpFreeTimer @ 0x140059470 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1400597F4 (StorpFreeWorkItem.c)
 *     StorpPutScatterGatherList @ 0x140059F78 (StorpPutScatterGatherList.c)
 *     StorpInitializeTimer @ 0x14005A2AC (StorpInitializeTimer.c)
 *     RaidNvmeIceConfigureExclusionRanges @ 0x140079E98 (RaidNvmeIceConfigureExclusionRanges.c)
 *     RaidNvmeIceEnableNvmeDevice @ 0x140079FBC (RaidNvmeIceEnableNvmeDevice.c)
 *     StorEnablePassiveInitialization @ 0x14007A900 (StorEnablePassiveInitialization.c)
 *     StorExtAcquireMSISpinLock @ 0x14007AAC0 (StorExtAcquireMSISpinLock.c)
 *     StorExtCompleteServiceIrp @ 0x14007AC80 (StorExtCompleteServiceIrp.c)
 *     StorExtGetMessageInterruptInformation @ 0x14007B070 (StorExtGetMessageInterruptInformation.c)
 *     StorExtReleaseMSISpinLock @ 0x14007B140 (StorExtReleaseMSISpinLock.c)
 *     StorPortAllocateRegistryBuffer @ 0x14007B1A0 (StorPortAllocateRegistryBuffer.c)
 *     StorPortDeviceReady @ 0x14007B410 (StorPortDeviceReady.c)
 *     StorPortFreeRegistryBuffer @ 0x14007B5E0 (StorPortFreeRegistryBuffer.c)
 *     StorPortGetBusData @ 0x14007B660 (StorPortGetBusData.c)
 *     StorPortLogError @ 0x14007BB80 (StorPortLogError.c)
 *     StorPortPause @ 0x14007BE90 (StorPortPause.c)
 *     StorPortRegistryWrite @ 0x14007C320 (StorPortRegistryWrite.c)
 *     StorPortResume @ 0x14007C4D0 (StorPortResume.c)
 *     StorpQueueWorkItemInternal @ 0x14007D808 (StorpQueueWorkItemInternal.c)
 * Callees:
 *     <none>
 */

int *__fastcall RaidpPortGetAdapter(__int64 a1, int **a2, int **a3)
{
  __int64 v3; // rcx
  int *result; // rax
  int v6; // r8d

  v3 = *(_QWORD *)(a1 - 16);
  result = 0LL;
  *a2 = 0LL;
  *a3 = 0LL;
  if ( v3 )
  {
    result = *(int **)v3;
    if ( *(_QWORD *)v3 )
    {
      v6 = *result;
      if ( (*(_DWORD *)(v3 + 248) & 1) != 0 )
      {
        if ( v6 == 1314275652 )
          *a3 = result;
      }
      else if ( v6 == 1094997074 )
      {
        *a2 = result;
      }
    }
  }
  return result;
}
