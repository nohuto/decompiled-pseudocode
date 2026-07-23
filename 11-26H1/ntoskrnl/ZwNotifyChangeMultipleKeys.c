/*
 * XREFs of ZwNotifyChangeMultipleKeys @ 0x14072A460
 * Callers:
 *     DifZwNotifyChangeMultipleKeysWrapper @ 0x1406AE9E0 (DifZwNotifyChangeMultipleKeysWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwNotifyChangeMultipleKeys(
        HANDLE MasterKeyHandle,
        ULONG Count,
        OBJECT_ATTRIBUTES SubordinateObjects[],
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MasterKeyHandle);
}
