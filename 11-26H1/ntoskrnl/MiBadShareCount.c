/*
 * XREFs of MiBadShareCount @ 0x1402DC710
 * Callers:
 *     MiMakePageAvoidRead @ 0x140282DC0 (MiMakePageAvoidRead.c)
 *     MiCreateSharedZeroPages @ 0x140283980 (MiCreateSharedZeroPages.c)
 *     MiReduceShareCount @ 0x1402DAC20 (MiReduceShareCount.c)
 *     MiDecommitPrivatePageTail @ 0x1402DB300 (MiDecommitPrivatePageTail.c)
 *     MiDecommitSharedPageTail @ 0x1402DBF60 (MiDecommitSharedPageTail.c)
 *     MiRestoreTransitionPte @ 0x1402F8F60 (MiRestoreTransitionPte.c)
 *     MiFreeDeferredCrcPages @ 0x140307800 (MiFreeDeferredCrcPages.c)
 *     MiCombineWithExisting @ 0x140308244 (MiCombineWithExisting.c)
 *     MmFreeIndependentPages @ 0x140308D40 (MmFreeIndependentPages.c)
 *     MiLockAndDecrementShareCount @ 0x1403091DC (MiLockAndDecrementShareCount.c)
 *     MiDuplicateCloneLeaf @ 0x14030D374 (MiDuplicateCloneLeaf.c)
 *     MiTrimSystemImagePages @ 0x14030F0A4 (MiTrimSystemImagePages.c)
 *     MiWsleFree @ 0x140319990 (MiWsleFree.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x14031B000 (MiRewriteTrimPteAsDemandZero.c)
 *     MiAddPageToInsertList @ 0x14031EF60 (MiAddPageToInsertList.c)
 *     MiDeleteTransitionPte @ 0x14033E7F0 (MiDeleteTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033F350 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiFreeUnmappedPageTables @ 0x1403631D0 (MiFreeUnmappedPageTables.c)
 *     MiOutPageSingleKernelStack @ 0x140368960 (MiOutPageSingleKernelStack.c)
 *     MiCopyOnWriteUpdatePte @ 0x14036B2E0 (MiCopyOnWriteUpdatePte.c)
 *     MiFreeContiguousPages @ 0x1403C3858 (MiFreeContiguousPages.c)
 *     MiDeleteClusterPage @ 0x1403C6268 (MiDeleteClusterPage.c)
 *     MiDeleteTopLevelPage @ 0x1404840DC (MiDeleteTopLevelPage.c)
 *     MmOutSwapProcess @ 0x14049A5C8 (MmOutSwapProcess.c)
 *     MiFinishLastForkPageTable @ 0x1404D069C (MiFinishLastForkPageTable.c)
 *     MiRevertPrivateZeroFault @ 0x1404F4214 (MiRevertPrivateZeroFault.c)
 *     MiDecrementLargeSubsections @ 0x140505D08 (MiDecrementLargeSubsections.c)
 *     MiClearDriverTablePtes @ 0x140505FE8 (MiClearDriverTablePtes.c)
 *     MiDecrementProtoShareCounts @ 0x1406F9544 (MiDecrementProtoShareCounts.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140CFA144 (MmInitializeImageViewExtensionCfg.c)
 *     MiTradeBootImagePage @ 0x140D00E4C (MiTradeBootImagePage.c)
 *     MiInsertRegistryPageInModifiedList @ 0x140D04294 (MiInsertRegistryPageInModifiedList.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MiBadShareCount(__int64 a1)
{
  KeBugCheckEx(
    0x4Eu,
    0x99uLL,
    (a1 + 0x220000000000LL) / 48,
    *(_BYTE *)(a1 + 34) & 7,
    *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
}
