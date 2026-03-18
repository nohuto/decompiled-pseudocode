/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x140428990
 * Callers:
 *     KeMaskInterrupt @ 0x140424930 (KeMaskInterrupt.c)
 *     HalpInterruptDestinationToTarget @ 0x140427E00 (HalpInterruptDestinationToTarget.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140427F74 (KeSetIdealProcessorThreadByNumber.c)
 *     KeSetTargetProcessorDpc @ 0x140428000 (KeSetTargetProcessorDpc.c)
 *     PoGetIdleTimes @ 0x1404280E0 (PoGetIdleTimes.c)
 *     KeSetTargetProcessorDpcEx @ 0x140428940 (KeSetTargetProcessorDpcEx.c)
 *     PpmSetSimulatedIdle @ 0x14042A28C (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedIdle @ 0x14042A3B8 (PpmClearSimulatedIdle.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14047C978 (PoGetPerfStateAndParkingInfo.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1404DA4D0 (KeQueryLogicalProcessorRelationship.c)
 *     HalSendNMI @ 0x14057EF50 (HalSendNMI.c)
 *     HalpInterruptDpReplaceBegin @ 0x140599C1C (HalpInterruptDpReplaceBegin.c)
 *     IntPartGetProcessorEfficiencyClass @ 0x1405F3550 (IntPartGetProcessorEfficiencyClass.c)
 *     PpmUpdateProcessorIdleVeto @ 0x140603860 (PpmUpdateProcessorIdleVeto.c)
 *     PspBuildCreateProcessContext @ 0x140A00BC4 (PspBuildCreateProcessContext.c)
 *     IopConnectInterrupt @ 0x140A98890 (IopConnectInterrupt.c)
 *     PpmInstallPlatformIdleStates @ 0x140AF2FD0 (PpmInstallPlatformIdleStates.c)
 *     PpmUpdateIdleStates @ 0x140AFE7B0 (PpmUpdateIdleStates.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 *     PpmSetSimulatedLoad @ 0x140B5853C (PpmSetSimulatedLoad.c)
 *     PpmClearSimulatedLoad @ 0x140B5A0CC (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x140B64A0C (PpmPerfGetBrandedFrequency.c)
 *     HalpInterruptReinitialize @ 0x140BEA368 (HalpInterruptReinitialize.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x140BEEA8C (HalpInterruptUpdateLocalUnitIdentifier.c)
 *     PopReadSimulatedProcessorDetail @ 0x140CD40E8 (PopReadSimulatedProcessorDetail.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeGetProcessorIndexFromNumber(PPROCESSOR_NUMBER ProcNumber)
{
  __int64 Group; // rax
  __int64 Number; // rdx
  ULONG result; // eax

  if ( ProcNumber->Reserved )
    return -1;
  Group = ProcNumber->Group;
  if ( !(_WORD)Group && !ProcNumber->Number )
    return 0;
  if ( (unsigned __int16)Group >= (unsigned __int16)KiActiveGroups )
    return -1;
  Number = ProcNumber->Number;
  if ( (unsigned __int8)Number >= 0x40u )
    return -1;
  result = *((_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock + 64 * Group + Number);
  if ( !result )
    return -1;
  return result;
}
