/*
 * XREFs of MiReturnCrossPartitionSectionCharges @ 0x1404CAB70
 * Callers:
 *     MiAddViewsForSection @ 0x1402C51E0 (MiAddViewsForSection.c)
 *     MiRestoreTransitionPte @ 0x1402DAFE0 (MiRestoreTransitionPte.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402EC1B0 (MiDereferenceControlAreaPfnList.c)
 *     MmUnmapViewInSystemCache @ 0x1403203B0 (MmUnmapViewInSystemCache.c)
 *     MiDeleteTransitionPte @ 0x140340870 (MiDeleteTransitionPte.c)
 *     MiRemoveMappedPtes @ 0x140341C78 (MiRemoveMappedPtes.c)
 *     MiRemoveSystemCacheReferences @ 0x14036F210 (MiRemoveSystemCacheReferences.c)
 *     MiFlushRelease @ 0x14036F2C0 (MiFlushRelease.c)
 *     MiCheckControlArea @ 0x14036FA60 (MiCheckControlArea.c)
 *     MmPurgeSection @ 0x14039E9D4 (MmPurgeSection.c)
 *     MiReferenceActiveSubsection @ 0x140454670 (MiReferenceActiveSubsection.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140458404 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDecrementSubsection @ 0x14046D4A0 (MiDecrementSubsection.c)
 *     MiDeleteControlArea @ 0x140481D20 (MiDeleteControlArea.c)
 *     MiCreatePrototypePtes @ 0x14048DBBC (MiCreatePrototypePtes.c)
 *     MiReleaseFaultCharges @ 0x1404A5730 (MiReleaseFaultCharges.c)
 *     MiFlushSection @ 0x1404A70A8 (MiFlushSection.c)
 *     MiAppendSubsectionChain @ 0x1404C17E8 (MiAppendSubsectionChain.c)
 *     MiUpControlAreaRefs @ 0x1404D7C38 (MiUpControlAreaRefs.c)
 *     MiUpdateLastSubsectionSize @ 0x1404D8198 (MiUpdateLastSubsectionSize.c)
 *     MiCleanSection @ 0x1404D9074 (MiCleanSection.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1404FAD0C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x14050012C (MiSetDeleteOnClose.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1406EC344 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiUpdateActiveSubsection @ 0x1406FCE68 (MiUpdateActiveSubsection.c)
 *     MiDeleteExtendSubsections @ 0x14077B9E0 (MiDeleteExtendSubsections.c)
 *     MiChargeSubsectionProtos @ 0x14087127C (MiChargeSubsectionProtos.c)
 *     MiChargeSegmentCommit @ 0x14099AB90 (MiChargeSegmentCommit.c)
 *     MiSegmentDelete @ 0x140A8752C (MiSegmentDelete.c)
 * Callees:
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x14036FF88 (MiReturnCrossPartitionCharges.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 */

void __fastcall MiReturnCrossPartitionSectionCharges(__int64 a1, int a2, unsigned __int64 a3)
{
  char v4; // si

  v4 = a2;
  if ( a2 )
    MiReturnCommit(a1, a3, 0);
  MiReturnResident(a1, a3);
  MiReturnCrossPartitionCharges(a1, 0, v4, a3);
}
