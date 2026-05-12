/*
 * XREFs of StorFreeContiguousIoResources @ 0x14001271C
 * Callers:
 *     RaidUnitFreeResources @ 0x140011CBC (RaidUnitFreeResources.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140012104 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaFreeRaidResources @ 0x14001CE40 (RaFreeRaidResources.c)
 *     RaidUnitCompleteResetRequest @ 0x140024200 (RaidUnitCompleteResetRequest.c)
 *     RaidDeleteAdapter @ 0x1400478CC (RaidDeleteAdapter.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x140056C08 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x140067AD0 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140068000 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     TcglibEalExecuteCommandSync @ 0x14008CF08 (TcglibEalExecuteCommandSync.c)
 *     StorGetNVMePollingInformation @ 0x140097348 (StorGetNVMePollingInformation.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009F164 (RaUnitScsiGetDumpPointersIoctl.c)
 *     StorFreeExtraIoResourceForGateway @ 0x1400AF858 (StorFreeExtraIoResourceForGateway.c)
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400C0CD0 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 *     StorUnitExecuteNvmeSrbComplete @ 0x1400C5540 (StorUnitExecuteNvmeSrbComplete.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018470C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1401855B0 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidAdapterReleaseResources @ 0x140185C48 (RaidAdapterReleaseResources.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1401B407C (RaUnitStorageDataSetManagementIoctl.c)
 *     StorGetNVMeIdentifyInfo @ 0x1401B6194 (StorGetNVMeIdentifyInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1401B816C (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaWmiPassToMiniPort @ 0x1401B8A40 (RaWmiPassToMiniPort.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall StorFreeContiguousIoResources(__int64 a1, __int64 a2)
{
  bool v2; // zf

  if ( *(_DWORD *)a1 == 1094997074 )
  {
    if ( !*(_BYTE *)(a1 + 904) )
    {
LABEL_3:
      MmFreeContiguousMemory((PVOID)a2);
      return;
    }
    v2 = *(_DWORD *)(a1 + 924) == 3;
  }
  else
  {
    if ( *(_DWORD *)a1 != 1314275652 || !*(_BYTE *)(a1 + 1168) )
      goto LABEL_3;
    v2 = *(_DWORD *)(a1 + 1188) == 3;
  }
  if ( !v2 )
    goto LABEL_3;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char))(*(_QWORD *)(*(_QWORD *)(a1 + 896) + 8LL) + 24LL))(
    *(_QWORD *)(a1 + 896),
    *(unsigned int *)(a2 + 16),
    *(_QWORD *)(a2 + 24),
    a2,
    1);
}
