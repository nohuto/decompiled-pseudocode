/*
 * XREFs of PpmCheckBeginNewAccountingPeriod @ 0x140256C34
 * Callers:
 *     PpmCheckQueuePhaseActions @ 0x140252698 (PpmCheckQueuePhaseActions.c)
 *     PpmCheckRun @ 0x140256BB0 (PpmCheckRun.c)
 *     PpmCheckQueueControlAction @ 0x1402577FC (PpmCheckQueueControlAction.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 */

__int64 __fastcall PpmCheckBeginNewAccountingPeriod(struct _LIST_ENTRY *a1)
{
  unsigned __int64 InterruptTimePrecise; // r9
  unsigned __int64 v3; // r8
  struct _LIST_ENTRY *Blink; // rdx
  __int64 result; // rax
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v6);
  if ( InterruptTimePrecise <= *(_QWORD *)&PopSleepstudySessionLock.PriorityFloorCounts[8] )
    v3 = 0LL;
  else
    v3 = InterruptTimePrecise - *(_QWORD *)&PopSleepstudySessionLock.PriorityFloorCounts[8];
  Blink = PopSleepstudySessionLock.SavedApcState.ApcListHead[0].Blink;
  result = 0xFFFFFFFFLL;
  *(_QWORD *)&PopSleepstudySessionLock.PriorityFloorCounts[8] = InterruptTimePrecise;
  PopSleepstudySessionLock.SavedApcState.ApcListHead[0].Blink = a1;
  if ( v3 + LODWORD(Blink->Flink) < 0xFFFFFFFF )
    result = v3 + LODWORD(Blink->Flink);
  LODWORD(Blink->Flink) = result;
  return result;
}
