/*
 * XREFs of ZwReadFileScatter @ 0x140728580
 * Callers:
 *     DifZwReadFileScatterWrapper @ 0x1406B9790 (DifZwReadFileScatterWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReadFileScatter(
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
