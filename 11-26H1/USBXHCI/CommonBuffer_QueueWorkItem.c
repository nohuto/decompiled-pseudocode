/*
 * XREFs of CommonBuffer_QueueWorkItem @ 0x1400045B4
 * Callers:
 *     Control_Transfer_DetermineTransferMechanism @ 0x140003FE0 (Control_Transfer_DetermineTransferMechanism.c)
 *     Bulk_TransferData_DetermineTransferMechanism @ 0x140004180 (Bulk_TransferData_DetermineTransferMechanism.c)
 *     CommonBuffer_AcquireBuffer @ 0x140004358 (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AcquireBuffers @ 0x140018EF0 (CommonBuffer_AcquireBuffers.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

char __fastcall CommonBuffer_QueueWorkItem(struct _KEVENT *Context)
{
  char v2; // di
  struct _DEVICE_OBJECT *v3; // rax
  int v4; // edx
  struct _IO_WORKITEM *WorkItem; // rsi

  v2 = 0;
  v3 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 248))(
                                  WdfDriverGlobals,
                                  **(_QWORD **)&Context->Header.Lock);
  WorkItem = IoAllocateWorkItem(v3);
  if ( WorkItem )
  {
    KeClearEvent(Context + 1);
    IoQueueWorkItemEx(WorkItem, CommonBuffer_WorkItem, CriticalWorkQueue, Context);
    return 1;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 3;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)&Context->Header.Lock + 72LL),
      v4,
      8,
      15,
      (__int64)&WPP_6a5376b16cbf3dbdeb6b8133660a6549_Traceguids);
  }
  return v2;
}
