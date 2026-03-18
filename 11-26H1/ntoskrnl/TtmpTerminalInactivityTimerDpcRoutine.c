/*
 * XREFs of TtmpTerminalInactivityTimerDpcRoutine @ 0x140614480
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall TtmpTerminalInactivityTimerDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( _InterlockedIncrement((volatile signed __int32 *)&PsAltSystemCallRegistrationLock.SavedApcStateFill[8]) == 1 )
    ExQueueWorkItem(
      (PWORK_QUEUE_ITEM)&PsAltSystemCallRegistrationLock.SuspendEvent.Header.WaitListHead,
      DelayedWorkQueue);
}
