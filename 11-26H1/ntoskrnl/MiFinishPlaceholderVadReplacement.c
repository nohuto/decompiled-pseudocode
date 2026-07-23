/*
 * XREFs of MiFinishPlaceholderVadReplacement @ 0x140B08044
 * Callers:
 *     MiHandleInsertedDataVad @ 0x140996734 (MiHandleInsertedDataVad.c)
 *     MiReserveUserMemory @ 0x140A00E9C (MiReserveUserMemory.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x14027CFA0 (MiUnlockAndDereferenceVadShared.c)
 *     MiLockVadShared @ 0x14027DE40 (MiLockVadShared.c)
 *     MiDecrementVadsBeingDeleted @ 0x14043B970 (MiDecrementVadsBeingDeleted.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     MiSetVadDeleted @ 0x140468E88 (MiSetVadDeleted.c)
 *     MiVadDeleted @ 0x14047A3A8 (MiVadDeleted.c)
 *     MiReturnVadDeleted @ 0x14049D1A0 (MiReturnVadDeleted.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     PerfInfoLogVirtualAlloc @ 0x140ABF324 (PerfInfoLogVirtualAlloc.c)
 */

LONG __fastcall MiFinishPlaceholderVadReplacement(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 Process; // rsi
  __int16 *ProcessPartition; // rax

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( (_DWORD)a3 )
  {
    MiLockVadShared((__int64)CurrentThread, BugCheckParameter2, a3, a4);
    if ( !(unsigned int)MiVadDeleted(BugCheckParameter2) && (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 )
    {
      ProcessPartition = (__int16 *)MiGetProcessPartition(Process);
      PerfInfoLogVirtualAlloc(
        (*(unsigned int *)(BugCheckParameter2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 32) << 32)) << 12,
        ((*(unsigned int *)(BugCheckParameter2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 33) << 32))
       - (*(unsigned int *)(BugCheckParameter2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 32) << 32))
       + 1) << 12,
        Process,
        0x2000,
        *ProcessPartition,
        *ProcessPartition);
    }
    MiUnlockAndDereferenceVadShared(BugCheckParameter2);
  }
  else
  {
    MiSetVadDeleted(BugCheckParameter2, a2, a3, a4);
    MiDeleteVad(BugCheckParameter2, 0LL, 0);
    MiReturnVadDeleted(Process);
  }
  return MiDecrementVadsBeingDeleted(a2);
}
