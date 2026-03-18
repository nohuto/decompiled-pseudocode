/*
 * XREFs of PopCoolingTelemetryWorker @ 0x140435360
 * Callers:
 *     PopThermalTelemetryWorker @ 0x140435450 (PopThermalTelemetryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalRequestActiveActivity @ 0x14043661C (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140436950 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140B2F378 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140B41620 (PopThermalUpdateActiveTimeTracking.c)
 */

__int64 PopCoolingTelemetryWorker()
{
  struct _LIST_ENTRY *i; // rbx
  __int64 v2; // rdx
  struct _LIST_ENTRY *j; // rdi

  PopAcquireRwLockExclusive(&stru_140F10828.SavedApcStateFill[32]);
  for ( i = stru_140F10828.SavedApcState.ApcListHead[1].Flink;
        i != (struct _LIST_ENTRY *)&stru_140F10828.SavedApcStateFill[16];
        i = i->Flink )
  {
    if ( LOBYTE(i[4].Flink) )
    {
      PopAcquireRwLockExclusive(&i[2]);
      for ( j = i[1].Flink; j != &i[1]; j = j->Flink )
      {
        if ( BYTE2(j[1].Flink) )
        {
          if ( i[8].Blink )
          {
            LOBYTE(v2) = j[1].Flink;
            PopThermalUpdatePassiveTimeTracking(&j[2].Blink, v2);
            PopTraceThermalRequestPassiveHistogram(j);
          }
          if ( i[8].Flink )
          {
            LOBYTE(v2) = BYTE1(j[1].Flink) == 0;
            PopThermalUpdateActiveTimeTracking(&j[2].Blink, v2);
            PopTraceThermalRequestActiveActivity(j);
          }
        }
      }
      PopReleaseRwLock((struct _KTHREAD *)&i[2]);
    }
  }
  return PopReleaseRwLock((struct _KTHREAD *)&stru_140F10828.SavedApcStateFill[32]);
}
