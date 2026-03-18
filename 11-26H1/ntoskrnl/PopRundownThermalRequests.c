/*
 * XREFs of PopRundownThermalRequests @ 0x140AC135C
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140AC0910 (PopDiagTraceControlCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceCoolingExtension @ 0x140AC1740 (PopDiagTraceCoolingExtension.c)
 *     PopDiagTraceThermalRequest @ 0x140AC18EC (PopDiagTraceThermalRequest.c)
 */

__int64 __fastcall PopRundownThermalRequests(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  struct _LIST_ENTRY *i; // rbx
  struct _LIST_ENTRY *j; // rdi

  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F10828.SavedApcState.Process, a2, a3, a4);
  for ( i = stru_140F10828.SavedApcState.ApcListHead[1].Flink;
        i != (struct _LIST_ENTRY *)&stru_140F10828.SavedApcStateFill[16];
        i = i->Flink )
  {
    if ( LOBYTE(i[4].Flink) )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)&i[2], v4, v5, v6);
      PopDiagTraceCoolingExtension(i, POP_ETW_EVENT_COOLING_EXTENSION_RUNDOWN);
      for ( j = i[1].Flink; j != &i[1]; j = j->Flink )
      {
        if ( BYTE2(j[1].Flink) )
          PopDiagTraceThermalRequest(j, POP_ETW_EVENT_THERMAL_REQUEST_RUNDOWN);
      }
      PopReleaseRwLock((struct _KTHREAD *)&i[2]);
    }
  }
  return PopReleaseRwLock((struct _KTHREAD *)&stru_140F10828.SavedApcStateFill[32]);
}
