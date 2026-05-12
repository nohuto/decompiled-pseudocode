/*
 * XREFs of RaidAdapterPoFxIdleComponentFromMiniport @ 0x140001080
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140012104 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidPnPPassToMiniPort @ 0x14001A8BC (RaidPnPPassToMiniPort.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001BC80 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidpAdapterRedirectDpcRoutine @ 0x14002AAB0 (RaidpAdapterRedirectDpcRoutine.c)
 *     RaidAdapterRequestDirectComplete @ 0x14002E1A8 (RaidAdapterRequestDirectComplete.c)
 *     RaidpAdapterDpcRoutine @ 0x14002FA70 (RaidpAdapterDpcRoutine.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x140067AD0 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140068000 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     TcglibEalExecuteCommandSync @ 0x14008CF08 (TcglibEalExecuteCommandSync.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1400937C4 (RaidCompleteMiniportRequestCallback.c)
 *     StorGetNVMePollingInformation @ 0x140097348 (StorGetNVMePollingInformation.c)
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400C0CD0 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 *     StorUnitExecuteNvmeSrbComplete @ 0x1400C5540 (StorUnitExecuteNvmeSrbComplete.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018470C (RaidAdapterDiagnosticIoctl.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 *     StorGetNVMeIdentifyInfo @ 0x1401B6194 (StorGetNVMeIdentifyInfo.c)
 *     RaWmiPassToMiniPort @ 0x1401B8A40 (RaWmiPassToMiniPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterPoFxIdleComponentFromMiniport(__int64 a1, __int64 a2)
{
  int v3; // edx

  PoFxIdleComponent(**(_QWORD **)(a1 + 5024), a2, 0LL);
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 5024) + 20LL);
  _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 5024) + 80LL));
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 5024) + 96LL));
  return (v3 & 1) != 0 ? 0xC100000C : 0;
}
