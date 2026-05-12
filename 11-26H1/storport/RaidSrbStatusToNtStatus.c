/*
 * XREFs of RaidSrbStatusToNtStatus @ 0x14001CD48
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140012104 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaUnitStartIo @ 0x140013D70 (RaUnitStartIo.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001BC80 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitCompleteResetRequest @ 0x140024200 (RaidUnitCompleteResetRequest.c)
 *     RaidBusEnumeratorProcess1667DeviceInquiry @ 0x140045C00 (RaidBusEnumeratorProcess1667DeviceInquiry.c)
 *     RaidBusEnumeratorProcessSupportedPages @ 0x140047F00 (RaidBusEnumeratorProcessSupportedPages.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x140056C08 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x140067AD0 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140068000 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidBusEnumeratorProcessAtaInformation @ 0x14006FF60 (RaidBusEnumeratorProcessAtaInformation.c)
 *     RaidBusEnumeratorProcessBlockDeviceCharacteristics @ 0x140070040 (RaidBusEnumeratorProcessBlockDeviceCharacteristics.c)
 *     RaidBusEnumeratorProcessDeviceId @ 0x1400700B0 (RaidBusEnumeratorProcessDeviceId.c)
 *     RaidBusEnumeratorProcessInquiry @ 0x140070140 (RaidBusEnumeratorProcessInquiry.c)
 *     RaidBusEnumeratorProcessProbeLunZero @ 0x140070190 (RaidBusEnumeratorProcessProbeLunZero.c)
 *     RaidBusEnumeratorProcessSerialNumber @ 0x1400701E0 (RaidBusEnumeratorProcessSerialNumber.c)
 *     TcglibEalExecuteCommandSync @ 0x14008CF08 (TcglibEalExecuteCommandSync.c)
 *     RaidCancelIrp @ 0x140093280 (RaidCancelIrp.c)
 *     StorGetNVMePollingInformation @ 0x140097348 (StorGetNVMePollingInformation.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009F164 (RaUnitScsiGetDumpPointersIoctl.c)
 *     StorDrainPendingIoGatewayItems @ 0x1400AEED4 (StorDrainPendingIoGatewayItems.c)
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400C0CD0 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 *     NvmeAdapterMiniportPassthroughRequestIoctl @ 0x1400D9B04 (NvmeAdapterMiniportPassthroughRequestIoctl.c)
 *     NvmeAdapterCreateFabricControllerQueue @ 0x1400E6A80 (NvmeAdapterCreateFabricControllerQueue.c)
 *     NvmeAdapterDeleteFabricControllerQueue @ 0x1400E6FDC (NvmeAdapterDeleteFabricControllerQueue.c)
 *     NvmeAdapterDrainFabricControllerQueue @ 0x1400E7D48 (NvmeAdapterDrainFabricControllerQueue.c)
 *     NvmeAdapterTransportDisconnectFabricControllerQueue @ 0x1400EEE38 (NvmeAdapterTransportDisconnectFabricControllerQueue.c)
 *     NvmeAdapterTransportReconnectFabricControllerQueue @ 0x1400EF304 (NvmeAdapterTransportReconnectFabricControllerQueue.c)
 *     NvmeNamespaceExecuteScsiSrbEx @ 0x14010569C (NvmeNamespaceExecuteScsiSrbEx.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018470C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1401855B0 (RaidAdapterGetMiniportDumpInfo.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1401B407C (RaUnitStorageDataSetManagementIoctl.c)
 *     StorGetNVMeIdentifyInfo @ 0x1401B6194 (StorGetNVMeIdentifyInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1401B816C (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaWmiPassToMiniPort @ 0x1401B8A40 (RaWmiPassToMiniPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidSrbStatusToNtStatus(char a1)
{
  unsigned int v1; // edx
  unsigned int v2; // edx
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx

  v1 = a1 & 0x3F;
  if ( v1 <= 0x16 )
  {
    if ( v1 != 22 )
    {
      if ( v1 > 0xA )
      {
        v7 = v1 - 11;
        if ( !v7 )
          return 3221225653LL;
        v8 = v7 - 6;
        if ( !v8 )
          return 3221225664LL;
        v9 = v8 - 1;
        if ( !v9 )
          return 2147483653LL;
        if ( v9 != 3 )
          return 3221225861LL;
      }
      else
      {
        if ( v1 == 10 )
          return 3221225629LL;
        v2 = v1 - 1;
        if ( !v2 )
          return 0LL;
        v3 = v2 - 4;
        if ( !v3 )
          return 2147483665LL;
        v4 = v3 - 1;
        if ( v4 )
        {
          v5 = v4 - 2;
          if ( v5 )
          {
            if ( v5 == 1 )
              return 3221225653LL;
            return 3221225861LL;
          }
          return 3221225664LL;
        }
      }
      return 3221225488LL;
    }
    return 3221225473LL;
  }
  if ( v1 <= 0x25 )
  {
    if ( v1 == 37 )
      return 3221225996LL;
    v10 = v1 - 23;
    if ( !v10 )
      return 3221225506LL;
    v11 = v10 - 1;
    if ( !v11 )
      return 3221226614LL;
    v12 = v11 - 8;
    if ( !v12 )
      return 3221225664LL;
    v13 = v12 - 1;
    if ( !v13 )
      return 3221225664LL;
    if ( v13 == 1 )
      return 3221225488LL;
    return 3221225861LL;
  }
  v14 = v1 - 38;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( !v15 )
      return 3221225473LL;
    v16 = v15 - 1;
    if ( !v16 )
      return 3221225485LL;
    if ( v16 == 16 )
      return 3221226762LL;
    return 3221225861LL;
  }
  return 3221225626LL;
}
