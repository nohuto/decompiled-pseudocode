/*
 * XREFs of IopAllocateIrpExReturn @ 0x14026C640
 * Callers:
 *     NtSetInformationFile @ 0x14026A2F0 (NtSetInformationFile.c)
 *     IopBuildDeviceIoControlRequest @ 0x14026B1B0 (IopBuildDeviceIoControlRequest.c)
 *     MiSynchronousPageWrite @ 0x14026B4C4 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14026B73C (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x14026B9F0 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14026BD90 (IoPageReadEx.c)
 *     IopAllocateIrpMustSucceed @ 0x14026C5E0 (IopAllocateIrpMustSucceed.c)
 *     IoAsynchronousPageWrite @ 0x14026E454 (IoAsynchronousPageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1404B4190 (IopBuildAsynchronousFsdRequest.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1404BA6B0 (IopAllocateAndPopulateWriteIrp.c)
 *     IopAllocateBackpocketIrp @ 0x140531A0C (IopAllocateBackpocketIrp.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140795248 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x1407995D0 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140799CE0 (NtSetVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x1408EC450 (IopGetSetSecurityObject.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1408F856C (IopReadFile.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     NtSetEaFile @ 0x1409AFCE0 (NtSetEaFile.c)
 *     NtUnlockFile @ 0x1409B0030 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1409B0520 (NtQueryEaFile.c)
 *     IopFlushBuffersFile @ 0x1409B0D50 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x1409B13A0 (NtQueryVolumeInformationFile.c)
 *     BuildQueryDirectoryIrp @ 0x1409B1E90 (BuildQueryDirectoryIrp.c)
 *     NtQueryInformationFile @ 0x1409B4B00 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x1409B8C10 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x1409FC6D0 (IopGetFileInformation.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140AACCA0 (NtNotifyChangeDirectoryFileEx.c)
 *     IopWriteFileGather @ 0x140B01CE0 (IopWriteFileGather.c)
 *     IopReadFileScatter @ 0x140B0D3D8 (IopReadFileScatter.c)
 *     IoSetInformation @ 0x140B326A0 (IoSetInformation.c)
 *     IoVerifyVolume @ 0x140B47540 (IoVerifyVolume.c)
 *     NtLockFile @ 0x140B6ECE0 (NtLockFile.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x14026C684 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x14045DC8C (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x140C48150 (IovAllocateIrp.c)
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
