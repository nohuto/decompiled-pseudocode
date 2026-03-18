/*
 * XREFs of PopThermalSxExit @ 0x140435AC4
 * Callers:
 *     PopPolicyWorkerAction @ 0x140A37680 (PopPolicyWorkerAction.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 *     PopPowerLimitSxTransition @ 0x140529A8C (PopPowerLimitSxTransition.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 */

__int64 PopThermalSxExit()
{
  __int64 result; // rax
  KIRQL v1; // al
  void **i; // rdi
  void *v3; // rax
  struct _LIST_ENTRY *j; // rbx
  struct _LIST_ENTRY *k; // rcx
  struct _LIST_ENTRY *v6; // rax

  result = (unsigned int)_InterlockedExchange((volatile __int32 *)&stru_140F0F620.WpsFeedback, 0);
  if ( (_DWORD)result )
  {
    if ( LOBYTE(stru_140F10828.OtherOperationCount) )
    {
      PopAcquireRwLockExclusive(&stru_140F0F620.Spare35[1]);
      if ( BYTE2(stru_140F0F620.SystemAffinityTokenListHead.Next) )
      {
        BYTE2(stru_140F0F620.SystemAffinityTokenListHead.Next) = 0;
        ZwUpdateWnfStateData(&WNF_PO_THERMAL_HIBERNATE_OCCURRED, 0LL, 0LL, 0LL, 0LL, 0, 0);
      }
      PopReleaseRwLock((struct _KTHREAD *)&stru_140F0F620.Spare35[1]);
      v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F0F620.SchedulerApc.ApcListEntry.Blink);
      stru_140F0F620.SchedulerApcFill3[32] = 1;
      *(_DWORD *)&stru_140F0F620.SchedulerApcFill5[36] = -1;
      KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F0F620.SchedulerApc.ApcListEntry.Blink, v1);
    }
    PopAcquireRwLockShared(&unk_140F10E30);
    for ( i = (void **)stru_140F10828.FirstArgument; i != &stru_140F10828.FirstArgument; i = (void **)*i )
    {
      PopAcquireRwLockExclusive(i + 54);
      v3 = (void *)MEMORY[0xFFFFF78000000008];
      i[64] = (void *)MEMORY[0xFFFFF78000000008];
      i[65] = v3;
      *((_BYTE *)i + 504) = 0;
      PopReleaseRwLock((struct _KTHREAD *)(i + 54));
    }
    PopReleaseRwLock(&unk_140F10E30);
    PopAcquireRwLockExclusive(&stru_140F10828.SavedApcStateFill[32]);
    for ( j = stru_140F10828.SavedApcState.ApcListHead[1].Flink;
          j != (struct _LIST_ENTRY *)&stru_140F10828.SavedApcStateFill[16];
          j = j->Flink )
    {
      if ( LOBYTE(j[4].Flink) )
      {
        PopAcquireRwLockExclusive(&j[2]);
        for ( k = j[1].Flink; k != &j[1]; k = k->Flink )
        {
          if ( BYTE2(k[1].Flink) )
          {
            v6 = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000008];
            k[3].Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000008];
            k[3].Blink = v6;
            LOBYTE(k[2].Blink) = 0;
          }
        }
        PopReleaseRwLock((struct _KTHREAD *)&j[2]);
      }
    }
    PopReleaseRwLock((struct _KTHREAD *)&stru_140F10828.SavedApcStateFill[32]);
    PopPowerLimitSxTransition(0LL);
    PopAcquireRwLockExclusive(&stru_140F0F620.Spare35[1]);
    LOBYTE(stru_140F0F620.SystemAffinityTokenListHead.Next) = 1;
    if ( BYTE1(stru_140F0F620.SystemAffinityTokenListHead.Next)
      || BYTE3(stru_140F0F620.SystemAffinityTokenListHead.Next) )
    {
      PopQueueWorkItem(&stru_140F0F620.SavedApcStateFill[8], 1LL);
    }
    return PopReleaseRwLock((struct _KTHREAD *)&stru_140F0F620.Spare35[1]);
  }
  return result;
}
