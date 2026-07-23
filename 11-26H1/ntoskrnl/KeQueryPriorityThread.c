/*
 * XREFs of KeQueryPriorityThread @ 0x1402053B0
 * Callers:
 *     MiSetIdealProcessorThread @ 0x14020453C (MiSetIdealProcessorThread.c)
 *     ?SmStUpdateMemoryCondition@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x140204C38 (-SmStUpdateMemoryCondition@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z.c)
 *     LZNT1DecompressChunkNewThread @ 0x140205048 (LZNT1DecompressChunkNewThread.c)
 *     FsRtlpWaitForIoAtEof @ 0x140205138 (FsRtlpWaitForIoAtEof.c)
 *     PoNotifyMediaBuffering @ 0x140205320 (PoNotifyMediaBuffering.c)
 *     MiReplenishSlabAllocator @ 0x14020615C (MiReplenishSlabAllocator.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020BEAC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1402806B0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140280DD0 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     MiModifiedPageWriter @ 0x1403FF5C0 (MiModifiedPageWriter.c)
 *     MiLaunchChildWorkers @ 0x140510D28 (MiLaunchChildWorkers.c)
 *     MiPreUnlockWorkingSetShared @ 0x140532044 (MiPreUnlockWorkingSetShared.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1406CB674 (EtwpTraceThreadRundownWithStack.c)
 *     ?PspQueryWobTicketPriority@@YAJPEAXDKPEAK@Z @ 0x140805170 (-PspQueryWobTicketPriority@@YAJPEAXDKPEAK@Z.c)
 *     PfSnPrefetchScenario @ 0x1409CFF44 (PfSnPrefetchScenario.c)
 *     PfSnPrefetchSections @ 0x140A58EC4 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x140A5926C (PfSnPrefetchSectionsCleanup.c)
 *     MiInSwapStore @ 0x140AEC480 (MiInSwapStore.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140C36480 (ViPendingQueuePassiveLevelCompletion.c)
 * Callees:
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x1404F2634 (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 */

KPRIORITY __stdcall KeQueryPriorityThread(PKTHREAD Thread)
{
  if ( Thread->Process == (_KPROCESS *)&unk_140FC9F40 )
    return 1;
  if ( (*((_DWORD *)&Thread->0 + 1) & 0x400000) != 0 )
    KiUpdateVpBackingThreadPriorityOnPriorityQuery(Thread);
  return Thread->Priority;
}
