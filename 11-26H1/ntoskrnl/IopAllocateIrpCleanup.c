/*
 * XREFs of IopAllocateIrpCleanup @ 0x140AAB204
 * Callers:
 *     NtSetInformationFile @ 0x140269860 (NtSetInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140797D78 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x14079C100 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x14079C810 (NtSetVolumeInformationFile.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x140982F50 (BuildQueryDirectoryIrp.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140AAAD60 (NtNotifyChangeDirectoryFileEx.c)
 *     IoSetInformation @ 0x140B34AF0 (IoSetInformation.c)
 *     NtLockFile @ 0x140B720D0 (NtLockFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 */

LONG_PTR __fastcall IopAllocateIrpCleanup(_DWORD *BugCheckParameter2, PVOID Object, __int64 a3)
{
  if ( Object )
    ObfDereferenceObject(Object);
  if ( (BugCheckParameter2[20] & 2) != 0 )
    IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2, (__int64)Object, a3);
  return ObfDereferenceObject(BugCheckParameter2);
}
