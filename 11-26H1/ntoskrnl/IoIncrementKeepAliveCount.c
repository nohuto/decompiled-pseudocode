/*
 * XREFs of IoIncrementKeepAliveCount @ 0x14044D080
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x14044D19C (IopAdjustFileObjectKeepAliveCount.c)
 *     PspAdjustKeepAliveCountProcess @ 0x140B07994 (PspAdjustKeepAliveCountProcess.c)
 */

__int64 __fastcall IoIncrementKeepAliveCount(__int64 a1, void *a2)
{
  int v4; // edi
  KIRQL v5; // al
  __int64 v6; // rcx
  KIRQL v7; // bl
  __int64 v8; // rdx
  __int64 v10; // r9
  int v11; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0;
  v12 = 0LL;
  v4 = IopAdjustFileObjectKeepAliveCount(a1, (_DWORD)a2, 1, (unsigned int)&v11, (__int64)&v12);
  if ( v4 >= 0 && v11 == 1 )
  {
    if ( KeGetCurrentIrql() == 2 )
    {
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&IopPerfIoTrackingLock.SuspendEvent.Header.WaitListHead.Blink);
      v6 = v12;
      v7 = v5;
      ++*(_DWORD *)(v12 + 32);
      if ( !*(_BYTE *)(v6 + 16) )
      {
        v8 = *(_QWORD *)&IopPerfIoTrackingLock.SuspendEvent.Header.Lock;
        if ( *(struct _KTHREAD **)(*(_QWORD *)&IopPerfIoTrackingLock.SuspendEvent.Header.Lock + 8LL) != (struct _KTHREAD *)&IopPerfIoTrackingLock.SuspendEvent )
          __fastfail(3u);
        *(_QWORD *)v6 = *(_QWORD *)&IopPerfIoTrackingLock.SuspendEvent.Header.Lock;
        *(_QWORD *)(v6 + 8) = &IopPerfIoTrackingLock.SuspendEvent;
        *(_QWORD *)(v8 + 8) = v6;
        *(_QWORD *)&IopPerfIoTrackingLock.SuspendEvent.Header.Lock = v6;
        *(_BYTE *)(v6 + 16) = 1;
        if ( !IopPerfIoTrackingLock.AbWaitEntryCount )
        {
          IopPerfIoTrackingLock.AbWaitEntryCount = 1;
          ExQueueWorkItem((PWORK_QUEUE_ITEM)&IopPerfIoTrackingLock.SchedulerApcFill5[56], DelayedWorkQueue);
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)&IopPerfIoTrackingLock.SuspendEvent.Header.WaitListHead.Blink, v7);
    }
    else
    {
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      v10 = v12;
      LOBYTE(v10) = *(_BYTE *)(v12 + 18);
      PspAdjustKeepAliveCountProcess(a2, 1LL, a1, v10);
    }
  }
  return (unsigned int)v4;
}
