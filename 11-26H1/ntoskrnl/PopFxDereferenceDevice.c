/*
 * XREFs of PopFxDereferenceDevice @ 0x1403B61F4
 * Callers:
 *     PopFxAllocatePowerIrp @ 0x14021A098 (PopFxAllocatePowerIrp.c)
 *     PopAllocateIrp @ 0x14026F82C (PopAllocateIrp.c)
 *     PopRequestPowerIrp @ 0x14026FDC4 (PopRequestPowerIrp.c)
 *     PopFxProcessWork @ 0x1403AEEC0 (PopFxProcessWork.c)
 *     PopRequestCompletion @ 0x1403B45B0 (PopRequestCompletion.c)
 *     PopFxReleasePowerIrp @ 0x1403B60D8 (PopFxReleasePowerIrp.c)
 *     PopFxPlatformIdleVeto @ 0x1403B62F0 (PopFxPlatformIdleVeto.c)
 *     PoFxPowerControl @ 0x1403B7120 (PoFxPowerControl.c)
 *     PoFxNotifySurprisePowerOn @ 0x1403B7410 (PoFxNotifySurprisePowerOn.c)
 *     PopFxDirectedPowerTransitionWorker @ 0x1403B77F0 (PopFxDirectedPowerTransitionWorker.c)
 *     PopFxActivateDevice @ 0x1404D5290 (PopFxActivateDevice.c)
 *     PopFxClearDeviceConstraints @ 0x1404E2030 (PopFxClearDeviceConstraints.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x140504790 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopFxDeviceWork @ 0x1405054E0 (PopFxDeviceWork.c)
 *     PoFxAddComponentRelation @ 0x140603F90 (PoFxAddComponentRelation.c)
 *     PoFxAddDeviceRelation @ 0x140604200 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveComponentRelation @ 0x140604610 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140604860 (PoFxRemoveDeviceRelation.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x140604AB8 (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxComponentPerfWork @ 0x140604C50 (PopFxComponentPerfWork.c)
 *     PopFxProcessorIdleVeto @ 0x140605430 (PopFxProcessorIdleVeto.c)
 *     PopFxUpdatePlatformIdleState @ 0x140605C40 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x140605D30 (PopFxUpdateProcessorIdleState.c)
 *     PopPepPlatformStateRegistered @ 0x140611864 (PopPepPlatformStateRegistered.c)
 *     PopDripsWatchdogTakeAction @ 0x14061388C (PopDripsWatchdogTakeAction.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x140B0DD00 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x140B3FE28 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopFxUpdateVetoMaskWork @ 0x140B40080 (PopFxUpdateVetoMaskWork.c)
 *     PopFxRegisterDevice @ 0x140B4F9A0 (PopFxRegisterDevice.c)
 *     PopSystemIrpCompletion @ 0x140C0DBB0 (PopSystemIrpCompletion.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
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
