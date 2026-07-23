/*
 * XREFs of MmProbeAndLockPages @ 0x1403A1980
 * Callers:
 *     SmRecordDecompressionFailureDumpPayload @ 0x140642BD8 (SmRecordDecompressionFailureDumpPayload.c)
 *     DifMmProbeAndLockPagesWrapper @ 0x14066B9A0 (DifMmProbeAndLockPagesWrapper.c)
 *     SmProcessStatsRequest @ 0x14082014C (SmProcessStatsRequest.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409ED50C (WbMakeUserDataPagesKernelWritable.c)
 *     FsRtlKernelFsControlFile @ 0x140A23830 (FsRtlKernelFsControlFile.c)
 *     CcMdlRead @ 0x140AF04E0 (CcMdlRead.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     MiProbeAndLockPages @ 0x1403A1ECC (MiProbeAndLockPages.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  NTSTATUS v3; // eax
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  *(_QWORD *)&v4 = (2LL * (Operation != IoReadAccess)) ^ ((AccessMode != 0) ^ (2LL * (Operation != IoReadAccess))) & 0xFFFFFFFFFFFFFFF9uLL;
  v3 = MiProbeAndLockPages(MemoryDescriptorList, &v4);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
}
