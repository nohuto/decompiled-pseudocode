/*
 * XREFs of IoPageRead @ 0x1404F2190
 * Callers:
 *     PopReadPagesFromHiberFile @ 0x140778074 (PopReadPagesFromHiberFile.c)
 * Callees:
 *     IoPageReadEx @ 0x14026B300 (IoPageReadEx.c)
 */

NTSTATUS __stdcall IoPageRead(
        PFILE_OBJECT FileObject,
        PMDL MemoryDescriptorList,
        PLARGE_INTEGER StartingOffset,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  char v7; // cl
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  char v10; // dl
  char v11; // al
  unsigned __int64 v12; // rdx

  v7 = 0;
  if ( ((unsigned __int8)FileObject & 3) != 0 )
  {
    v7 = 2 - (((unsigned __int8)FileObject & 1) != 0);
    FileObject = (PFILE_OBJECT)((unsigned __int64)FileObject & 0xFFFFFFFFFFFFFFFCuLL);
  }
  v8 = (unsigned __int8)MemoryDescriptorList & 1;
  v9 = (unsigned __int64)MemoryDescriptorList & 0xFFFFFFFFFFFFFFFEuLL;
  if ( ((unsigned __int8)MemoryDescriptorList & 1) == 0 )
    v9 = (unsigned __int64)MemoryDescriptorList;
  v10 = v7 | 4;
  if ( !v8 )
    v10 = v7;
  v11 = v10 | 8;
  if ( (v9 & 2) == 0 )
    v11 = v10;
  v12 = v9 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v9 & 2) == 0 )
    v12 = v9;
  return IoPageReadEx(FileObject, v12, StartingOffset, (__int64)Event, (__int64)IoStatusBlock, v11, 0LL);
}
