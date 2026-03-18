/*
 * XREFs of PopPowerLimitTelemetryWorker @ 0x140435524
 * Callers:
 *     PopThermalTelemetryWorker @ 0x140435450 (PopThermalTelemetryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopUpdatePowerLimitTimeTracking @ 0x140603A78 (PopUpdatePowerLimitTimeTracking.c)
 *     PopTracePowerLimitHistogram @ 0x140609CFC (PopTracePowerLimitHistogram.c)
 */

__int64 PopPowerLimitTelemetryWorker()
{
  struct _LIST_ENTRY *i; // rdi
  struct _LIST_ENTRY *j; // rbx
  unsigned int k; // esi

  PopAcquireRwLockExclusive(&stru_140F10828.648);
  for ( i = stru_140F10828.SchedulerApc.ApcListEntry.Flink;
        i != (struct _LIST_ENTRY *)&stru_140F10828.SchedulerApcFill5[16];
        i = i->Flink )
  {
    if ( LOBYTE(i[3].Flink) )
    {
      PopAcquireRwLockExclusive(&i[2]);
      for ( j = i[1].Flink; j != &i[1]; j = j->Flink )
      {
        if ( LOBYTE(j[1].Flink) && LOBYTE(j[3].Flink) )
        {
          for ( k = 0; k < LODWORD(j[2].Flink); ++k )
            PopUpdatePowerLimitTimeTracking(j, k);
          PopTracePowerLimitHistogram(j);
        }
      }
      PopReleaseRwLock((struct _KTHREAD *)&i[2]);
    }
  }
  return PopReleaseRwLock((struct _KTHREAD *)&stru_140F10828.648);
}
