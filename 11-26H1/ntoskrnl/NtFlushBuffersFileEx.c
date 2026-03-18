/*
 * XREFs of NtFlushBuffersFileEx @ 0x1409B0CB0
 * Callers:
 *     DifNtFlushBuffersFileExWrapper @ 0x140677CE0 (DifNtFlushBuffersFileExWrapper.c)
 *     NtFlushBuffersFile @ 0x1409B0C80 (NtFlushBuffersFile.c)
 * Callees:
 *     IopReferenceFileObject @ 0x140264F80 (IopReferenceFileObject.c)
 *     IopFlushBuffersFile @ 0x1409B0D50 (IopFlushBuffersFile.c)
 */

__int64 __fastcall NtFlushBuffersFileEx(void *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  struct _OBJECT_HANDLE_INFORMATION v6; // [rsp+40h] [rbp-18h] BYREF
  PFILE_OBJECT FileObject[2]; // [rsp+48h] [rbp-10h] BYREF

  FileObject[0] = 0LL;
  v6 = 0LL;
  result = IopReferenceFileObject(a1, 0, KeGetCurrentThread()->PreviousMode, (ULONG_PTR *)FileObject, &v6);
  if ( (int)result >= 0 )
    return IopFlushBuffersFile(FileObject[0], v6.GrantedAccess, 0LL, 0LL, a5);
  return result;
}
