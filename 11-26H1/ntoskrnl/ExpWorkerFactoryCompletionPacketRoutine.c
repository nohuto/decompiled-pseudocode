/*
 * XREFs of ExpWorkerFactoryCompletionPacketRoutine @ 0x1404685E0
 * Callers:
 *     <none>
 * Callees:
 *     IoSetIoCompletionEx3 @ 0x140266450 (IoSetIoCompletionEx3.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     IoFreeMiniCompletionPacket @ 0x140A7A5E0 (IoFreeMiniCompletionPacket.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWorkerFactoryCompletionPacketRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rdx
  int v6; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    v5 = _InterlockedExchange64((volatile __int64 *)a2, (__int64)&LockHandle);
    if ( v5 )
      KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v5, a3);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)a2);
  }
  v6 = 0;
  if ( *(_BYTE *)(a2 + 34) )
  {
    v6 = 2;
  }
  else
  {
    if ( !*(_BYTE *)(a2 + 33) )
    {
      if ( (*(_DWORD *)(a2 + 24))-- == 1 )
        goto LABEL_11;
LABEL_17:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      IoSetIoCompletionEx3(*(_QWORD *)(a2 + 8), 0LL, 0LL, 0, 0LL, 0, *(_QWORD *)(a2 + 16), 0, 0);
      return;
    }
    if ( *(_DWORD *)(a2 + 28) )
      goto LABEL_17;
  }
LABEL_11:
  *(_BYTE *)(a2 + 32) = 0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v6 )
  {
    IoFreeMiniCompletionPacket(*(_QWORD *)(a2 + 16));
    ExFreePoolWithTag((PVOID)a2, 0);
  }
}
