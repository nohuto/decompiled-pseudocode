/*
 * XREFs of RaidAdapterPoFxIdleComponent @ 0x14002517C
 * Callers:
 *     RaidUnitFreeResources @ 0x140011CBC (RaidUnitFreeResources.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1400196B8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaUnitScsiMiniportIoctl @ 0x140019FE0 (RaUnitScsiMiniportIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x14001A8BC (RaidPnPPassToMiniPort.c)
 *     RaidUnitCompleteIrpRequest @ 0x140021CC0 (RaidUnitCompleteIrpRequest.c)
 *     RaUnitDecrementOutstandingIrpRequests @ 0x140022CA0 (RaUnitDecrementOutstandingIrpRequests.c)
 *     RaidUnitCompleteResetRequest @ 0x140024200 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitPoFxIdleComponentFromIoctl @ 0x1400250E0 (RaidUnitPoFxIdleComponentFromIoctl.c)
 *     StorPortUnitIdleState @ 0x14002C7E0 (StorPortUnitIdleState.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1400338AC (StorPortUnitPowerRequiredStep2.c)
 *     StorPortUnitPowerNotRequiredStep2 @ 0x140033AB0 (StorPortUnitPowerNotRequiredStep2.c)
 *     StorPortAdapterPoFxD0Completion @ 0x140046270 (StorPortAdapterPoFxD0Completion.c)
 *     RaidUnitPendingIrpDpcRoutine @ 0x140049A40 (RaidUnitPendingIrpDpcRoutine.c)
 *     StorPortUnitPoFxD3Completion @ 0x140051CE0 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPoFxD0Completion @ 0x14005B504 (StorPortUnitPoFxD0Completion.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x140067AD0 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140068000 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterStartDevice @ 0x140068EBC (RaidAdapterStartDevice.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x14007ECF0 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitEndMaintenanceTime @ 0x140080780 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x140080D20 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     StorPortAdapterDirectedPowerUpCompletion @ 0x1400819B0 (StorPortAdapterDirectedPowerUpCompletion.c)
 *     StorPortUnitDirectedPowerUpRequestD0 @ 0x1400823C8 (StorPortUnitDirectedPowerUpRequestD0.c)
 *     TcglibEalExecuteCommandSync @ 0x14008CF08 (TcglibEalExecuteCommandSync.c)
 *     StorGetNVMePollingInformation @ 0x140097348 (StorGetNVMePollingInformation.c)
 *     RaUnitStartResetIo @ 0x1400A2224 (RaUnitStartResetIo.c)
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400C0CD0 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 *     StorUnitExecuteNvmeSrbComplete @ 0x1400C5540 (StorUnitExecuteNvmeSrbComplete.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018470C (RaidAdapterDiagnosticIoctl.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1401B4F4C (RaUnitQueryCapabilitiesIrp.c)
 *     StorGetNVMeIdentifyInfo @ 0x1401B6194 (StorGetNVMeIdentifyInfo.c)
 *     RaWmiPassToMiniPort @ 0x1401B8A40 (RaWmiPassToMiniPort.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidAdapterPoFxIdleComponent(__int64 a1, __int64 a2, __int64 a3)
{
  PoFxIdleComponent(**(_QWORD **)(a1 + 5024), a2, a3);
  return (*(_DWORD *)(*(_QWORD *)(a1 + 5024) + 20LL) & 1) == 0;
}
