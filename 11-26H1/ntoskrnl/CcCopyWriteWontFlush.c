/*
 * XREFs of CcCopyWriteWontFlush @ 0x14026B440
 * Callers:
 *     FsRtlCopyWrite @ 0x140ABE620 (FsRtlCopyWrite.c)
 * Callees:
 *     CcForceWriteThrough @ 0x140222070 (CcForceWriteThrough.c)
 *     PsGetBaseIoPriorityThread @ 0x14026D230 (PsGetBaseIoPriorityThread.c)
 *     CcIsFileObjectDirectMapped @ 0x1403845D4 (CcIsFileObjectDirectMapped.c)
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
