/*
 * XREFs of RaidUnitPauseTimerDpcRoutine @ 0x140028050
 * Callers:
 *     <none>
 * Callees:
 *     RaidResumeUnitQueue @ 0x140029480 (RaidResumeUnitQueue.c)
 *     RaidUnitRestartQueue @ 0x140029650 (RaidUnitRestartQueue.c)
 */

void __fastcall RaidUnitPauseTimerDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx

  v4 = DeferredContext[8];
  if ( (unsigned int)RaidResumeUnitQueue(v4) )
    RaidUnitRestartQueue(v4, 0LL);
}
