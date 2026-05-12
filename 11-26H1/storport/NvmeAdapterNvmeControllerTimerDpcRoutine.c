/*
 * XREFs of NvmeAdapterNvmeControllerTimerDpcRoutine @ 0x1400EB350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NvmeAdapterNvmeControllerTimerDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _IO_WORKITEM *v5; // rcx
  IO_WORKITEM_ROUTINE *v6; // rdx
  WORK_QUEUE_TYPE v7; // r8d

  if ( Dpc == (struct _KDPC *)(DeferredContext + 43) )
  {
    v5 = (struct _IO_WORKITEM *)DeferredContext[18];
    v6 = (IO_WORKITEM_ROUTINE *)NvmeAdapterNvmeControllerBackgroundWork;
    v7 = DelayedWorkQueue;
  }
  else
  {
    if ( Dpc != (struct _KDPC *)(DeferredContext + 59) )
      return;
    v5 = (struct _IO_WORKITEM *)DeferredContext[19];
    v6 = (IO_WORKITEM_ROUTINE *)NvmeAdapterNvmeControllerKeepAliveWork;
    v7 = CriticalWorkQueue;
  }
  IoQueueWorkItem(v5, v6, v7, DeferredContext);
}
