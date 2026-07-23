/*
 * XREFs of PspEvaluateAndNotifyEmptyJob @ 0x1409FF3F0
 * Callers:
 *     PspNotifyEmptyJobsInJobChain @ 0x1409FF1E4 (PspNotifyEmptyJobsInJobChain.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140A0717C (PspTerminateAllProcessesInJobHierarchy.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PspHardDereferenceSiloWorker @ 0x1403DEE90 (PspHardDereferenceSiloWorker.c)
 *     PspUnlockJobExclusive @ 0x1409FF694 (PspUnlockJobExclusive.c)
 *     PspLockJobExclusive @ 0x140A00154 (PspLockJobExclusive.c)
 *     PspSendReliableJobNotification @ 0x140AEB3B4 (PspSendReliableJobNotification.c)
 */

__int64 __fastcall PspEvaluateAndNotifyEmptyJob(PRKEVENT Event, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _LIST_ENTRY **p_Blink; // rax

  CurrentThread = KeGetCurrentThread();
  PspLockJobExclusive(Event, CurrentThread);
  p_Blink = &Event[60].Header.WaitListHead.Blink;
  if ( a2 )
    --*(_DWORD *)p_Blink;
  if ( !*(_DWORD *)p_Blink )
  {
    if ( _interlockedbittestandreset((volatile signed __int32 *)&Event[64].Header.WaitListHead.Blink, 7u) )
      KeSetEvent(Event, 0, 0);
    if ( !_interlockedbittestandset((volatile signed __int32 *)&Event[64].Header.WaitListHead.Blink, 0x15u) )
    {
      if ( a3 && *(_QWORD *)&Event[23].Header.Lock && (Event[46].Header.LockNV & 0x10) != 0 )
        PspSendReliableJobNotification(Event);
      if ( ((__int64)Event[10].Header.WaitListHead.Blink & 0x400000) != 0
        && !_interlockedbittestandset((volatile signed __int32 *)&Event[64].Header.WaitListHead.Blink, 0x1Du)
        && ((__int64)Event[64].Header.WaitListHead.Blink & 0x40000000) != 0 )
      {
        PspHardDereferenceSiloWorker((__int64)Event);
      }
    }
  }
  return PspUnlockJobExclusive(Event, CurrentThread);
}
