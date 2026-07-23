/*
 * XREFs of KeFindFirstSetRightGroupAffinity @ 0x1402F6E90
 * Callers:
 *     MiGetIdleProcessorCount @ 0x1402F675C (MiGetIdleProcessorCount.c)
 *     MiEvaluateProcessorGroups @ 0x1402F6AC4 (MiEvaluateProcessorGroups.c)
 *     MiEvaluateProcessor @ 0x1402F6CF4 (MiEvaluateProcessor.c)
 *     KiCallInterruptServiceRoutine @ 0x14032F7F0 (KiCallInterruptServiceRoutine.c)
 *     HalpTimerConfigureInterrupt @ 0x140583F1C (HalpTimerConfigureInterrupt.c)
 *     HalpIommuConfigureInterrupt @ 0x14058E40C (HalpIommuConfigureInterrupt.c)
 *     KiGetNextClockOwner @ 0x1405F0D04 (KiGetNextClockOwner.c)
 *     MiInitializeZeroEngineCurrentPassDpcAffinity @ 0x1407154F0 (MiInitializeZeroEngineCurrentPassDpcAffinity.c)
 *     MiWakeOnlyParticipatingProcessorsFromAssignedNode @ 0x14071591C (MiWakeOnlyParticipatingProcessorsFromAssignedNode.c)
 *     PpmRegisterPerfStates @ 0x1407D13F8 (PpmRegisterPerfStates.c)
 *     MiInitializeZeroingDomains @ 0x140885648 (MiInitializeZeroingDomains.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140D037E8 (MiComputeMemoryNodeProcessorAssignments.c)
 *     MiFindProcessorsForMemoryOnlyNode @ 0x140D03B74 (MiFindProcessorsForMemoryOnlyNode.c)
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
  return *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16
                                                                                         * *((unsigned __int16 *)v1 + 4)].Flink
         + (int)a1);
}
