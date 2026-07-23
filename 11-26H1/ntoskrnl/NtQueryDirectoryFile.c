/*
 * XREFs of NtQueryDirectoryFile @ 0x140982D50
 * Callers:
 *     DifNtQueryDirectoryFileWrapper @ 0x140685710 (DifNtQueryDirectoryFileWrapper.c)
 * Callees:
 *     BuildQueryDirectoryIrp @ 0x140982F50 (BuildQueryDirectoryIrp.c)
 *     IopSynchronousServiceTail @ 0x1409837C4 (IopSynchronousServiceTail.c)
 */

NTSTATUS __stdcall NtQueryDirectoryFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        BOOLEAN ReturnSingleEntry,
        PUNICODE_STRING FileName,
        BOOLEAN RestartScan)
{
  unsigned __int8 v12; // cl
  NTSTATUS result; // eax

  v12 = (ReturnSingleEntry != 0 ? 2 : 0) | 1;
  if ( !RestartScan )
    v12 = ReturnSingleEntry != 0 ? 2 : 0;
  result = BuildQueryDirectoryIrp(
             FileHandle,
             Event,
             ApcRoutine,
             ApcContext,
             IoStatusBlock,
             FileInformation,
             Length,
             FileInformationClass,
             v12,
             FileName);
  if ( !result )
    return IopSynchronousServiceTail(0LL, 0LL, 0LL, 0, 0, 2);
  return result;
}
