/*
 * XREFs of RaidLogAllocationFailure @ 0x140095610
 * Callers:
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1400078F8 (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x140007B84 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1400082A8 (RaidUnitSendSrbIoControlSynchronously.c)
 *     StorpTelemetryGetUnitIoCounters @ 0x140009010 (StorpTelemetryGetUnitIoCounters.c)
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidBusEnumeratorGetLunList @ 0x14000A2D0 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterEnumerateBus @ 0x14000B1B0 (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGetUnit @ 0x14000C0F0 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorIssueReportLuns @ 0x14000D450 (RaidBusEnumeratorIssueReportLuns.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x14000D870 (RaidBusEnumeratorGenericInquiry.c)
 *     StorUnmapSenseInfo @ 0x140017530 (StorUnmapSenseInfo.c)
 *     RaidPnPPassToMiniPort @ 0x14001A8BC (RaidPnPPassToMiniPort.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001BC80 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaInitializeRaidResources @ 0x1400251C0 (RaInitializeRaidResources.c)
 *     StorpAllocateContiguousMemorySpecifyCacheNodeEx @ 0x1400378D0 (StorpAllocateContiguousMemorySpecifyCacheNodeEx.c)
 *     RaidAllocateSrb @ 0x1400384D0 (RaidAllocateSrb.c)
 *     RaGetUnitPerfCounterIdString @ 0x140039668 (RaGetUnitPerfCounterIdString.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x14003F330 (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     RaidAdjustDeferredQueueDepth @ 0x140045798 (RaidAdjustDeferredQueueDepth.c)
 *     AllocateNewNVMePrpListBufferEntry @ 0x140058120 (AllocateNewNVMePrpListBufferEntry.c)
 *     RaidAllocatePoolEx @ 0x1400929F4 (RaidAllocatePoolEx.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidLogAllocationFailure(void *a1, __int64 a2, __int64 a3, int a4, int a5)
{
  char *ErrorLogEntry; // rax

  ErrorLogEntry = (char *)IoAllocateErrorLogEntry(a1, 0x48u);
  if ( ErrorLogEntry )
  {
    *(_QWORD *)(ErrorLogEntry + 4) = 0LL;
    *(_QWORD *)(ErrorLogEntry + 28) = 0LL;
    *(_QWORD *)(ErrorLogEntry + 36) = 0LL;
    *((_DWORD *)ErrorLogEntry + 11) = 0;
    *(_DWORD *)ErrorLogEntry = 0x200000;
    *((_DWORD *)ErrorLogEntry + 6) = 0;
    *((_DWORD *)ErrorLogEntry + 3) = -2147221448;
    *((_DWORD *)ErrorLogEntry + 4) = 10;
    *((_DWORD *)ErrorLogEntry + 5) = -1073741801;
    *((_QWORD *)ErrorLogEntry + 6) = a2;
    *((_QWORD *)ErrorLogEntry + 7) = a3;
    *((_DWORD *)ErrorLogEntry + 16) = a4;
    *((_DWORD *)ErrorLogEntry + 17) = a5;
    IoWriteErrorLogEntry(ErrorLogEntry);
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
  }
}
