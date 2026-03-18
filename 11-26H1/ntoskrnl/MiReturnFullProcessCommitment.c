/*
 * XREFs of MiReturnFullProcessCommitment @ 0x140A82B94
 * Callers:
 *     MiProtectPrivateMemory @ 0x1403116B4 (MiProtectPrivateMemory.c)
 *     MiMakeHyperRangeAccessible @ 0x140316870 (MiMakeHyperRangeAccessible.c)
 *     MiSplitPrivatePage @ 0x1403173FC (MiSplitPrivatePage.c)
 *     MiProbeAndLockPages @ 0x1403A016C (MiProbeAndLockPages.c)
 *     MiCopyToUserVa @ 0x1404A2F88 (MiCopyToUserVa.c)
 *     MiSplitReducedCommitClonePage @ 0x14052CA98 (MiSplitReducedCommitClonePage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406FC830 (MiPrepareImagePagesForHotPatch.c)
 *     MiReturnCloneResources @ 0x1409620A4 (MiReturnCloneResources.c)
 *     MiSectionProtectGetCharges @ 0x1409C6FE0 (MiSectionProtectGetCharges.c)
 *     MiCommitVadGetCharges @ 0x1409C7650 (MiCommitVadGetCharges.c)
 *     MiSectionProtectReturnCharges @ 0x140A80EE4 (MiSectionProtectReturnCharges.c)
 *     MiDeleteVadBitmap @ 0x140AFAF24 (MiDeleteVadBitmap.c)
 *     MiReturnPageTablePageCommitment @ 0x140B23EB8 (MiReturnPageTablePageCommitment.c)
 *     MiDeleteVadLargePageEvent @ 0x140B3EA60 (MiDeleteVadLargePageEvent.c)
 * Callees:
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     MiGetProcessPartition @ 0x14044C0C0 (MiGetProcessPartition.c)
 *     MiReturnFullProcessCharges @ 0x1404C9B60 (MiReturnFullProcessCharges.c)
 */

__int64 __fastcall MiReturnFullProcessCommitment(__int64 a1, __int64 a2)
{
  __int64 ProcessPartition; // rax

  ProcessPartition = MiGetProcessPartition(a1);
  MiReturnCommit(ProcessPartition, a2, 0);
  return MiReturnFullProcessCharges(a1, a2);
}
