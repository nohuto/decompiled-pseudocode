/*
 * XREFs of KeQueryPriorityThread @ 0x1402052D0
 * Callers:
 *     MiSetIdealProcessorThread @ 0x14020445C (MiSetIdealProcessorThread.c)
 *     ?SmStUpdateMemoryCondition@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x140204B58 (-SmStUpdateMemoryCondition@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z.c)
 *     LZNT1DecompressChunkNewThread @ 0x140204F68 (LZNT1DecompressChunkNewThread.c)
 *     FsRtlpWaitForIoAtEof @ 0x140205058 (FsRtlpWaitForIoAtEof.c)
 *     PoNotifyMediaBuffering @ 0x140205240 (PoNotifyMediaBuffering.c)
 *     MiReplenishSlabAllocator @ 0x14020607C (MiReplenishSlabAllocator.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020BDCC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x140281140 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140281860 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     MiModifiedPageWriter @ 0x1404064D0 (MiModifiedPageWriter.c)
 *     MiLaunchChildWorkers @ 0x1405172B8 (MiLaunchChildWorkers.c)
 *     MiPreUnlockWorkingSetShared @ 0x14052FB44 (MiPreUnlockWorkingSetShared.c)
 *     ?PspQueryWobTicketPriority@@YAJPEAXDKPEAK@Z @ 0x1407FF740 (-PspQueryWobTicketPriority@@YAJPEAXDKPEAK@Z.c)
 *     PfSnPrefetchSections @ 0x140A4FBD4 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x140A4FF7C (PfSnPrefetchSectionsCleanup.c)
 *     PfSnPrefetchScenario @ 0x140AE0674 (PfSnPrefetchScenario.c)
 *     MiInSwapStore @ 0x140AE9990 (MiInSwapStore.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140C30470 (ViPendingQueuePassiveLevelCompletion.c)
 * Callees:
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x1404F9024 (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 */

KPRIORITY __stdcall KeQueryPriorityThread(PKTHREAD Thread)
{
  if ( Thread->Process == (_KPROCESS *)&unk_140FC8F40 )
    return 1;
  if ( (*((_DWORD *)&Thread->0 + 1) & 0x400000) != 0 )
    KiUpdateVpBackingThreadPriorityOnPriorityQuery(Thread);
  return Thread->Priority;
}
