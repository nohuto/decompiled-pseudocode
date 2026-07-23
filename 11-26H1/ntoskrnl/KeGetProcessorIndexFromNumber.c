/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x14021AC70
 * Callers:
 *     KeSetIdealProcessorThreadByNumber @ 0x140202C34 (KeSetIdealProcessorThreadByNumber.c)
 *     KeSetTargetProcessorDpc @ 0x140218EC0 (KeSetTargetProcessorDpc.c)
 *     PoGetIdleTimes @ 0x14021A3C0 (PoGetIdleTimes.c)
 *     KeSetTargetProcessorDpcEx @ 0x14021AC20 (KeSetTargetProcessorDpcEx.c)
 *     KeMaskInterrupt @ 0x140431A20 (KeMaskInterrupt.c)
 *     HalpInterruptDestinationToTarget @ 0x140434F10 (HalpInterruptDestinationToTarget.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1404762E8 (PoGetPerfStateAndParkingInfo.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1404D3BB0 (KeQueryLogicalProcessorRelationship.c)
 *     PpmSetSimulatedIdle @ 0x1405004B8 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedIdle @ 0x140501B20 (PpmClearSimulatedIdle.c)
 *     HalSendNMI @ 0x140581470 (HalSendNMI.c)
 *     HalpInterruptDpReplaceBegin @ 0x14059C39C (HalpInterruptDpReplaceBegin.c)
 *     IntPartGetProcessorEfficiencyClass @ 0x1405F5F10 (IntPartGetProcessorEfficiencyClass.c)
 *     PpmUpdateProcessorIdleVeto @ 0x140606310 (PpmUpdateProcessorIdleVeto.c)
 *     PspBuildCreateProcessContext @ 0x140A79424 (PspBuildCreateProcessContext.c)
 *     IopConnectInterrupt @ 0x140A9CA10 (IopConnectInterrupt.c)
 *     PpmInstallPlatformIdleStates @ 0x140AF57C0 (PpmInstallPlatformIdleStates.c)
 *     PpmUpdateIdleStates @ 0x140B00820 (PpmUpdateIdleStates.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 *     PpmSetSimulatedLoad @ 0x140B5B35C (PpmSetSimulatedLoad.c)
 *     PpmClearSimulatedLoad @ 0x140B5D3E8 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x140B67AAC (PpmPerfGetBrandedFrequency.c)
 *     HalpInterruptReinitialize @ 0x140BF0368 (HalpInterruptReinitialize.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x140BF4A8C (HalpInterruptUpdateLocalUnitIdentifier.c)
 *     PopReadSimulatedProcessorDetail @ 0x140CDA288 (PopReadSimulatedProcessorDetail.c)
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
  result = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * Group].Flink + Number);
  if ( !result )
    return -1;
  return result;
}
