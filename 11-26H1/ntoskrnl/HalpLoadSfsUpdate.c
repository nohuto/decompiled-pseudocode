/*
 * XREFs of HalpLoadSfsUpdate @ 0x140786170
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 */

__int64 __fastcall HalpLoadSfsUpdate(__int64 a1)
{
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v3[2]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE Event[32]; // [rsp+60h] [rbp-20h] BYREF

  v3[1] = a1;
  WorkItem.List.Blink = 0LL;
  v3[0] = HalpLoadSfsUpdateEx;
  memset(Event, 0, sizeof(Event));
  KeInitializeEvent((PRKEVENT)Event, NotificationEvent, 0);
  WorkItem.List.Flink = 0LL;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))HalpLoadSfsUpdateWorker;
  WorkItem.Parameter = v3;
  ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
  KeWaitForSingleObject(Event, UserRequest, 0, 0, 0LL);
  return *(unsigned int *)&Event[24];
}
