/*
 * XREFs of PspEvaluateAndNotifyEmptyJob @ 0x140959B30
 * Callers:
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140958CB0 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspNotifyEmptyJobsInJobChain @ 0x140959924 (PspNotifyEmptyJobsInJobChain.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     PspHardDereferenceSiloWorker @ 0x1403DBCA0 (PspHardDereferenceSiloWorker.c)
 *     PspSendReliableJobNotification @ 0x140958424 (PspSendReliableJobNotification.c)
 *     PspUnlockJobExclusive @ 0x140959DD4 (PspUnlockJobExclusive.c)
 *     PspLockJobExclusive @ 0x14095A894 (PspLockJobExclusive.c)
 */

__int64 __fastcall PspEvaluateAndNotifyEmptyJob(char *Object, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  _DWORD *v7; // rax

  CurrentThread = KeGetCurrentThread();
  PspLockJobExclusive(Object, CurrentThread);
  v7 = Object + 1456;
  if ( a2 )
    --*v7;
  if ( !*v7 )
  {
    if ( _interlockedbittestandreset((volatile signed __int32 *)Object + 388, 7u) )
      KeSetEvent((PRKEVENT)Object, 0, 0);
    if ( !_interlockedbittestandset((volatile signed __int32 *)Object + 388, 0x15u) )
    {
      if ( a3 && *((_QWORD *)Object + 69) && (*((_DWORD *)Object + 276) & 0x10) != 0 )
        PspSendReliableJobNotification(Object, 4u);
      if ( (*((_DWORD *)Object + 64) & 0x400000) != 0
        && !_interlockedbittestandset((volatile signed __int32 *)Object + 388, 0x1Du)
        && (*((_DWORD *)Object + 388) & 0x40000000) != 0 )
      {
        PspHardDereferenceSiloWorker((__int64)Object);
      }
    }
  }
  return PspUnlockJobExclusive(Object, CurrentThread);
}
