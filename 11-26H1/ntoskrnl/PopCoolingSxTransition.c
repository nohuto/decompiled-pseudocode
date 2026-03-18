/*
 * XREFs of PopCoolingSxTransition @ 0x1404359C0
 * Callers:
 *     PopThermalSxEntry @ 0x1404351B4 (PopThermalSxEntry.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalRequestActiveActivity @ 0x14043661C (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140436950 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140B2F378 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140B41620 (PopThermalUpdateActiveTimeTracking.c)
 */

__int64 __fastcall PopCoolingSxTransition(char a1)
{
  struct _LIST_ENTRY *i; // rdi
  __int64 v3; // rdx
  struct _LIST_ENTRY *j; // rbx
  struct _LIST_ENTRY *v6; // rax

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
          if ( a1 )
          {
            if ( i[8].Blink )
            {
              LOBYTE(v3) = j[1].Flink;
              PopThermalUpdatePassiveTimeTracking(&j[2].Blink, v3);
              PopTraceThermalRequestPassiveHistogram(j);
            }
            if ( i[8].Flink )
            {
              LOBYTE(v3) = BYTE1(j[1].Flink) == 0;
              PopThermalUpdateActiveTimeTracking(&j[2].Blink, v3);
              PopTraceThermalRequestActiveActivity(j);
            }
            LOBYTE(j[2].Blink) = 1;
          }
          else
          {
            v6 = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000008];
            j[3].Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000008];
            j[3].Blink = v6;
            LOBYTE(j[2].Blink) = 0;
          }
        }
      }
      PopReleaseRwLock((struct _KTHREAD *)&i[2]);
    }
  }
  return PopReleaseRwLock((struct _KTHREAD *)&stru_140F10828.SavedApcStateFill[32]);
}
