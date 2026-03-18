/*
 * XREFs of DpiMiracastConnectedStandbyDelayTimerDpc @ 0x140087C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiMiracastConnectedStandbyDelayTimerDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _IO_WORKITEM *v4; // rax

  v4 = (struct _IO_WORKITEM *)_InterlockedCompareExchange64(
                                &qword_140169340,
                                qword_140169340 | 1,
                                qword_140169340 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( ((unsigned __int8)v4 & 1) == 0 )
    IoQueueWorkItem(v4, DpiMiracastConnectedStandbyDelayWork, DelayedWorkQueue, 0LL);
}
