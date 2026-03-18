/*
 * XREFs of EtwpInitializeProviderTraits @ 0x140830580
 * Callers:
 *     EtwpInitialize @ 0x140CE08F4 (EtwpInitialize.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x140492250 (KeInitializeGuardedMutex.c)
 */

void EtwpInitializeProviderTraits()
{
  KeInitializeGuardedMutex(&unk_140F03500);
  *(_OWORD *)&xmmword_140F03580 = 0LL;
  KeInitializeGuardedMutex(&unk_140F03540);
  *(_OWORD *)&EtwpSecurityLock.SchedulerApcFill5[56] = 0LL;
}
