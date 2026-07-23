/*
 * XREFs of IopAllocateIrpExReturn @ 0x14026BBB0
 * Callers:
 *     NtSetInformationFile @ 0x140269860 (NtSetInformationFile.c)
 *     IopBuildDeviceIoControlRequest @ 0x14026A720 (IopBuildDeviceIoControlRequest.c)
 *     MiSynchronousPageWrite @ 0x14026AA34 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14026ACAC (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x14026AF60 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14026B300 (IoPageReadEx.c)
 *     IopAllocateIrpMustSucceed @ 0x14026BB50 (IopAllocateIrpMustSucceed.c)
 *     IoAsynchronousPageWrite @ 0x14026D9C4 (IoAsynchronousPageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1404AD760 (IopBuildAsynchronousFsdRequest.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1404B3F40 (IopAllocateAndPopulateWriteIrp.c)
 *     IopAllocateBackpocketIrp @ 0x140533EB4 (IopAllocateBackpocketIrp.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140797D78 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x14079C100 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x14079C810 (NtSetVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x1408F2A10 (IopGetSetSecurityObject.c)
 *     IopGetFileInformation @ 0x1409212D0 (IopGetFileInformation.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1409284FC (IopReadFile.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     NtSetEaFile @ 0x140980DA0 (NtSetEaFile.c)
 *     NtUnlockFile @ 0x1409810F0 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1409815E0 (NtQueryEaFile.c)
 *     IopFlushBuffersFile @ 0x140981E10 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x140982460 (NtQueryVolumeInformationFile.c)
 *     BuildQueryDirectoryIrp @ 0x140982F50 (BuildQueryDirectoryIrp.c)
 *     NtQueryInformationFile @ 0x140985BC0 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x140989BF0 (IopQueryXxxInformation.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140AAAD60 (NtNotifyChangeDirectoryFileEx.c)
 *     IopWriteFileGather @ 0x140B03A10 (IopWriteFileGather.c)
 *     IopReadFileScatter @ 0x140B0EB28 (IopReadFileScatter.c)
 *     IoSetInformation @ 0x140B34AF0 (IoSetInformation.c)
 *     IoVerifyVolume @ 0x140B49570 (IoVerifyVolume.c)
 *     NtLockFile @ 0x140B720D0 (NtLockFile.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x14026BBF4 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x14045782C (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x140C4E160 (IovAllocateIrp.c)
 */

__int64 __fastcall IopAllocateIrpExReturn(__int64 a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2, a3);
  if ( ViVerifyAllDrivers != 1 || IopDispatchAllocateIrp == 2 )
    return IopAllocateIrpWithExtension(a1, a2, a3);
  return IovAllocateIrp(a1, a2, a3, retaddr);
}
