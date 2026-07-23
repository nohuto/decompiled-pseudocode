/*
 * XREFs of CcCopyWriteWontFlush @ 0x14026A9B0
 * Callers:
 *     FsRtlCopyWrite @ 0x140AC06C0 (FsRtlCopyWrite.c)
 * Callees:
 *     CcForceWriteThrough @ 0x140223A00 (CcForceWriteThrough.c)
 *     PsGetBaseIoPriorityThread @ 0x14026C7A0 (PsGetBaseIoPriorityThread.c)
 *     CcIsFileObjectDirectMapped @ 0x140386384 (CcIsFileObjectDirectMapped.c)
 */

BOOLEAN __stdcall CcCopyWriteWontFlush(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  struct _KTHREAD *CurrentThread; // rcx
  int BaseIoPriorityThread; // eax
  unsigned int v6; // r10d
  BOOLEAN result; // al

  result = Length < 0x1000000
        && (FileObject->Flags & 0x10) == 0
        && ((CurrentThread = KeGetCurrentThread(),
             BaseIoPriorityThread = PsGetBaseIoPriorityThread(CurrentThread, CurrentThread),
             BaseIoPriorityThread < 2)
         && FileOffset == (PLARGE_INTEGER)KeGetCurrentThread()
         && FileOffset[188].LowPart
         || BaseIoPriorityThread > 0)
        && !(unsigned __int8)CcForceWriteThrough((__int64)FileObject, v6, 0LL, 0)
        || (unsigned __int8)CcIsFileObjectDirectMapped(FileObject, FileOffset) != 0;
  return result;
}
