/*
 * XREFs of RaidAdapterPoFxActivateComponent @ 0x14003DA54
 * Callers:
 *     StorUnitExecuteNvmeSrb @ 0x1400034B4 (StorUnitExecuteNvmeSrb.c)
 *     RaUnitScsiMiniportIoctl @ 0x140019FE0 (RaUnitScsiMiniportIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x14001A8BC (RaidPnPPassToMiniPort.c)
 *     RaidCreateUnit @ 0x14002D474 (RaidCreateUnit.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1400338AC (StorPortUnitPowerRequiredStep2.c)
 *     RaidUnitSetDevicePowerIrp @ 0x14003D4FC (RaidUnitSetDevicePowerIrp.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x140067AD0 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140068000 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortAdapterPoFxWaitWakeCompletion @ 0x140081BA0 (StorPortAdapterPoFxWaitWakeCompletion.c)
 *     TcglibEalExecuteCommandSync @ 0x14008CF08 (TcglibEalExecuteCommandSync.c)
 *     StorGetNVMePollingInformation @ 0x140097348 (StorGetNVMePollingInformation.c)
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400C0CD0 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018470C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterStopDeviceIrp @ 0x1401862D0 (RaidAdapterStopDeviceIrp.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1401B4F4C (RaUnitQueryCapabilitiesIrp.c)
 *     RaWmiPassToMiniPort @ 0x1401B8A40 (RaWmiPassToMiniPort.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidAdapterPoFxActivateComponent(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (*(_BYTE *)(a1 + 108) & 1) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5344));
    if ( (*(_BYTE *)(a1 + 108) & 2) != 0 )
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5352));
  }
  if ( *(_DWORD *)(a1 + 92) && (a3 & 1) != 0 )
    a3 = (unsigned int)a3 | 4;
  PoFxActivateComponent(**(_QWORD **)(a1 + 5024), a2, a3);
  return *(_DWORD *)(*(_QWORD *)(a1 + 5024) + 20LL) & 1;
}
