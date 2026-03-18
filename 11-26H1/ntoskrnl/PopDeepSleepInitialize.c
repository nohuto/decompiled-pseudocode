/*
 * XREFs of PopDeepSleepInitialize @ 0x140CD3040
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void (*__fastcall PopDeepSleepInitialize(int a1))()
{
  void (*result)(); // rax

  if ( a1 )
  {
    if ( a1 == 3 && !stru_140F10828.WaitBlockFill5[44] )
      *(_DWORD *)&PopWeakChargerLock.SchedulerApcFill5[72] |= 2u;
  }
  else
  {
    result = PopDeepSleepEvaluateCallback;
    *(_DWORD *)&PopWeakChargerLock.SchedulerApcFill5[72] = 65;
    PopWeakChargerLock.SchedulerApc.NormalContext = PopDeepSleepEvaluateCallback;
    PopWeakChargerLock.SchedulerApc.SystemArgument1 = 0LL;
    PopWeakChargerLock.SchedulerApc.Reserved[1] = 0LL;
  }
  return result;
}
