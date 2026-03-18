/*
 * XREFs of MmProbeAndLockPagesEx @ 0x14039FAC0
 * Callers:
 *     KeSwappablePageReference @ 0x14022F4B4 (KeSwappablePageReference.c)
 *     IopProbeAndLockPages @ 0x14039F98C (IopProbeAndLockPages.c)
 *     VslpLockPagesForTransfer @ 0x14040FF88 (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x14041112C (VslpLockMdlForTransfer.c)
 *     VslFinalizeSecureImageHash @ 0x140411C60 (VslFinalizeSecureImageHash.c)
 *     IopProbeAndLockPages_0 @ 0x1404B4354 (IopProbeAndLockPages_0.c)
 *     IopProbeAndLockPages_1 @ 0x1404C5760 (IopProbeAndLockPages_1.c)
 *     IopProbeAndLockPages_2 @ 0x1404E0418 (IopProbeAndLockPages_2.c)
 *     IopProbeAndLockPages_3 @ 0x14050A414 (IopProbeAndLockPages_3.c)
 *     CcLockSystemCacheBuffer @ 0x14052625C (CcLockSystemCacheBuffer.c)
 *     KiOpPatchCode @ 0x1405F8128 (KiOpPatchCode.c)
 *     PspIumAllocatePartitionState @ 0x14061621C (PspIumAllocatePartitionState.c)
 *     VmProbeAndLockPages @ 0x1406C08E0 (VmProbeAndLockPages.c)
 *     PopReadPagesFromHiberFile @ 0x140775074 (PopReadPagesFromHiberFile.c)
 *     VslObtainHotPatchUndoTable @ 0x14079251C (VslObtainHotPatchUndoTable.c)
 *     IopAllocateAndLockMdl @ 0x1407940EC (IopAllocateAndLockMdl.c)
 *     IopSetFileObjectIosbRange @ 0x140795690 (IopSetFileObjectIosbRange.c)
 *     NtQueryQuotaInformationFile @ 0x1407995D0 (NtQueryQuotaInformationFile.c)
 *     ExInitializeLeapSecondData @ 0x1408356F4 (ExInitializeLeapSecondData.c)
 *     NtStartProfile @ 0x140842840 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140845040 (NtPssCaptureVaSpaceBulk.c)
 *     CmpLockKeyBodyIntoMemory @ 0x1408593F0 (CmpLockKeyBodyIntoMemory.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1408F856C (IopReadFile.c)
 *     ExLockUserBuffer @ 0x140907E40 (ExLockUserBuffer.c)
 *     AlpcpInitializeCompletionList @ 0x140A8CBD8 (AlpcpInitializeCompletionList.c)
 *     VslValidateDynamicCodePages @ 0x140AD5FA4 (VslValidateDynamicCodePages.c)
 *     VslCallEnclave @ 0x140B19E0C (VslCallEnclave.c)
 *     PspCreateSecureThread @ 0x140B342F8 (PspCreateSecureThread.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1403A016C (MiProbeAndLockPages.c)
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
