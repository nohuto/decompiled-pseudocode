/*
 * XREFs of NtCreatePagingFile @ 0x1408730C0
 * Callers:
 *     DifNtCreatePagingFileWrapper @ 0x140675EC0 (DifNtCreatePagingFileWrapper.c)
 * Callees:
 *     MiCreatePagingFile @ 0x140871844 (MiCreatePagingFile.c)
 */

NTSTATUS __cdecl NtCreatePagingFile(
        PUNICODE_STRING PageFileName,
        PLARGE_INTEGER MinimumSize,
        PLARGE_INTEGER MaximumSize,
        ULONG Priority)
{
  return MiCreatePagingFile(
           (__int64)PageFileName,
           (__int64)MinimumSize,
           (__int64)MaximumSize,
           KeGetCurrentThread()->PreviousMode,
           Priority,
           &MiSystemPartition);
}
