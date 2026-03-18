/*
 * XREFs of CcIsThereDirtyLoggedPages @ 0x140486480
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall CcIsThereDirtyLoggedPages(__int64 a1, _DWORD *a2, __int64 a3)
{
  char v3; // bl
  __int64 v5; // r14
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rdx
  struct _KTHREAD *Blink; // rcx
  __int64 v9; // rdx
  unsigned __int64 *v10; // rdi
  __int64 v11; // rdx
  struct _KLOCK_QUEUE_HANDLE v13; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  v3 = 0;
  *(_QWORD *)&v13.OldIrql = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v13.LockQueue.Lock = &CcMasterLock;
  v5 = a1;
  v13.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  v13.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    v7 = _InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v13);
    if ( v7 )
      KxWaitForLockOwnerShip((volatile signed __int64)&v13, v7, a3);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&v13, (volatile __int64 *)&CcMasterLock);
  }
  Blink = (struct _KTHREAD *)EmpParseLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
  v9 = *((_QWORD *)PspSystemPartition + 1);
  if ( (unsigned __int64 *)EmpParseLock.GlobalUpdateVpThreadPriorityListEntry.Blink != &EmpParseLock.InGlobalUpdateVpThreadPriorityList )
  {
    do
    {
      v10 = &Blink[-1].Padding[2];
      if ( Blink[-1].Padding[4] == v5 )
        break;
      Blink = *(struct _KTHREAD **)&Blink->Header.Lock;
      v10 = 0LL;
    }
    while ( Blink != (struct _KTHREAD *)&EmpParseLock.InGlobalUpdateVpThreadPriorityList );
    if ( v10 )
    {
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 768);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      {
        v11 = _InterlockedExchange64((volatile __int64 *)(v9 + 768), (__int64)&LockHandle);
        if ( v11 )
          KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v11, a3);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)(v9 + 768));
      }
      if ( v10[9] || *((_DWORD *)v10 + 52) )
      {
        if ( a2 )
          *a2 = *((_DWORD *)v10 + 18) + *((_DWORD *)v10 + 52);
        v3 = 1;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
  }
  KeReleaseInStackQueuedSpinLock(&v13);
  return v3;
}
