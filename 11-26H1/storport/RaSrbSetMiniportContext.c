/*
 * XREFs of RaSrbSetMiniportContext @ 0x140011BB0
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140012104 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x140067AD0 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140068000 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     TcglibEalExecuteCommandSync @ 0x14008CF08 (TcglibEalExecuteCommandSync.c)
 *     StorGetNVMePollingInformation @ 0x140097348 (StorGetNVMePollingInformation.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009F164 (RaUnitScsiGetDumpPointersIoctl.c)
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400C0CD0 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 *     NvmeAdapterMiniportPassthroughRequestIoctl @ 0x1400D9B04 (NvmeAdapterMiniportPassthroughRequestIoctl.c)
 *     NvmePnPPassToMiniPort @ 0x1400E2018 (NvmePnPPassToMiniPort.c)
 *     NvmePnPPassToStorMQMiniPort @ 0x1400E2330 (NvmePnPPassToStorMQMiniPort.c)
 *     NvmeAdapterCreateFabricControllerQueue @ 0x1400E6A80 (NvmeAdapterCreateFabricControllerQueue.c)
 *     NvmeAdapterDeleteFabricControllerQueue @ 0x1400E6FDC (NvmeAdapterDeleteFabricControllerQueue.c)
 *     NvmeAdapterDrainFabricControllerQueue @ 0x1400E7D48 (NvmeAdapterDrainFabricControllerQueue.c)
 *     NvmeAdapterPrepareControllerQueueRequest @ 0x1400EC0F8 (NvmeAdapterPrepareControllerQueueRequest.c)
 *     NvmeAdapterTransportDisconnectFabricControllerQueue @ 0x1400EEE38 (NvmeAdapterTransportDisconnectFabricControllerQueue.c)
 *     NvmeAdapterTransportReconnectFabricControllerQueue @ 0x1400EF304 (NvmeAdapterTransportReconnectFabricControllerQueue.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018470C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1401855B0 (RaidAdapterGetMiniportDumpInfo.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 *     RaWmiPassToMiniPort @ 0x1401B8A40 (RaWmiPassToMiniPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaSrbSetMiniportContext(int *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  int v4; // eax
  __int64 result; // rax

  v3 = 79LL;
  v4 = *a1;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    if ( v4 != 1314275652 )
      v3 = 131LL;
    result = (unsigned int)(a1[v3] + 7);
    if ( (result & 0xFFFFFFF8) != 0 )
      *(_QWORD *)(a2 + 104) = a3;
  }
  else
  {
    if ( v4 != 1314275652 )
      v3 = 131LL;
    result = (unsigned int)(a1[v3] + 7);
    if ( (result & 0xFFFFFFF8) != 0 )
      *(_QWORD *)(a2 + 56) = a3;
  }
  return result;
}
