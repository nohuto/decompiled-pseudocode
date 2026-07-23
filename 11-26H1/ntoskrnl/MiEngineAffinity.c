/*
 * XREFs of MiEngineAffinity @ 0x1402F6724
 * Callers:
 *     MiFindReductionContendingThread @ 0x1402F5EDC (MiFindReductionContendingThread.c)
 *     MiFindBestZeroingProcessor @ 0x1402F6038 (MiFindBestZeroingProcessor.c)
 *     MiMoveZeroThreadsToOtherCores @ 0x1402F6570 (MiMoveZeroThreadsToOtherCores.c)
 *     MiInsertNewZeroThread @ 0x14050FC38 (MiInsertNewZeroThread.c)
 *     MiReduceZeroingThreads @ 0x1405211AC (MiReduceZeroingThreads.c)
 *     MiInitializeZeroEngineCurrentPassDpcAffinity @ 0x1407154F0 (MiInitializeZeroEngineCurrentPassDpcAffinity.c)
 *     MiWakeOnlyParticipatingProcessorsFromAssignedNode @ 0x14071591C (MiWakeOnlyParticipatingProcessorsFromAssignedNode.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiEngineAffinity(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 39) )
    return &qword_140E2D818;
  else
    return *(__int64 **)(384LL * *(unsigned int *)(*(_QWORD *)(a1 + 136) + 56LL) + qword_140E2D838 + 376);
}
