/*
 * XREFs of ZwNotifyChangeDirectoryFile @ 0x14072A400
 * Callers:
 *     DifZwNotifyChangeDirectoryFileWrapper @ 0x1406AE610 (DifZwNotifyChangeDirectoryFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwNotifyChangeDirectoryFile(
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
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
