/*
 * XREFs of ExpShutdownWorkerFactory @ 0x1403B3AE0
 * Callers:
 *     NtShutdownWorkerFactory @ 0x1406D77B0 (NtShutdownWorkerFactory.c)
 *     ExpCloseWorkerFactory @ 0x140AEB870 (ExpCloseWorkerFactory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoSetIoCompletionEx3 @ 0x1402659C0 (IoSetIoCompletionEx3.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14030D620 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ExpPurgeThreadHistory @ 0x1403B3BF0 (ExpPurgeThreadHistory.c)
 *     KeCancelTimer2 @ 0x1403B40F0 (KeCancelTimer2.c)
 *     ?KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z @ 0x1403B46B8 (-KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z.c)
 */

__int64 __fastcall ExpShutdownWorkerFactory(ULONG_PTR BugCheckParameter2)
{
  KSPIN_LOCK *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  char v5; // di
  __int64 v6; // rax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  v2 = *(KSPIN_LOCK **)(BugCheckParameter2 + 16);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  ExpPurgeThreadHistory(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 408) & 0x200) != 0 )
    ExpLeaveWorkerFactoryAwayMode(BugCheckParameter2, v3, v4);
  if ( *(_QWORD *)(BugCheckParameter2 + 592) == BugCheckParameter2 + 424
    && KiDeregisterObjectWaitBlock(
         (void *)(BugCheckParameter2 + 424),
         (struct _KWAIT_BLOCK *)(BugCheckParameter2 + 560)) )
  {
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
  }
  v5 = 1;
  *(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 16) + 33LL) = 1;
  v6 = *(_QWORD *)(BugCheckParameter2 + 16);
  *(_QWORD *)(BugCheckParameter2 + 376) = 0LL;
  if ( !*(_DWORD *)(v6 + 28) || *(_BYTE *)(v6 + 32) )
    v5 = 0;
  else
    *(_BYTE *)(v6 + 32) = 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  result = KeCancelTimer2(BugCheckParameter2 + 424, 0LL);
  if ( v5 )
    return IoSetIoCompletionEx3(
             *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 8LL),
             0LL,
             0LL,
             0,
             0LL,
             0,
             *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 16LL),
             0,
             0);
  return result;
}
