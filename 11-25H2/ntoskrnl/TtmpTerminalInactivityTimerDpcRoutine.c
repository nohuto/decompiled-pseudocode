/*
 * XREFs of TtmpTerminalInactivityTimerDpcRoutine @ 0x1405D88C0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void __fastcall TtmpTerminalInactivityTimerDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( _InterlockedIncrement(&TtmpTerminalInactivityWorkCount) == 1 )
    ExQueueWorkItem(&TtmpTerminalInactivityWorkItem, DelayedWorkQueue);
}
