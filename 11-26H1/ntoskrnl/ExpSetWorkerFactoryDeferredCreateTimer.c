/*
 * XREFs of ExpSetWorkerFactoryDeferredCreateTimer @ 0x140AEF394
 * Callers:
 *     ExpWorkerFactoryCheckCreate @ 0x1402C2B40 (ExpWorkerFactoryCheckCreate.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219B40 (KeSetCoalescableTimer.c)
 */

void __fastcall ExpSetWorkerFactoryDeferredCreateTimer(signed __int32 a1)
{
  void *Object; // rdx
  ULONG v2; // r9d
  signed __int32 i; // r8d
  signed __int32 v4; // eax

  switch ( a1 )
  {
    case 1:
      Object = WheapConfigTableLock.WaitBlock[1].Object;
      v2 = 500;
      break;
    case 2:
      Object = WheapConfigTableLock.WaitBlock[1].SparePtr;
      v2 = 120;
      break;
    case 3:
      Object = WheapConfigTableLock.WaitBlock[2].WaitListEntry.Flink;
      v2 = 30;
      break;
    default:
      Object = 0LL;
      v2 = 0;
      break;
  }
  _m_prefetchw(&WheapConfigTableLock.SavedApcStateFill[40]);
  for ( i = *(_DWORD *)&WheapConfigTableLock.SavedApcStateFill[40]; a1 > i; i = v4 )
  {
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)&WheapConfigTableLock.SavedApcStateFill[40], a1, i);
    if ( i == v4 )
    {
      KeSetCoalescableTimer((PKTIMER)&WheapConfigTableLock.WaitBlockFill11[128], (LARGE_INTEGER)Object, 0, v2, 0LL);
      return;
    }
  }
}
