/*
 * XREFs of PspQueueDeferredWorkAndWait @ 0x1407F4E38
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x1407F46EC (PspConvertSiloToServerSilo.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     PspInitializeServerSiloDeferred @ 0x1407F4BD0 (PspInitializeServerSiloDeferred.c)
 */

__int64 __fastcall PspQueueDeferredWorkAndWait(__int64 a1, struct _LIST_ENTRY *a2)
{
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-30h] BYREF
  __int64 (__fastcall *v6)(struct _LIST_ENTRY *); // [rsp+68h] [rbp-18h]
  struct _LIST_ENTRY *v7; // [rsp+70h] [rbp-10h]
  unsigned int v8; // [rsp+78h] [rbp-8h]
  int v9; // [rsp+7Ch] [rbp-4h]

  WorkItem.List.Blink = 0LL;
  memset(&Event, 0, sizeof(Event));
  v9 = 0;
  if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
    return PspInitializeServerSiloDeferred(a2);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v7 = a2;
  v6 = PspInitializeServerSiloDeferred;
  v8 = 0;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspDeferredWorkerRoutine;
  WorkItem.List.Flink = 0LL;
  WorkItem.Parameter = &Event;
  ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
  KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
  return v8;
}
