/*
 * XREFs of NtFlushBuffersFileEx @ 0x140981D70
 * Callers:
 *     DifNtFlushBuffersFileExWrapper @ 0x14067B8C0 (DifNtFlushBuffersFileExWrapper.c)
 *     NtFlushBuffersFile @ 0x140981D40 (NtFlushBuffersFile.c)
 * Callees:
 *     IopReferenceFileObject @ 0x1402644F0 (IopReferenceFileObject.c)
 *     IopFlushBuffersFile @ 0x140981E10 (IopFlushBuffersFile.c)
 */

NTSTATUS __cdecl NtFlushBuffersFileEx(
        HANDLE FileHandle,
        ULONG Flags,
        PVOID Parameters,
        ULONG ParametersSize,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  NTSTATUS result; // eax
  struct _OBJECT_HANDLE_INFORMATION v6; // [rsp+40h] [rbp-18h] BYREF
  PFILE_OBJECT FileObject[2]; // [rsp+48h] [rbp-10h] BYREF

  FileObject[0] = 0LL;
  v6 = 0LL;
  result = IopReferenceFileObject(FileHandle, 0, KeGetCurrentThread()->PreviousMode, (ULONG_PTR *)FileObject, &v6);
  if ( result >= 0 )
    return IopFlushBuffersFile(FileObject[0], v6.GrantedAccess, 0LL, 0LL, (__int64)IoStatusBlock);
  return result;
}
