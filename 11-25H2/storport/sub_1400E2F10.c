/*
 * XREFs of sub_1400E2F10 @ 0x1400E2F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_1400E2F10(struct _KDPC *Dpc, _QWORD *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  struct _IO_WORKITEM *v5; // rcx
  IO_WORKITEM_ROUTINE *v6; // rdx
  WORK_QUEUE_TYPE v7; // r8d

  if ( Dpc == (struct _KDPC *)(DeferredContext + 43) )
  {
    v5 = (struct _IO_WORKITEM *)DeferredContext[18];
    v6 = (IO_WORKITEM_ROUTINE *)sub_1400E22C0;
    v7 = DelayedWorkQueue;
  }
  else
  {
    if ( Dpc != (struct _KDPC *)(DeferredContext + 59) )
      return;
    v5 = (struct _IO_WORKITEM *)DeferredContext[19];
    v6 = (IO_WORKITEM_ROUTINE *)sub_1400E2610;
    v7 = CriticalWorkQueue;
  }
  IoQueueWorkItem(v5, v6, v7, DeferredContext);
}
