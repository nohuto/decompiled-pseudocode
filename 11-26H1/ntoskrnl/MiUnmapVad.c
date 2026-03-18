/*
 * XREFs of MiUnmapVad @ 0x1409C3B30
 * Callers:
 *     MiDeletePartialVad @ 0x1403BCC54 (MiDeletePartialVad.c)
 *     MiCleanVad @ 0x14095B57C (MiCleanVad.c)
 *     MiHandleInsertedDataVad @ 0x1409C5754 (MiHandleInsertedDataVad.c)
 *     MiHandleInsertedImageVad @ 0x1409CDFA4 (MiHandleInsertedImageVad.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x1402649C0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140448EB0 (MiReferenceControlAreaFile.c)
 *     MiReadVadFlags2 @ 0x14047A070 (MiReadVadFlags2.c)
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 *     PfCheckDeprioritizeFile @ 0x1409C4504 (PfCheckDeprioritizeFile.c)
 *     MiLogMapFileEvent @ 0x140AD6354 (MiLogMapFileEvent.c)
 */

__int64 __fastcall MiUnmapVad(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, int a3)
{
  __int64 v6; // rcx
  __int64 v8; // rdi
  ULONG_PTR v9; // rax
  __int64 v10; // r14
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r10

  if ( (MiReadVadFlags2(BugCheckParameter2) & 2) != 0 )
  {
    v8 = **(_QWORD **)(v6 + 80);
    v9 = MiReferenceControlAreaFile(v8);
    v10 = *(_QWORD *)(v9 + 24);
    MiDereferenceControlAreaFile(v8, v9);
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0 )
    {
      if ( (unsigned int)PfCheckDeprioritizeFile(
                           CurrentThread->ApcState.Process,
                           HIDWORD(Process[1].CpuPartitionList.Blink),
                           v10,
                           (*(unsigned int *)(BugCheckParameter2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 33) << 32))
                         - (*(unsigned int *)(BugCheckParameter2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 32) << 32))
                         + 1) )
        a3 |= 0x80000000;
    }
  }
  if ( (PerfGlobalGroupMask[0] & 0x8000) != 0 && *(_QWORD *)(BugCheckParameter2 + 80) )
    MiLogMapFileEvent(BugCheckParameter2, 1062LL);
  return MiDeleteVad(BugCheckParameter2, a2, a3);
}
