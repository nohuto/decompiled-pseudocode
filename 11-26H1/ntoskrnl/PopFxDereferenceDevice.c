/*
 * XREFs of PopFxDereferenceDevice @ 0x1403C00F4
 * Callers:
 *     PopFxAllocatePowerIrp @ 0x14021BA28 (PopFxAllocatePowerIrp.c)
 *     PopAllocateIrp @ 0x14026ED9C (PopAllocateIrp.c)
 *     PopRequestPowerIrp @ 0x14026F334 (PopRequestPowerIrp.c)
 *     PopFxProcessWork @ 0x1403B8BD0 (PopFxProcessWork.c)
 *     PopRequestCompletion @ 0x1403BE4B0 (PopRequestCompletion.c)
 *     PopFxReleasePowerIrp @ 0x1403BFFD8 (PopFxReleasePowerIrp.c)
 *     PopFxPlatformIdleVeto @ 0x1403C01F0 (PopFxPlatformIdleVeto.c)
 *     PoFxPowerControl @ 0x1403C1020 (PoFxPowerControl.c)
 *     PoFxNotifySurprisePowerOn @ 0x1403C1310 (PoFxNotifySurprisePowerOn.c)
 *     PopFxDirectedPowerTransitionWorker @ 0x1403C16F0 (PopFxDirectedPowerTransitionWorker.c)
 *     PopFxActivateDevice @ 0x1404CEB00 (PopFxActivateDevice.c)
 *     PopFxClearDeviceConstraints @ 0x1404DB710 (PopFxClearDeviceConstraints.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1404FE0D4 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopFxDeviceWork @ 0x1404FEE20 (PopFxDeviceWork.c)
 *     PoFxAddComponentRelation @ 0x140606A90 (PoFxAddComponentRelation.c)
 *     PoFxAddDeviceRelation @ 0x140606D00 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveComponentRelation @ 0x140607110 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140607360 (PoFxRemoveDeviceRelation.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1406075B8 (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxComponentPerfWork @ 0x140607750 (PopFxComponentPerfWork.c)
 *     PopFxProcessorIdleVeto @ 0x140607F30 (PopFxProcessorIdleVeto.c)
 *     PopFxUpdatePlatformIdleState @ 0x140608740 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x140608830 (PopFxUpdateProcessorIdleState.c)
 *     PopPepPlatformStateRegistered @ 0x1406146A4 (PopPepPlatformStateRegistered.c)
 *     PopDripsWatchdogTakeAction @ 0x14061674C (PopDripsWatchdogTakeAction.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x140B0F450 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x140B41E58 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopFxUpdateVetoMaskWork @ 0x140B420B0 (PopFxUpdateVetoMaskWork.c)
 *     PopFxRegisterDevice @ 0x140B52230 (PopFxRegisterDevice.c)
 *     PopSystemIrpCompletion @ 0x140C13DC0 (PopSystemIrpCompletion.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

LONG __fastcall PopFxDereferenceDevice(__int64 a1, int a2)
{
  LONG result; // eax

  _InterlockedDecrement((volatile signed __int32 *)(a1 + 4LL * a2 + 272));
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 244), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 248), 0, 0);
  return result;
}
