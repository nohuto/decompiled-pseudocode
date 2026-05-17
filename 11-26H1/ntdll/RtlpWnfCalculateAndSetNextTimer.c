/*
 * XREFs of RtlpWnfCalculateAndSetNextTimer @ 0x180050768
 * Callers:
 *     RtlpWnfNotificationThread @ 0x18004F7D0 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x1801115A0 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     RtlpGetNextWnfNameSubscription @ 0x18011170C (RtlpGetNextWnfNameSubscription.c)
 *     RtlpGetFirstWnfNameSubscription @ 0x180111760 (RtlpGetFirstWnfNameSubscription.c)
 *     RtlpWnfSetRetryTimer @ 0x180138F18 (RtlpWnfSetRetryTimer.c)
 */

struct _TEB *RtlpWnfCalculateAndSetNextTimer()
{
  unsigned __int64 v0; // rdi
  int v1; // esi
  __int64 FirstWnfNameSubscription; // rbx
  unsigned __int64 *v3; // rax

  v0 = 0LL;
  v1 = 0;
  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_1801C7200 + 8));
  FirstWnfNameSubscription = RtlpGetFirstWnfNameSubscription();
  if ( FirstWnfNameSubscription )
  {
    do
    {
      RtlAcquireSRWLockShared((volatile signed __int64 *)(FirstWnfNameSubscription + 64));
      if ( *(_DWORD *)(FirstWnfNameSubscription + 124) == 2 )
      {
        v3 = (unsigned __int64 *)(FirstWnfNameSubscription + 136);
        if ( !v0 || *v3 < v0 )
        {
          v0 = *v3;
          v1 = 1;
        }
      }
      RtlReleaseSRWLockShared((volatile signed __int64 *)(FirstWnfNameSubscription + 64));
      FirstWnfNameSubscription = RtlpGetNextWnfNameSubscription(FirstWnfNameSubscription);
    }
    while ( FirstWnfNameSubscription );
    if ( v1 )
      RtlpWnfSetRetryTimer(v0);
  }
  return RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_1801C7200 + 8));
}
