/*
 * XREFs of NtQueryDirectoryFileEx @ 0x140982E60
 * Callers:
 *     DifNtQueryDirectoryFileExWrapper @ 0x140685520 (DifNtQueryDirectoryFileExWrapper.c)
 * Callees:
 *     BuildQueryDirectoryIrp @ 0x140982F50 (BuildQueryDirectoryIrp.c)
 *     IopSynchronousServiceTail @ 0x1409837C4 (IopSynchronousServiceTail.c)
 */

NTSTATUS __cdecl NtQueryDirectoryFileEx(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG QueryFlags,
        PUNICODE_STRING FileName)
{
  NTSTATUS result; // eax

  result = BuildQueryDirectoryIrp(
             FileHandle,
             Event,
             ApcRoutine,
             ApcContext,
             IoStatusBlock,
             FileInformation,
             Length,
             FileInformationClass,
             QueryFlags,
             FileName);
  if ( !result )
    return IopSynchronousServiceTail(0LL, 0LL, 0LL, 0, 0, 2);
  return result;
}
