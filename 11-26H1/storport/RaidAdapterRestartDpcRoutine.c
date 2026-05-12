/*
 * XREFs of RaidAdapterRestartDpcRoutine @ 0x140065960
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterRestartQueues @ 0x140010F40 (RaidAdapterRestartQueues.c)
 */

void __fastcall RaidAdapterRestartDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  RaidAdapterRestartQueues(DeferredContext[8], 0);
}
