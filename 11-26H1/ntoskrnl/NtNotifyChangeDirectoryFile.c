/*
 * XREFs of NtNotifyChangeDirectoryFile @ 0x140AAAD00
 * Callers:
 *     DifNtNotifyChangeDirectoryFileWrapper @ 0x14067FE10 (DifNtNotifyChangeDirectoryFileWrapper.c)
 * Callees:
 *     NtNotifyChangeDirectoryFileEx @ 0x140AAAD60 (NtNotifyChangeDirectoryFileEx.c)
 */

NTSTATUS __cdecl NtNotifyChangeDirectoryFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        ULONG CompletionFilter,
        BOOLEAN WatchTree)
{
  return NtNotifyChangeDirectoryFileEx(
           FileHandle,
           Event,
           ApcRoutine,
           ApcContext,
           IoStatusBlock,
           Buffer,
           Length,
           CompletionFilter,
           WatchTree,
           DirectoryNotifyInformation);
}
