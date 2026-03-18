/*
 * XREFs of MiReturnCrossPartitionSectionCharges @ 0x1404D1140
 * Callers:
 *     MiAddViewsForSection @ 0x1402E31A0 (MiAddViewsForSection.c)
 *     MiRestoreTransitionPte @ 0x1402F8F60 (MiRestoreTransitionPte.c)
 *     MiDereferenceControlAreaPfnList @ 0x14030A130 (MiDereferenceControlAreaPfnList.c)
 *     MmUnmapViewInSystemCache @ 0x14031E380 (MmUnmapViewInSystemCache.c)
 *     MiDeleteTransitionPte @ 0x14033E7F0 (MiDeleteTransitionPte.c)
 *     MiRemoveMappedPtes @ 0x14033FBF8 (MiRemoveMappedPtes.c)
 *     MiRemoveSystemCacheReferences @ 0x14036D470 (MiRemoveSystemCacheReferences.c)
 *     MiFlushRelease @ 0x14036D520 (MiFlushRelease.c)
 *     MiCheckControlArea @ 0x14036DCC0 (MiCheckControlArea.c)
 *     MmPurgeSection @ 0x14039CC74 (MmPurgeSection.c)
 *     MiReferenceActiveSubsection @ 0x14045AE40 (MiReferenceActiveSubsection.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14045ED08 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDecrementSubsection @ 0x140473D20 (MiDecrementSubsection.c)
 *     MiDeleteControlArea @ 0x1404881E0 (MiDeleteControlArea.c)
 *     MiCreatePrototypePtes @ 0x14049406C (MiCreatePrototypePtes.c)
 *     MiReleaseFaultCharges @ 0x1404AC0A0 (MiReleaseFaultCharges.c)
 *     MiFlushSection @ 0x1404ADA20 (MiFlushSection.c)
 *     MiAppendSubsectionChain @ 0x1404C7AA8 (MiAppendSubsectionChain.c)
 *     MiUpControlAreaRefs @ 0x1404DE558 (MiUpControlAreaRefs.c)
 *     MiUpdateLastSubsectionSize @ 0x1404DEAB8 (MiUpdateLastSubsectionSize.c)
 *     MiCleanSection @ 0x1404DF994 (MiCleanSection.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14050151C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x14050687C (MiSetDeleteOnClose.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1406E7694 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiUpdateActiveSubsection @ 0x1406F8198 (MiUpdateActiveSubsection.c)
 *     MiDeleteExtendSubsections @ 0x140778B40 (MiDeleteExtendSubsections.c)
 *     MiChargeSubsectionProtos @ 0x14086AE9C (MiChargeSubsectionProtos.c)
 *     MiChargeSegmentCommit @ 0x1409C9BB0 (MiChargeSegmentCommit.c)
 *     MiSegmentDelete @ 0x140A816BC (MiSegmentDelete.c)
 * Callees:
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x14036E1E8 (MiReturnCrossPartitionCharges.c)
 *     MiReturnResident @ 0x14036E2C0 (MiReturnResident.c)
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
