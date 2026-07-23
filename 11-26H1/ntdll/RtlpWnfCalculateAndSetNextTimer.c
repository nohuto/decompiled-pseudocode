/*
 * XREFs of RtlpWnfCalculateAndSetNextTimer @ 0x18003ACE8
 * Callers:
 *     RtlpWnfNotificationThread @ 0x180039D50 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x180111120 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlpGetNextWnfNameSubscription @ 0x18011128C (RtlpGetNextWnfNameSubscription.c)
 *     RtlpGetFirstWnfNameSubscription @ 0x1801112E0 (RtlpGetFirstWnfNameSubscription.c)
 *     RtlpWnfSetRetryTimer @ 0x180138C88 (RtlpWnfSetRetryTimer.c)
 */

void RtlpWnfCalculateAndSetNextTimer()
{
  unsigned __int64 v0; // rdi
  int v1; // esi
  __int64 FirstWnfNameSubscription; // rbx
  unsigned __int64 *v3; // rax

  v0 = 0LL;
  v1 = 0;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_1801C6200 + 8));
  FirstWnfNameSubscription = RtlpGetFirstWnfNameSubscription();
  if ( FirstWnfNameSubscription )
  {
    do
    {
      RtlAcquireSRWLockShared((PRTL_SRWLOCK)(FirstWnfNameSubscription + 64));
      if ( *(_DWORD *)(FirstWnfNameSubscription + 124) == 2 )
      {
        v3 = (unsigned __int64 *)(FirstWnfNameSubscription + 136);
        if ( !v0 || *v3 < v0 )
        {
          v0 = *v3;
          v1 = 1;
        }
      }
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)(FirstWnfNameSubscription + 64));
      FirstWnfNameSubscription = RtlpGetNextWnfNameSubscription(FirstWnfNameSubscription);
    }
    while ( FirstWnfNameSubscription );
    if ( v1 )
      RtlpWnfSetRetryTimer(v0);
  }
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_1801C6200 + 8));
}
