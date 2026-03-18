/*
 * XREFs of ExQueueWorkItemToPartition @ 0x1403830D0
 * Callers:
 *     MiCheckTrimUnusedPageFileRegions @ 0x1402073C8 (MiCheckTrimUnusedPageFileRegions.c)
 *     MiWakeLargePageRebuild @ 0x140258684 (MiWakeLargePageRebuild.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14027FE20 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     MiAsyncSlabReplenish @ 0x1402A5984 (MiAsyncSlabReplenish.c)
 *     MiScanPagefiles @ 0x1402A7EDC (MiScanPagefiles.c)
 *     CcPostWorkQueueCachemapUninit @ 0x1403831F0 (CcPostWorkQueueCachemapUninit.c)
 *     CcWriteBehind @ 0x14038338C (CcWriteBehind.c)
 *     CcPostWorkQueueRegular @ 0x14038641C (CcPostWorkQueueRegular.c)
 *     CcWorkerThread @ 0x1403865D0 (CcWorkerThread.c)
 *     CcPostWorkQueueAsyncRead @ 0x140387C88 (CcPostWorkQueueAsyncRead.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x140388074 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcAsyncReadWorker @ 0x140388380 (CcAsyncReadWorker.c)
 *     CcIncrementWriteBehindPriority @ 0x1403896A4 (CcIncrementWriteBehindPriority.c)
 *     CcPostPVCMForDeleteToPartition @ 0x14039CF34 (CcPostPVCMForDeleteToPartition.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14048EBAC (SmKmStoreDeleteWhenEmpty.c)
 *     MiCheckZeroFreeRebalance @ 0x1404A141C (MiCheckZeroFreeRebalance.c)
 *     MmInSwapWorkingSet @ 0x1404D58CC (MmInSwapWorkingSet.c)
 *     SmQueueExWorkItem @ 0x1404E69B4 (SmQueueExWorkItem.c)
 *     CcPostWorkQueueSpecial @ 0x1404EEB44 (CcPostWorkQueueSpecial.c)
 *     MiLaunchChildWorkers @ 0x1405172B8 (MiLaunchChildWorkers.c)
 *     CcReEngageWorkerThreads @ 0x14052B834 (CcReEngageWorkerThreads.c)
 *     CcPVCMDelayedDeleteTimerDpc @ 0x1405B2140 (CcPVCMDelayedDeleteTimerDpc.c)
 *     MmSetAccessLogging @ 0x140703220 (MmSetAccessLogging.c)
 *     MmScrubMemory @ 0x14087DFD4 (MmScrubMemory.c)
 *     MiInSwapStore @ 0x140AE9990 (MiInSwapStore.c)
 *     SmStoreCompressionStop @ 0x140AE9E34 (SmStoreCompressionStop.c)
 *     MiContractWsSwapPageFile @ 0x140AF3E5C (MiContractWsSwapPageFile.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x140381D74 (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1403831D0 (ExpTypeToPriority.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

char __fastcall ExQueueWorkItemToPartition(_QWORD *BugCheckParameter2, int a2, unsigned int a3)
{
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG_PTR v5; // rdi
  ULONG_PTR v6; // r9
  int v7; // eax
  __int64 v8; // r10
  char result; // al

  BugCheckParameter4 = a3;
  v5 = a2;
  if ( *BugCheckParameter2 )
    KeBugCheckEx(0xE4u, 1uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  if ( (unsigned int)(a2 - 7) <= 0x18 || a2 >= 64 )
    KeBugCheckEx(0xE4u, 6uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  v6 = BugCheckParameter2[2];
  if ( v6 < 0xFFFF800000000000uLL )
    KeBugCheckEx(0xE4u, 7uLL, (ULONG_PTR)BugCheckParameter2, v6, 0LL);
  v7 = ExpTypeToPriority((unsigned int)a2);
  result = ExpQueueWorkItem(*(_QWORD *)(v8 + 16), (__int64)BugCheckParameter2, v7, BugCheckParameter4, 0);
  if ( !result )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)BugCheckParameter2, v5, BugCheckParameter4);
  return result;
}
