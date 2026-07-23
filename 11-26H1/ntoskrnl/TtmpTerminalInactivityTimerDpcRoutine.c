/*
 * XREFs of TtmpTerminalInactivityTimerDpcRoutine @ 0x1406172C0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void __fastcall TtmpTerminalInactivityTimerDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( _InterlockedIncrement((volatile signed __int32 *)&PsAltSystemCallRegistrationLock.ReadTransferCount) == 1 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&PsAltSystemCallRegistrationLock.SchedulerApcFill5[72], DelayedWorkQueue);
}
