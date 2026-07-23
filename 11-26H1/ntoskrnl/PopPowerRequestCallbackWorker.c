/*
 * XREFs of PopPowerRequestCallbackWorker @ 0x14049FF30
 * Callers:
 *     PopPowerRequestReferenceAcquire @ 0x14049F9A0 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestReferenceRelease @ 0x14049FB30 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestHandleClose @ 0x14049FCF8 (PopPowerRequestHandleClose.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     PopPowerRequestHandleRequestUpdate @ 0x140AE4F44 (PopPowerRequestHandleRequestUpdate.c)
 *     PopAcquirePowerRequestPushLock @ 0x140AEFCB4 (PopAcquirePowerRequestPushLock.c)
 *     PopReleasePowerRequestPushLock @ 0x140AF9FD4 (PopReleasePowerRequestPushLock.c)
 *     PopPowerRequestStatsSetActive @ 0x140B040A4 (PopPowerRequestStatsSetActive.c)
 */

void __fastcall PopPowerRequestCallbackWorker(struct _KTHREAD *a1)
{
  struct _KTHREAD *v1; // r14
  struct _KTHREAD **v2; // rsi
  struct _KTHREAD *v3; // rax
  struct _KTHREAD **v4; // r15
  int v5; // r12d
  int v6; // ebx
  unsigned int v7; // r12d
  unsigned int v8; // r13d
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // ecx
  __int64 v17; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF

  v1 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&stru_140F12EA0.QueuedScb, &LockHandle);
  while ( 1 )
  {
    v2 = *(struct _KTHREAD ***)&v1->Header.Lock;
    if ( *(struct _KTHREAD **)&v1->Header.Lock == v1 )
      break;
    if ( v2[1] != v1 || (v3 = *v2, (struct _KTHREAD **)(*v2)->Header.WaitListHead.Flink != v2) )
LABEL_18:
      __fastfail(3u);
    *(_QWORD *)&v1->Header.Lock = v3;
    v4 = v2 - 8;
    v3->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v1;
    v2[1] = (struct _KTHREAD *)v2;
    *v2 = (struct _KTHREAD *)v2;
    v5 = *((_DWORD *)v2 + 5);
    v6 = *((_DWORD *)v2 + 4);
    *((_DWORD *)v2 + 5) = v6;
    *((_DWORD *)v2 + 6) = 2;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v7 = v6 ^ v5;
    v8 = v7;
    if ( v7 )
    {
      do
      {
        _BitScanForward(&v9, v8);
        v10 = v9;
        LOBYTE(v10) = 1;
        v8 &= ~(1 << v9);
        PopAcquirePowerRequestPushLock(v10);
        LOBYTE(v11) = ((1 << v9) & v6) != 0;
        PopPowerRequestStatsSetActive(v2 - 8, v9, v11);
        LOBYTE(v12) = ((1 << v9) & v6) != 0;
        PopPowerRequestHandleRequestUpdate(v2 - 8, v9, v12);
        PopReleasePowerRequestPushLock(v14, v13, v15);
      }
      while ( v8 );
      v1 = a1;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&stru_140F12EA0.QueuedScb, &LockHandle);
    while ( v7 )
    {
      _BitScanForward((unsigned int *)&v16, v7);
      v7 &= ~(1 << v16);
      v17 = 48LL * v16;
      if ( (*(_DWORD *)((char *)&PopPowerRequestAttributes + v17 + 16))-- == 1 )
        KeSetEvent((PRKEVENT)((char *)&PopPowerRequestAttributes + v17 + 24), 0, 0);
    }
    if ( *((_DWORD *)v4 + 20) == *((_DWORD *)v4 + 21) )
    {
      *((_DWORD *)v4 + 22) = 0;
      ObfDereferenceObjectWithTag(v2 - 8, 0x72506F50u);
    }
    else
    {
      Flink = v1->Header.WaitListHead.Flink;
      if ( (struct _KTHREAD *)Flink->Flink != v1 )
        goto LABEL_18;
      *v2 = v1;
      v2[1] = (struct _KTHREAD *)Flink;
      Flink->Flink = (struct _LIST_ENTRY *)v2;
      v1->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v2;
      *((_DWORD *)v4 + 22) = 1;
    }
  }
  if ( v1 == (struct _KTHREAD *)&stru_140F12EA0.KernelShadowStackInitial )
    _InterlockedExchange(&stru_140F12EA0.SchedulerAssistPriorityFloor, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
