/*
 * XREFs of AcpiPccPlatformNotificationUnsafe @ 0x140064E14
 * Callers:
 *     ACPIPccProcessSci @ 0x14005226C (ACPIPccProcessSci.c)
 *     AcpiPccPlatformInterruptServiceRoutineDpc @ 0x140064D20 (AcpiPccPlatformInterruptServiceRoutineDpc.c)
 * Callees:
 *     AcpiPccClearGenericStatusFields @ 0x1400653B4 (AcpiPccClearGenericStatusFields.c)
 */

void __fastcall AcpiPccPlatformNotificationUnsafe(PVOID Context)
{
  __int64 v2; // rcx
  struct _IO_WORKITEM *WorkItem; // rax

  AcpiPccClearGenericStatusFields(Context, 4294967287LL);
  if ( *(_QWORD *)(v2 + 392) )
  {
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v2 + 408));
    if ( WorkItem )
      IoQueueWorkItemEx(WorkItem, AcpiPccPlatformNotificationWorker, DelayedWorkQueue, Context);
  }
}
