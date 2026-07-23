/*
 * XREFs of NtReadFileScatter @ 0x140B0EA40
 * Callers:
 *     DifNtReadFileScatterWrapper @ 0x14068B340 (DifNtReadFileScatterWrapper.c)
 * Callees:
 *     IopReferenceFileObject @ 0x1402644F0 (IopReferenceFileObject.c)
 *     IopReadFileScatter @ 0x140B0EB28 (IopReadFileScatter.c)
 */

NTSTATUS __cdecl NtReadFileScatter(
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
  NTSTATUS result; // eax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+60h] [rbp-18h] BYREF

  BugCheckParameter2[0] = 0LL;
  result = IopReferenceFileObject(FileHandle, 1u, KeGetCurrentThread()->PreviousMode, BugCheckParameter2, 0LL);
  if ( result >= 0 )
    return IopReadFileScatter(
             BugCheckParameter2[0],
             (__int64)IoStatusBlock,
             (Length >> 12) + ((Length & 0xFFF) != 0),
             SegmentArray,
             Length,
             (__int64)ByteOffset,
             (__int64)Key,
             0LL,
             0LL);
  return result;
}
