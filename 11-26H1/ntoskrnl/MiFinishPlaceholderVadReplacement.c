/*
 * XREFs of MiFinishPlaceholderVadReplacement @ 0x140B05F14
 * Callers:
 *     MiReserveUserMemory @ 0x14095B5DC (MiReserveUserMemory.c)
 *     MiHandleInsertedDataVad @ 0x1409C5754 (MiHandleInsertedDataVad.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x14027DA30 (MiUnlockAndDereferenceVadShared.c)
 *     MiLockVadShared @ 0x14027E8D0 (MiLockVadShared.c)
 *     MiDecrementVadsBeingDeleted @ 0x140442E60 (MiDecrementVadsBeingDeleted.c)
 *     MiGetProcessPartition @ 0x14044C0C0 (MiGetProcessPartition.c)
 *     MiSetVadDeleted @ 0x14046F708 (MiSetVadDeleted.c)
 *     MiVadDeleted @ 0x140480A68 (MiVadDeleted.c)
 *     MiReturnVadDeleted @ 0x1404A3690 (MiReturnVadDeleted.c)
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 *     PerfInfoLogVirtualAlloc @ 0x140ABCEC0 (PerfInfoLogVirtualAlloc.c)
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
