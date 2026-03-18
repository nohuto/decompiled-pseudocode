/*
 * XREFs of NtFsControlFile @ 0x1408F5DC0
 * Callers:
 *     DifNtFsControlFileWrapper @ 0x1406787A0 (DifNtFsControlFileWrapper.c)
 * Callees:
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 */

NTSTATUS __stdcall NtFsControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FsControlCode,
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
           FsControlCode,
           InputBuffer,
           Size,
           OutputBuffer,
           OutputBufferLength,
           0,
           0);
}
