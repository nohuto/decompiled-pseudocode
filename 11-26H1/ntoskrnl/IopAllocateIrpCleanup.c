/*
 * XREFs of IopAllocateIrpCleanup @ 0x140AAD144
 * Callers:
 *     NtSetInformationFile @ 0x14026A2F0 (NtSetInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140795248 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x1407995D0 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140799CE0 (NtSetVolumeInformationFile.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x1409B1E90 (BuildQueryDirectoryIrp.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140AACCA0 (NtNotifyChangeDirectoryFileEx.c)
 *     IoSetInformation @ 0x140B326A0 (IoSetInformation.c)
 *     NtLockFile @ 0x140B6ECE0 (NtLockFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IopReleaseFileObjectLock @ 0x140269EC0 (IopReleaseFileObjectLock.c)
 */

LONG_PTR __fastcall IopAllocateIrpCleanup(_DWORD *BugCheckParameter2, PVOID Object, __int64 a3)
{
  if ( Object )
    ObfDereferenceObject(Object);
  if ( (BugCheckParameter2[20] & 2) != 0 )
    IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2, (__int64)Object, a3);
  return ObfDereferenceObject(BugCheckParameter2);
}
