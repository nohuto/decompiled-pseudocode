/*
 * XREFs of MiEngineAffinity @ 0x1403E9844
 * Callers:
 *     MiFindReductionContendingThread @ 0x1403E8FFC (MiFindReductionContendingThread.c)
 *     MiFindBestZeroingProcessor @ 0x1403E9158 (MiFindBestZeroingProcessor.c)
 *     MiMoveZeroThreadsToOtherCores @ 0x1403E9690 (MiMoveZeroThreadsToOtherCores.c)
 *     MiInsertNewZeroThread @ 0x1405161C8 (MiInsertNewZeroThread.c)
 *     MiReduceZeroingThreads @ 0x14051EB08 (MiReduceZeroingThreads.c)
 *     MiInitializeZeroEngineCurrentPassDpcAffinity @ 0x1407107F4 (MiInitializeZeroEngineCurrentPassDpcAffinity.c)
 *     MiWakeOnlyParticipatingProcessorsFromAssignedNode @ 0x140710C20 (MiWakeOnlyParticipatingProcessorsFromAssignedNode.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiEngineAffinity(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 39) )
    return &qword_140E2D698;
  else
    return *(__int64 **)(384LL * *(unsigned int *)(*(_QWORD *)(a1 + 136) + 56LL) + qword_140E2D6B8 + 376);
}
