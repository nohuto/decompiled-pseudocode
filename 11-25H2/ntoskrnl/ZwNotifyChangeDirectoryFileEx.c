/*
 * XREFs of ZwNotifyChangeDirectoryFileEx @ 0x14069D580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwNotifyChangeDirectoryFileEx(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        DIRECTORY_NOTIFY_INFORMATION_CLASS DirectoryNotifyInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
