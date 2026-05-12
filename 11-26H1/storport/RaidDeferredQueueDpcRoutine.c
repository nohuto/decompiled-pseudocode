/*
 * XREFs of RaidDeferredQueueDpcRoutine @ 0x14002AA10
 * Callers:
 *     <none>
 * Callees:
 *     RaidProcessDeferredItemsWorker @ 0x14002AA2C (RaidProcessDeferredItemsWorker.c)
 */

void __fastcall RaidDeferredQueueDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  RaidProcessDeferredItemsWorker(SystemArgument1, DeferredContext, 0LL);
}
