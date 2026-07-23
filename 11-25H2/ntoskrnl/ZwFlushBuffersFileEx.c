/*
 * XREFs of ZwFlushBuffersFileEx @ 0x14069CF20
 * Callers:
 *     DifZwFlushBuffersFileExWrapper @ 0x140633D80 (DifZwFlushBuffersFileExWrapper.c)
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
