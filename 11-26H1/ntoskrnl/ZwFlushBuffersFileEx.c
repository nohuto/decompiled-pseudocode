/*
 * XREFs of ZwFlushBuffersFileEx @ 0x140729DA0
 * Callers:
 *     DifZwFlushBuffersFileExWrapper @ 0x1406A9F70 (DifZwFlushBuffersFileExWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFlushBuffersFileEx(
        HANDLE FileHandle,
        ULONG Flags,
        PVOID Parameters,
        ULONG ParametersSize,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
