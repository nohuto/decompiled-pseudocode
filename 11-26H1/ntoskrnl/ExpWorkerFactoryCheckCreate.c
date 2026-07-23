/*
 * XREFs of ExpWorkerFactoryCheckCreate @ 0x14030D800
 * Callers:
 *     NtReleaseWorkerFactoryWorker @ 0x14030D100 (NtReleaseWorkerFactoryWorker.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14037E9F0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1403E1B50 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x1404CC738 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     ExpWorkerFactoryManagerThread @ 0x1406D73E0 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14030D620 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCreateThread @ 0x14030DCFC (ExpWorkerFactoryCreateThread.c)
 *     ExpCheckThreadHistory @ 0x14030EFF0 (ExpCheckThreadHistory.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x140AF2334 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 */

void __fastcall ExpWorkerFactoryCheckCreate(ULONG_PTR BugCheckParameter2, __int64 LockHandle, __int64 a3)
{
  char v3; // r14
  struct _KLOCK_QUEUE_HANDLE *v4; // rsi
  unsigned int v6; // r15d
  volatile __int64 *v7; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 v9; // rax
  unsigned int *v10; // rdi
  unsigned int *v11; // rbp
  unsigned int v12; // eax
  unsigned int *v13; // r12
  unsigned int v14; // eax
  int Thread; // ebp
  unsigned int v16; // eax
  unsigned int v17; // eax
  int v18; // eax
  unsigned int v19; // eax
  __int128 v20; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+30h] [rbp-28h]

  v3 = a3;
  v4 = (struct _KLOCK_QUEUE_HANDLE *)LockHandle;
  v6 = 2;
  v20 = 0LL;
  v21 = 0LL;
  if ( !LockHandle )
  {
    v7 = *(volatile __int64 **)(BugCheckParameter2 + 16);
    v4 = (struct _KLOCK_QUEUE_HANDLE *)&v20;
    *((_QWORD *)&v20 + 1) = v7;
    *(_QWORD *)&v20 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    LOBYTE(v21) = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      LockHandle = _InterlockedExchange64(v7, (__int64)&v20);
      if ( LockHandle )
        KxWaitForLockOwnerShip((volatile signed __int64)&v20, LockHandle, a3);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&v20, v7);
    }
  }
  if ( v3 && (*(_DWORD *)(BugCheckParameter2 + 408) & 0x31F0) == 0 )
    goto LABEL_14;
  if ( *(_DWORD *)(BugCheckParameter2 + 400)
    || *(_DWORD *)(BugCheckParameter2 + 384) >= *(_DWORD *)(BugCheckParameter2 + 380)
    || (v9 = *(_QWORD *)(BugCheckParameter2 + 16), *(_DWORD *)(v9 + 28))
    || !*(_DWORD *)(*(_QWORD *)(v9 + 8) + 4LL) && !*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 24LL) )
  {
    *(_DWORD *)(BugCheckParameter2 + 408) &= 0xFFFFCE0F;
    goto LABEL_14;
  }
  if ( v3 && (*(_DWORD *)(BugCheckParameter2 + 408) & 0xC0) == 0x80 )
    goto LABEL_42;
  LockHandle = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 8LL) + 40LL);
  if ( (unsigned int)LockHandle >= (unsigned int)KeNumberProcessors_0 )
  {
    v10 = (unsigned int *)(BugCheckParameter2 + 408);
    v18 = *(_DWORD *)(BugCheckParameter2 + 408);
    if ( (v18 & 0xC0) == 0 )
    {
      v6 = 3;
      v16 = v18 & 0xFFFFFF3F | 0x40;
      *v10 = v16;
      goto LABEL_46;
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 408) & 0xC0) == 0x40 && v3 )
    {
      v16 = v18 & 0xFFFFFF3F | 0x80;
      *v10 = v16;
      goto LABEL_46;
    }
    goto LABEL_14;
  }
  if ( v3 )
  {
LABEL_42:
    v10 = (unsigned int *)(BugCheckParameter2 + 408);
    v11 = (unsigned int *)(BugCheckParameter2 + 408);
    if ( (*(_DWORD *)(BugCheckParameter2 + 408) & 0x30) == 0x20 )
      goto LABEL_25;
  }
  else
  {
    v10 = (unsigned int *)(BugCheckParameter2 + 408);
  }
  v11 = v10;
  if ( (unsigned __int8)ExpCheckThreadHistory(BugCheckParameter2) )
  {
    v19 = *v10;
    if ( (*v10 & 0x30) == 0 )
    {
      v6 = 3;
      v16 = v19 & 0xFFFFFFCF | 0x10;
      *v10 = v16;
      goto LABEL_46;
    }
    if ( (*v10 & 0x30) == 0x10 && v3 )
    {
      v16 = v19 & 0xFFFFFFCF | 0x20;
      *v10 = v16;
      goto LABEL_46;
    }
    goto LABEL_14;
  }
LABEL_25:
  if ( v3 )
  {
    v13 = v11;
    if ( (*v11 & 0x3000) == 0x2000 )
      goto LABEL_28;
    v10 = (unsigned int *)(BugCheckParameter2 + 408);
  }
  else
  {
    v10 = v11;
  }
  v12 = *(_DWORD *)(BugCheckParameter2 + 396);
  v13 = v11;
  if ( v12 )
  {
    v13 = v10;
    if ( *(_DWORD *)(BugCheckParameter2 + 384) > v12 )
    {
      v17 = *v11;
      if ( (*v11 & 0x3000) == 0 )
      {
        v6 = 3;
        v16 = v17 & 0xFFFFCFFF | 0x1000;
        *v11 = v16;
        goto LABEL_46;
      }
      if ( (*v11 & 0x3000) == 0x1000 && v3 )
      {
        v16 = v17 & 0xFFFFCFFF | 0x2000;
        *(_DWORD *)(BugCheckParameter2 + 408) = v16;
        goto LABEL_46;
      }
      goto LABEL_14;
    }
  }
LABEL_28:
  v10 = v11;
  if ( (*v11 & 0x200) != 0 )
  {
    ExpLeaveWorkerFactoryAwayMode(BugCheckParameter2, LockHandle, a3);
    v10 = v13;
  }
  *v10 &= 0xFFFFFFCF;
  v14 = *v10;
  ++*(_DWORD *)(BugCheckParameter2 + 400);
  *v10 = v14 & 0xFFFFCE3F;
  KeReleaseInStackQueuedSpinLock(v4);
  Thread = ExpWorkerFactoryCreateThread(BugCheckParameter2);
  if ( Thread < 0 )
  {
    KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(BugCheckParameter2 + 16), v4);
    --*(_DWORD *)(BugCheckParameter2 + 400);
    if ( Thread != -1073741814 && Thread != -1073741582 && Thread != -1073741823 && Thread != -1073741558 )
    {
      *v10 |= 0x100u;
      v6 = 1;
      v16 = *v10;
LABEL_46:
      if ( (v16 & 8) != 0 )
      {
        KeReleaseInStackQueuedSpinLock(v4);
      }
      else
      {
        *v10 = v16 | 8;
        KeReleaseInStackQueuedSpinLock(v4);
        ObfReferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
        RtlpInterlockedPushEntrySList(&ExpWorkerFactoryThreadCreationList, (PSLIST_ENTRY)BugCheckParameter2);
      }
      ExpSetWorkerFactoryDeferredCreateTimer(v6);
      return;
    }
LABEL_14:
    KeReleaseInStackQueuedSpinLock(v4);
  }
}
