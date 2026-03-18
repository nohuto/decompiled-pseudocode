/*
 * XREFs of MmProbeAndLockPages @ 0x14039FC20
 * Callers:
 *     SmRecordDecompressionFailureDumpPayload @ 0x14063EFF8 (SmRecordDecompressionFailureDumpPayload.c)
 *     DifMmProbeAndLockPagesWrapper @ 0x140667DC0 (DifMmProbeAndLockPagesWrapper.c)
 *     SmProcessStatsRequest @ 0x140819F3C (SmProcessStatsRequest.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409F0D3C (WbMakeUserDataPagesKernelWritable.c)
 *     FsRtlKernelFsControlFile @ 0x140A1A200 (FsRtlKernelFsControlFile.c)
 *     CcMdlRead @ 0x140AED790 (CcMdlRead.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     MiProbeAndLockPages @ 0x1403A016C (MiProbeAndLockPages.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  int v3; // eax
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  *(_QWORD *)&v4 = (2LL * (Operation != IoReadAccess)) ^ ((AccessMode != 0) ^ (2LL * (Operation != IoReadAccess))) & 0xFFFFFFFFFFFFFFF9uLL;
  v3 = MiProbeAndLockPages(MemoryDescriptorList, &v4);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
}
