/*
 * XREFs of IoSynchronousPageWrite @ 0x1404A6180
 * Callers:
 *     <none>
 * Callees:
 *     IoSynchronousPageWriteEx @ 0x14026AF60 (IoSynchronousPageWriteEx.c)
 */

NTSTATUS __stdcall IoSynchronousPageWrite(
        PFILE_OBJECT FileObject,
        PMDL MemoryDescriptorList,
        PLARGE_INTEGER StartingOffset,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  return IoSynchronousPageWriteEx(
           FileObject,
           (__int64)MemoryDescriptorList,
           StartingOffset,
           (__int64)Event,
           0,
           0LL,
           (__int64)IoStatusBlock);
}
