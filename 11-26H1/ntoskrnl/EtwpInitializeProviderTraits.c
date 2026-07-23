/*
 * XREFs of EtwpInitializeProviderTraits @ 0x1408367C0
 * Callers:
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x14048BDA0 (KeInitializeGuardedMutex.c)
 */

void EtwpInitializeProviderTraits()
{
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)&stru_140F03830.SchedulerApcFill5[40]);
  *(_OWORD *)&stru_140F03830.SuspendEvent.Header.WaitListHead.Blink = 0LL;
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)&stru_140F03830.MutantListHead.Blink);
  *(_OWORD *)&stru_140F03830.PriorityFloorCounts[24] = 0LL;
}
