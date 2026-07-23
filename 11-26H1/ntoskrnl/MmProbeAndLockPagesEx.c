/*
 * XREFs of MmProbeAndLockPagesEx @ 0x1403A1820
 * Callers:
 *     KeSwappablePageReference @ 0x140230E44 (KeSwappablePageReference.c)
 *     IopProbeAndLockPages @ 0x1403A16EC (IopProbeAndLockPages.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x14041084C (VslpLockMdlForTransfer.c)
 *     VslFinalizeSecureImageHash @ 0x140411260 (VslFinalizeSecureImageHash.c)
 *     IopProbeAndLockPages_0 @ 0x1404AD924 (IopProbeAndLockPages_0.c)
 *     IopProbeAndLockPages_1 @ 0x1404BF110 (IopProbeAndLockPages_1.c)
 *     IopProbeAndLockPages_2 @ 0x1404D9AF8 (IopProbeAndLockPages_2.c)
 *     IopProbeAndLockPages_3 @ 0x140503E84 (IopProbeAndLockPages_3.c)
 *     CcLockSystemCacheBuffer @ 0x1405288CC (CcLockSystemCacheBuffer.c)
 *     KiOpPatchCode @ 0x1405FAB48 (KiOpPatchCode.c)
 *     PspIumAllocatePartitionState @ 0x14061920C (PspIumAllocatePartitionState.c)
 *     VmProbeAndLockPages @ 0x1406C44C0 (VmProbeAndLockPages.c)
 *     PopReadPagesFromHiberFile @ 0x140778074 (PopReadPagesFromHiberFile.c)
 *     VslObtainHotPatchUndoTable @ 0x14079504C (VslObtainHotPatchUndoTable.c)
 *     IopAllocateAndLockMdl @ 0x140796C1C (IopAllocateAndLockMdl.c)
 *     IopSetFileObjectIosbRange @ 0x1407981C0 (IopSetFileObjectIosbRange.c)
 *     NtQueryQuotaInformationFile @ 0x14079C100 (NtQueryQuotaInformationFile.c)
 *     ExInitializeLeapSecondData @ 0x14083B934 (ExInitializeLeapSecondData.c)
 *     NtStartProfile @ 0x14084B8E0 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14084BEC0 (NtPssCaptureVaSpaceBulk.c)
 *     CmpLockKeyBodyIntoMemory @ 0x14085F780 (CmpLockKeyBodyIntoMemory.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1409284FC (IopReadFile.c)
 *     ExLockUserBuffer @ 0x140A2FFA0 (ExLockUserBuffer.c)
 *     AlpcpInitializeCompletionList @ 0x140A918A8 (AlpcpInitializeCompletionList.c)
 *     VslValidateDynamicCodePages @ 0x140AD2F54 (VslValidateDynamicCodePages.c)
 *     VslCallEnclave @ 0x140B1C25C (VslCallEnclave.c)
 *     PspCreateSecureThread @ 0x140B36748 (PspCreateSecureThread.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1403A1ECC (MiProbeAndLockPages.c)
 */

__int64 __fastcall MmProbeAndLockPagesEx(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[1] = 0LL;
  if ( a2 >= 8 )
    return 3221225485LL;
  v2 = a2 & 6;
  if ( v2 > 4 )
    return 3221225485LL;
  if ( v2 == 4 )
    a2 = a2 & 0xFFFFFFFFFFFFFFF9uLL | 2;
  v4[0] = a2;
  return MiProbeAndLockPages(a1, v4);
}
