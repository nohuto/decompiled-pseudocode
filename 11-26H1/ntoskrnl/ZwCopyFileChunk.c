/*
 * XREFs of ZwCopyFileChunk @ 0x1407294A0
 * Callers:
 *     DifZwCopyFileChunkWrapper @ 0x1406A1C00 (DifZwCopyFileChunkWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCopyFileChunk(
        HANDLE SourceHandle,
        HANDLE DestinationHandle,
        HANDLE EventHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG Length,
        PLARGE_INTEGER SourceOffset,
        PLARGE_INTEGER DestOffset,
        PULONG SourceKey,
        PULONG DestKey,
        ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SourceHandle);
}
