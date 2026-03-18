/*
 * XREFs of PopRundownPowerLimitRequests @ 0x140AC1560
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140AC0910 (PopDiagTraceControlCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopDiagTracePowerLimitExtension @ 0x1407D3F9C (PopDiagTracePowerLimitExtension.c)
 *     PopDiagTracePowerLimitRequest @ 0x1407D4330 (PopDiagTracePowerLimitRequest.c)
 */

__int64 __fastcall PopRundownPowerLimitRequests(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  struct _LIST_ENTRY *i; // rbx
  __int64 j; // rdi

  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F10828.SchedulerApc.Type, a2, a3, a4);
  for ( i = stru_140F10828.SchedulerApc.ApcListEntry.Flink;
        i != (struct _LIST_ENTRY *)&stru_140F10828.SchedulerApcFill5[16];
        i = i->Flink )
  {
    if ( LOBYTE(i[3].Flink) )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)&i[2], v4, v5, v6);
      PopDiagTracePowerLimitExtension((__int64)i, (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_POWER_LIMIT_EXTENSION_RUNDOWN);
      for ( j = (__int64)i[1].Flink; (struct _LIST_ENTRY *)j != &i[1]; j = *(_QWORD *)j )
      {
        if ( *(_BYTE *)(j + 16) )
          PopDiagTracePowerLimitRequest(j, (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_POWER_LIMIT_REQUEST_RUNDOWN);
      }
      PopReleaseRwLock((struct _KTHREAD *)&i[2]);
    }
  }
  return PopReleaseRwLock((struct _KTHREAD *)&stru_140F10828.648);
}
