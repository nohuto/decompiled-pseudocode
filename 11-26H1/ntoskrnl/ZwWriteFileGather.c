/*
 * XREFs of ZwWriteFileGather @ 0x140728320
 * Callers:
 *     DifZwWriteFileGatherWrapper @ 0x1406C36F0 (DifZwWriteFileGatherWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWriteFileGather(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PFILE_SEGMENT_ELEMENT SegmentArray,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
