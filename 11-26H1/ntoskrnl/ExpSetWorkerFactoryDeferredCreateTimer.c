/*
 * XREFs of ExpSetWorkerFactoryDeferredCreateTimer @ 0x140AF2334
 * Callers:
 *     ExpWorkerFactoryCheckCreate @ 0x14030D800 (ExpWorkerFactoryCheckCreate.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219CA0 (KeSetCoalescableTimer.c)
 */

void __fastcall ExpSetWorkerFactoryDeferredCreateTimer(signed __int32 a1)
{
  void *Blink; // rdx
  ULONG v2; // r9d
  signed __int32 i; // r8d
  signed __int32 v4; // eax

  switch ( a1 )
  {
    case 1:
      Blink = WheapConfigTableLock.SavedApcState.ApcListHead[1].Blink;
      v2 = 500;
      break;
    case 2:
      Blink = WheapConfigTableLock.SavedApcState.Process;
      v2 = 120;
      break;
    case 3:
      Blink = *(void **)&WheapConfigTableLock.WaitBlockFill11[160];
      v2 = 30;
      break;
    default:
      Blink = 0LL;
      v2 = 0;
      break;
  }
  _m_prefetchw(&WheapConfigTableLock.SchedulerApcFill5[56]);
  for ( i = *(_DWORD *)&WheapConfigTableLock.SchedulerApcFill5[56]; a1 > i; i = v4 )
  {
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)&WheapConfigTableLock.SchedulerApcFill5[56], a1, i);
    if ( i == v4 )
    {
      KeSetCoalescableTimer((PKTIMER)&WheapConfigTableLock.512, (LARGE_INTEGER)Blink, 0, v2, 0LL);
      return;
    }
  }
}
