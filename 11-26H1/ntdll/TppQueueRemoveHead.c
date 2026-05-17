/*
 * XREFs of TppQueueRemoveHead @ 0x1800CB8F0
 * Callers:
 *     TppWorkerFindTask @ 0x18003D370 (TppWorkerFindTask.c)
 *     TpReleasePool @ 0x1800CB610 (TpReleasePool.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 */

volatile signed __int64 *__fastcall TppQueueRemoveHead(volatile signed __int64 *a1, volatile signed __int64 **a2)
{
  volatile signed __int64 *v2; // rsi
  __int64 v3; // rbp
  char *SchedulerSharedDataSlot; // r8
  unsigned int i; // eax
  volatile signed __int64 *v7; // rbx
  volatile signed __int64 v8; // rax

  v2 = a1 + 2;
  v3 = 0LL;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      a2 = (volatile signed __int64 **)&SchedulerSharedDataSlot[8 * i];
      if ( !*a2 )
      {
        *a2 = v2;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    RtlpAcquireSRWLockExclusiveContended(v2, (__int64)a2);
  v7 = (volatile signed __int64 *)*a1;
  if ( *(volatile signed __int64 **)(*a1 + 8) != a1 || (v8 = *v7, *(volatile signed __int64 **)(*v7 + 8) != v7) )
    __fastfail(3u);
  *a1 = v8;
  *(_QWORD *)(v8 + 8) = a1;
  RtlReleaseSRWLockExclusive(v2);
  if ( v7 != a1 )
    return v7;
  return (volatile signed __int64 *)v3;
}
