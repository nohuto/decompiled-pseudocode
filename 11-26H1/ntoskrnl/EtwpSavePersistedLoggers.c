/*
 * XREFs of EtwpSavePersistedLoggers @ 0x14082EE88
 * Callers:
 *     EtwpKsrCallback @ 0x14082E370 (EtwpKsrCallback.c)
 * Callees:
 *     ExIsSoftBoot @ 0x14052A6C0 (ExIsSoftBoot.c)
 *     EtwpSavePersistedLoggersWorker @ 0x14082EEB8 (EtwpSavePersistedLoggersWorker.c)
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
