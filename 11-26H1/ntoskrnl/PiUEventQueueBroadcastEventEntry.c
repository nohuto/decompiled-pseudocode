/*
 * XREFs of PiUEventQueueBroadcastEventEntry @ 0x140B058DC
 * Callers:
 *     PiUEventProcessBroadcastNotifications @ 0x1409A8BF4 (PiUEventProcessBroadcastNotifications.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PiUEventCoalesceBroadcastEvents @ 0x140B059A0 (PiUEventCoalesceBroadcastEvents.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void __fastcall PiUEventQueueBroadcastEventEntry(__int64 a1)
{
  bool v2; // di
  __int64 *v3; // rax
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  ExAcquireFastMutex(&PiUEventBroadcastEventQueueLock);
  v2 = PiUEventBroadcastEventQueue == &PiUEventBroadcastEventQueue;
  PiUEventCoalesceBroadcastEvents(a1);
  *(_BYTE *)(a1 + 16) = 1;
  v3 = (__int64 *)qword_140F84B28;
  if ( *(PVOID **)qword_140F84B28 != &PiUEventBroadcastEventQueue )
    __fastfail(3u);
  *(_QWORD *)a1 = &PiUEventBroadcastEventQueue;
  *(_QWORD *)(a1 + 8) = v3;
  *v3 = a1;
  qword_140F84B28 = a1;
  KeReleaseGuardedMutex(&PiUEventBroadcastEventQueueLock);
  if ( v2 )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      Pool2->Parameter = Pool2;
      Pool2->WorkerRoutine = PiUEventBroadcastEventWorker;
      Pool2->List.Flink = 0LL;
      ExQueueWorkItem(Pool2, BackgroundWorkQueue);
    }
  }
}
