/*
 * XREFs of MiGetCommittedPages @ 0x14045C518
 * Callers:
 *     MiReferenceActiveSubsection @ 0x14045AE40 (MiReferenceActiveSubsection.c)
 *     MiSetPagesModified @ 0x14045BE6C (MiSetPagesModified.c)
 *     MiDeleteSegmentPages @ 0x140478E6C (MiDeleteSegmentPages.c)
 *     MiDeleteSubsectionPages @ 0x1404919FC (MiDeleteSubsectionPages.c)
 *     MiCreatePrototypePtes @ 0x14049406C (MiCreatePrototypePtes.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x140531EA8 (MiComputeCrossPartitionSectionCharges.c)
 *     MiInitializeImageExtents @ 0x14086D3A0 (MiInitializeImageExtents.c)
 *     MiPrepareDataViewSubsections @ 0x1409C4B70 (MiPrepareDataViewSubsections.c)
 *     MiInsertSharedCommitNode @ 0x1409C6360 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1409C7C70 (MiRemoveSharedCommitNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetCommittedPages(_QWORD *a1)
{
  if ( a1[8] )
    return *(_QWORD *)(*a1 + 16LL);
  else
    return a1[15] & 0xFFFFFFFFFLL;
}
