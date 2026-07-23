/*
 * XREFs of NtWriteFileGather @ 0x140B03910
 * Callers:
 *     DifNtWriteFileGatherWrapper @ 0x140695560 (DifNtWriteFileGatherWrapper.c)
 * Callees:
 *     IopReferenceFileObject @ 0x1402644F0 (IopReferenceFileObject.c)
 *     IopWriteFileGather @ 0x140B03A10 (IopWriteFileGather.c)
 */

NTSTATUS __cdecl NtWriteFileGather(
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
  struct _OBJECT_HANDLE_INFORMATION v10; // [rsp+70h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-10h] BYREF

  BugCheckParameter2 = 0LL;
  v10 = 0LL;
  result = IopReferenceFileObject(FileHandle, 0, KeGetCurrentThread()->PreviousMode, &BugCheckParameter2, &v10);
  if ( result >= 0 )
    return IopWriteFileGather(
             BugCheckParameter2,
             (__int64)IoStatusBlock,
             (Length >> 12) + ((Length & 0xFFF) != 0),
             SegmentArray,
             Length,
             (__int64)ByteOffset,
             (__int64)Key,
             v10.GrantedAccess,
             0LL,
             0LL,
             0);
  return result;
}
