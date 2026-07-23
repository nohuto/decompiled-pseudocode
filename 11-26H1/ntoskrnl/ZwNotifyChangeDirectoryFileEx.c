/*
 * XREFs of ZwNotifyChangeDirectoryFileEx @ 0x14072A420
 * Callers:
 *     DifZwNotifyChangeDirectoryFileExWrapper @ 0x1406AE420 (DifZwNotifyChangeDirectoryFileExWrapper.c)
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
