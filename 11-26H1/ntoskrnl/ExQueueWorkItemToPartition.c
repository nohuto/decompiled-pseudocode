/*
 * XREFs of ExQueueWorkItemToPartition @ 0x140384E80
 * Callers:
 *     MiCheckTrimUnusedPageFileRegions @ 0x1402074A8 (MiCheckTrimUnusedPageFileRegions.c)
 *     MiWakeLargePageRebuild @ 0x140259E64 (MiWakeLargePageRebuild.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14027F390 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     MiAsyncSlabReplenish @ 0x1402A4ED4 (MiAsyncSlabReplenish.c)
 *     MiScanPagefiles @ 0x1402A72EC (MiScanPagefiles.c)
 *     CcPostWorkQueueCachemapUninit @ 0x140384FA0 (CcPostWorkQueueCachemapUninit.c)
 *     CcWriteBehind @ 0x14038513C (CcWriteBehind.c)
 *     CcPostWorkQueueRegular @ 0x1403881CC (CcPostWorkQueueRegular.c)
 *     CcWorkerThread @ 0x140388380 (CcWorkerThread.c)
 *     CcPostWorkQueueAsyncRead @ 0x140389A38 (CcPostWorkQueueAsyncRead.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x140389E24 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcAsyncReadWorker @ 0x14038A130 (CcAsyncReadWorker.c)
 *     CcIncrementWriteBehindPriority @ 0x14038B454 (CcIncrementWriteBehindPriority.c)
 *     CcPostPVCMForDeleteToPartition @ 0x14039EC94 (CcPostPVCMForDeleteToPartition.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x1404886EC (SmKmStoreDeleteWhenEmpty.c)
 *     MiCheckZeroFreeRebalance @ 0x14049AF4C (MiCheckZeroFreeRebalance.c)
 *     MmInSwapWorkingSet @ 0x1404CF090 (MmInSwapWorkingSet.c)
 *     SmQueueExWorkItem @ 0x1404DFE54 (SmQueueExWorkItem.c)
 *     CcPostWorkQueueSpecial @ 0x1404E8124 (CcPostWorkQueueSpecial.c)
 *     MiLaunchChildWorkers @ 0x140510D28 (MiLaunchChildWorkers.c)
 *     CcReEngageWorkerThreads @ 0x14052DD54 (CcReEngageWorkerThreads.c)
 *     CcPVCMDelayedDeleteTimerDpc @ 0x1405B4950 (CcPVCMDelayedDeleteTimerDpc.c)
 *     MmSetAccessLogging @ 0x140707EF0 (MmSetAccessLogging.c)
 *     MmScrubMemory @ 0x1408843D4 (MmScrubMemory.c)
 *     MiInSwapStore @ 0x140AEC480 (MiInSwapStore.c)
 *     SmStoreCompressionStop @ 0x140AEC924 (SmStoreCompressionStop.c)
 *     MiContractWsSwapPageFile @ 0x140AF687C (MiContractWsSwapPageFile.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x140383B24 (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x140384F80 (ExpTypeToPriority.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
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
