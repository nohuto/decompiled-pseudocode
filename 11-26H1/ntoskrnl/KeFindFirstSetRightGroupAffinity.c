/*
 * XREFs of KeFindFirstSetRightGroupAffinity @ 0x1403E9FB0
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14032D7C0 (KiCallInterruptServiceRoutine.c)
 *     MiGetIdleProcessorCount @ 0x1403E987C (MiGetIdleProcessorCount.c)
 *     MiEvaluateProcessorGroups @ 0x1403E9BE4 (MiEvaluateProcessorGroups.c)
 *     MiEvaluateProcessor @ 0x1403E9E14 (MiEvaluateProcessor.c)
 *     HalpTimerConfigureInterrupt @ 0x1405819FC (HalpTimerConfigureInterrupt.c)
 *     HalpIommuConfigureInterrupt @ 0x14058BC8C (HalpIommuConfigureInterrupt.c)
 *     KiGetNextClockOwner @ 0x1405EE394 (KiGetNextClockOwner.c)
 *     MiInitializeZeroEngineCurrentPassDpcAffinity @ 0x1407107F4 (MiInitializeZeroEngineCurrentPassDpcAffinity.c)
 *     MiWakeOnlyParticipatingProcessorsFromAssignedNode @ 0x140710C20 (MiWakeOnlyParticipatingProcessorsFromAssignedNode.c)
 *     PpmRegisterPerfStates @ 0x1407CE358 (PpmRegisterPerfStates.c)
 *     MiInitializeZeroingDomains @ 0x14087F248 (MiInitializeZeroingDomains.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140CFD468 (MiComputeMemoryNodeProcessorAssignments.c)
 *     MiFindProcessorsForMemoryOnlyNode @ 0x140CFD7F4 (MiFindProcessorsForMemoryOnlyNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetRightGroupAffinity(unsigned __int64 *a1)
{
  unsigned __int64 *v1; // rdx

  v1 = a1;
  if ( !*a1 )
    return 0xFFFFFFFFLL;
  _BitScanForward64((unsigned __int64 *)&a1, *a1);
  return *((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
         + 64 * *((unsigned __int16 *)v1 + 4)
         + (int)a1);
}
