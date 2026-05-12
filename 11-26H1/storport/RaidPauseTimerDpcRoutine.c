/*
 * XREFs of RaidPauseTimerDpcRoutine @ 0x14006CF40
 * Callers:
 *     <none>
 * Callees:
 *     RaidResumeAdapterQueue @ 0x140010650 (RaidResumeAdapterQueue.c)
 *     RaidAdapterRestartQueues @ 0x140010F40 (RaidAdapterRestartQueues.c)
 */

void __fastcall RaidPauseTimerDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        __int64 SystemArgument2)
{
  __int64 v4; // rbx

  v4 = DeferredContext[8];
  if ( !(unsigned int)RaidResumeAdapterQueue(v4, 0LL, 0LL, SystemArgument2) )
    RaidAdapterRestartQueues(v4, 0);
}
