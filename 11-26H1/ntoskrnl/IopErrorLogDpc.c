/*
 * XREFs of IopErrorLogDpc @ 0x1405D7600
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopErrorLogDpc(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  if ( Dpc )
    ExFreePoolWithTag(Dpc, 0);
  IopErrorLogWorkItem.Parameter = 0LL;
  IopErrorLogWorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopErrorLogThread;
  IopErrorLogWorkItem.List.Flink = 0LL;
  ExQueueWorkItem(&IopErrorLogWorkItem, DelayedWorkQueue);
}
