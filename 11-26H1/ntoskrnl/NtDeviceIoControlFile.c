/*
 * XREFs of NtDeviceIoControlFile @ 0x1408F5E30
 * Callers:
 *     DifNtDeviceIoControlFileWrapper @ 0x140676100 (DifNtDeviceIoControlFileWrapper.c)
 *     PopFlushVolumeWorker @ 0x140C06A60 (PopFlushVolumeWorker.c)
 * Callees:
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 */

NTSTATUS __stdcall NtDeviceIoControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  size_t Size; // [rsp+38h] [rbp-30h]

  LODWORD(Size) = InputBufferLength;
  return IopXxxControlFile(
           FileHandle,
           (__int64)IoStatusBlock,
           IoControlCode,
           InputBuffer,
           Size,
           OutputBuffer,
           OutputBufferLength,
           1,
           0);
}
