/*
 * XREFs of IovpUnloadDriver @ 0x140C2100C
 * Callers:
 *     IovUnloadDrivers @ 0x140C20E8C (IovUnloadDrivers.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     PsAttachSiloToCurrentThread @ 0x14046CE80 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140476400 (PsDetachSiloFromCurrentThread.c)
 *     HalSystemVectorDispatchEntry @ 0x1404BD660 (HalSystemVectorDispatchEntry.c)
 *     IopCheckUnloadDriver @ 0x1404F3900 (IopCheckUnloadDriver.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObMakeTemporaryObject @ 0x140B01A40 (ObMakeTemporaryObject.c)
 */

__int64 __fastcall IovpUnloadDriver(_QWORD *Object)
{
  struct _LIST_ENTRY *v3; // rax
  struct _LIST_ENTRY *v4; // rbx
  __int64 v5; // rdx
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-30h] BYREF
  _QWORD *v8; // [rsp+68h] [rbp-18h]
  char v9; // [rsp+90h] [rbp+10h] BYREF

  v9 = 0;
  if ( !Object[13] )
    return 3221225488LL;
  PsReferenceSiloContext(Object);
  if ( (int)IopCheckUnloadDriver(Object, &v9) >= 0 )
    return 259LL;
  ObfDereferenceObject(Object);
  if ( !v9 )
    return 259LL;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
  {
    v3 = (struct _LIST_ENTRY *)HalSystemVectorDispatchEntry();
    v4 = PsAttachSiloToCurrentThread(v3);
    guard_dispatch_icall_no_overrides((__int64)Object, v5);
    PsDetachSiloFromCurrentThread(v4);
  }
  else
  {
    memset_0(&WorkItem, 0, 0x50uLL);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v8 = Object;
    WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
    WorkItem.List.Flink = 0LL;
    WorkItem.Parameter = &WorkItem;
    ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  ObMakeTemporaryObject(Object);
  ObfDereferenceObject(Object);
  return 0LL;
}
