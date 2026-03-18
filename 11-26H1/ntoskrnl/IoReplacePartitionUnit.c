/*
 * XREFs of IoReplacePartitionUnit @ 0x1407A0210
 * Callers:
 *     NtReplacePartitionUnit @ 0x14071EC70 (NtReplacePartitionUnit.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PnpReplacePartitionUnit @ 0x1407ADDC0 (PnpReplacePartitionUnit.c)
 */

NTSTATUS __stdcall IoReplacePartitionUnit(PDEVICE_OBJECT TargetPdo, PDEVICE_OBJECT SparePdo, ULONG Flags)
{
  _QWORD v7[2]; // [rsp+30h] [rbp-50h] BYREF
  ULONG v8; // [rsp+40h] [rbp-40h]
  NTSTATUS v9; // [rsp+44h] [rbp-3Ch]
  struct _KEVENT Event; // [rsp+48h] [rbp-38h] BYREF
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+60h] [rbp-20h] BYREF

  memset_0(v7, 0, 0x50uLL);
  v7[0] = TargetPdo;
  v7[1] = SparePdo;
  v8 = Flags;
  v9 = -1073741823;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
  {
    PnpReplacePartitionUnit(v7);
  }
  else
  {
    WorkItem.List.Flink = 0LL;
    WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PnpReplacePartitionUnit;
    WorkItem.Parameter = v7;
    ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  return v9;
}
