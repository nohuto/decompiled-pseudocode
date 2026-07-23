/*
 * XREFs of MiUnmapVad @ 0x140994B10
 * Callers:
 *     MiDeletePartialVad @ 0x1403C6AC4 (MiDeletePartialVad.c)
 *     MiHandleInsertedDataVad @ 0x140996734 (MiHandleInsertedDataVad.c)
 *     MiHandleInsertedImageVad @ 0x14099EF84 (MiHandleInsertedImageVad.c)
 *     MiCleanVad @ 0x140A00E3C (MiCleanVad.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140263F30 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1404419A0 (MiReferenceControlAreaFile.c)
 *     MiReadVadFlags2 @ 0x1404739E0 (MiReadVadFlags2.c)
 *     PfCheckDeprioritizeFile @ 0x1409954E4 (PfCheckDeprioritizeFile.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     MiLogMapFileEvent @ 0x140AD3354 (MiLogMapFileEvent.c)
 */

__int64 __fastcall MiUnmapVad(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rcx
  __int64 v4; // rdi
  ULONG_PTR v5; // rax
  __int64 v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r10

  if ( (MiReadVadFlags2(BugCheckParameter2) & 2) != 0 )
  {
    v4 = **(_QWORD **)(v2 + 80);
    v5 = MiReferenceControlAreaFile(v4);
    v6 = *(_QWORD *)(v5 + 24);
    MiDereferenceControlAreaFile(v4, v5);
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0 )
      PfCheckDeprioritizeFile(
        CurrentThread->ApcState.Process,
        HIDWORD(Process[1].CpuPartitionList.Blink),
        v6,
        (*(unsigned int *)(BugCheckParameter2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 33) << 32))
      - (*(unsigned int *)(BugCheckParameter2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 32) << 32))
      + 1);
  }
  if ( (PerfGlobalGroupMask & 0x8000) != 0 && *(_QWORD *)(BugCheckParameter2 + 80) )
    MiLogMapFileEvent(BugCheckParameter2, 1062LL);
  return MiDeleteVad(BugCheckParameter2);
}
