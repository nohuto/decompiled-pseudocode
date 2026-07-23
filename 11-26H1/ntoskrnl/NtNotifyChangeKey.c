/*
 * XREFs of NtNotifyChangeKey @ 0x14093C120
 * Callers:
 *     DifNtNotifyChangeKeyWrapper @ 0x14067FFF0 (DifNtNotifyChangeKeyWrapper.c)
 *     ExpWatchProductTypeInitialization @ 0x140CEB28C (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x14093C190 (NtNotifyChangeMultipleKeys.c)
 */

NTSTATUS __cdecl NtNotifyChangeKey(
        HANDLE KeyHandle,
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
  return NtNotifyChangeMultipleKeys(
           KeyHandle,
           0,
           0LL,
           Event,
           ApcRoutine,
           ApcContext,
           IoStatusBlock,
           CompletionFilter,
           WatchTree,
           Buffer,
           BufferSize,
           Asynchronous);
}
