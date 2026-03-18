/*
 * XREFs of CmpFreezeThawDpcRoutine @ 0x1406E26F0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall CmpFreezeThawDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)&WheapPfaLock.ApcStateFill[8], 1, 0) )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&CmpFreezeListLock.ApcStateFill[24], DelayedWorkQueue);
}
