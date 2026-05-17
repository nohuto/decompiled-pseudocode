/*
 * XREFs of RtlpWnfRetryTimerCallback @ 0x1801115A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004FC80 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpGetNextWnfNameSubscription @ 0x18011170C (RtlpGetNextWnfNameSubscription.c)
 *     RtlpGetFirstWnfNameSubscription @ 0x180111760 (RtlpGetFirstWnfNameSubscription.c)
 */

struct _TEB *RtlpWnfRetryTimerCallback()
{
  __int64 v0; // rcx
  __int64 v1; // rdi
  unsigned __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 i; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  volatile signed __int64 *v7; // rbp
  _DWORD v9[10]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0;
  v9[0] = 0;
  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_1801C7200 + 8));
  v0 = qword_1801C7200;
  *(_QWORD *)(qword_1801C7200 + 80) = 0LL;
  RtlReleaseSRWLockShared((volatile signed __int64 *)(v0 + 8));
  while ( 1 )
  {
    v1 = 0LL;
    v2 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0] + 500000;
    RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_1801C7200 + 8));
    for ( i = RtlpGetFirstWnfNameSubscription(v3); ; i = RtlpGetNextWnfNameSubscription(v6) )
    {
      v6 = i;
      if ( !i )
        break;
      v7 = (volatile signed __int64 *)(i + 64);
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(i + 64), v5);
      if ( *(_DWORD *)(v6 + 124) == 2 && v2 >= *(_QWORD *)(v6 + 136) )
      {
        v1 = *(_QWORD *)(v6 + 128);
        *(_QWORD *)(v6 + 128) = 0LL;
        *(_DWORD *)(v6 + 124) = 0;
        RtlReleaseSRWLockExclusive(v7);
        break;
      }
      RtlReleaseSRWLockExclusive(v7);
    }
    RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_1801C7200 + 8));
    if ( !v1 )
      return RtlpWnfCalculateAndSetNextTimer();
    RtlpWnfProcessCurrentDescriptor(v1, 1, &v10, v9);
    if ( v10 )
      RtlFreeHeap_0();
  }
}
