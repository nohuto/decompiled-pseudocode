/*
 * XREFs of PopPowerLimitSxTransition @ 0x140529A8C
 * Callers:
 *     PopThermalSxEntry @ 0x1404351B4 (PopThermalSxEntry.c)
 *     PopThermalSxExit @ 0x140435AC4 (PopThermalSxExit.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopUpdatePowerLimitTimeTracking @ 0x140603A78 (PopUpdatePowerLimitTimeTracking.c)
 *     PopTracePowerLimitHistogram @ 0x140609CFC (PopTracePowerLimitHistogram.c)
 */

__int64 __fastcall PopPowerLimitSxTransition(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  struct _LIST_ENTRY *i; // rdi
  struct _LIST_ENTRY *j; // rbx
  unsigned int k; // esi
  unsigned int v11; // edx
  __int64 m; // r8
  __int64 v13; // rax

  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F10828.SchedulerApc.Type, a2, a3, a4);
  for ( i = stru_140F10828.SchedulerApc.ApcListEntry.Flink;
        i != (struct _LIST_ENTRY *)&stru_140F10828.SchedulerApcFill5[16];
        i = i->Flink )
  {
    if ( LOBYTE(i[3].Flink) )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)&i[2], v5, v6, v7);
      for ( j = i[1].Flink; j != &i[1]; j = j->Flink )
      {
        if ( LOBYTE(j[1].Flink) )
        {
          if ( a1 )
          {
            for ( k = 0; k < LODWORD(j[2].Flink); ++k )
              PopUpdatePowerLimitTimeTracking(j, k);
            PopTracePowerLimitHistogram(j);
            LOBYTE(j[3].Flink) = 0;
          }
          else
          {
            v11 = 0;
            for ( m = MEMORY[0xFFFFF78000000008]; v11 < LODWORD(j[2].Flink); *((_QWORD *)&j[3].Blink->Flink + 13 * v13) = m )
              v13 = v11++;
            LOBYTE(j[3].Flink) = 1;
          }
        }
      }
      PopReleaseRwLock((struct _KTHREAD *)&i[2]);
    }
  }
  return PopReleaseRwLock((struct _KTHREAD *)&stru_140F10828.648);
}
