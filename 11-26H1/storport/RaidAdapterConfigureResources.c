/*
 * XREFs of RaidAdapterConfigureResources @ 0x14005AF28
 * Callers:
 *     RaidAdapterStartDevice @ 0x140068EBC (RaidAdapterStartDevice.c)
 * Callees:
 *     RaidInitializeDeferredQueue @ 0x140072180 (RaidInitializeDeferredQueue.c)
 *     RaidInitializeResourceList @ 0x140183EB8 (RaidInitializeResourceList.c)
 *     RaidDeleteResourceList @ 0x140183F14 (RaidDeleteResourceList.c)
 *     RaInitializeBus @ 0x1401B9A44 (RaInitializeBus.c)
 */

__int64 __fastcall RaidAdapterConfigureResources(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v8; // r8

  v3 = a1 + 360;
  RaidDeleteResourceList(a1 + 360);
  result = RaidInitializeResourceList(v3, a2, a3);
  if ( (int)result >= 0 )
  {
    if ( (unsigned int)RaInitializeBus(a1 + 792, *(_QWORD *)(a1 + 24)) != -1073741637 || (*(_BYTE *)(a1 + 104) & 8) != 0 )
    {
      if ( *(char *)(a1 + 110) >= 0 )
        RaidInitializeDeferredQueue(a1 + 1072, *(_QWORD *)(a1 + 8), v8, 80LL, RaidAdapterDeferredRoutine);
      KeInitializeDpc((PRKDPC)(a1 + 1584), (PKDEFERRED_ROUTINE)RaidpAdapterTimerDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1712), RaidPauseTimerDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1912), RaidCompletionDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 4264), RaidPauseTimerDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1976), RaidAdapterBusChangeDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1776), RaidAdapterRestartDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 5528), (PKDEFERRED_ROUTINE)RaidQueueWaitCheckDpcRoutine, *(PVOID *)(a1 + 8));
      return 0LL;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
