/*
 * XREFs of EtwpSavePersistedLoggers @ 0x1408350C8
 * Callers:
 *     EtwpKsrCallback @ 0x1408345B0 (EtwpKsrCallback.c)
 * Callees:
 *     ExIsSoftBoot @ 0x14052CBE0 (ExIsSoftBoot.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1408350F8 (EtwpSavePersistedLoggersWorker.c)
 */

char EtwpSavePersistedLoggers()
{
  signed __int32 v0; // eax

  LOBYTE(v0) = ExIsSoftBoot();
  if ( (_BYTE)v0 )
  {
    v0 = _InterlockedCompareExchange((volatile signed __int32 *)&PspSiloMonitorLock.SchedulerApcFill5[40], 1, 0);
    if ( !v0 )
      LOBYTE(v0) = EtwpSavePersistedLoggersWorker();
  }
  return v0;
}
