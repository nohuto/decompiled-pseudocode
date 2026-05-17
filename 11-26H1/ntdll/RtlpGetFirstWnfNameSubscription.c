/*
 * XREFs of RtlpGetFirstWnfNameSubscription @ 0x180111760
 * Callers:
 *     RtlpWnfCalculateAndSetNextTimer @ 0x180050768 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpWnfRetryTimerCallback @ 0x1801115A0 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     <none>
 */

__int64 RtlpGetFirstWnfNameSubscription()
{
  __int64 v0; // rcx
  __int64 v1; // rax

  v0 = *(_QWORD *)(qword_1801C7200 + 24);
  if ( (v0 & 1) != 0 )
  {
    if ( v0 == 1 )
      return 0LL;
    v1 = v0 ^ ((qword_1801C7200 + 16) | 1);
  }
  else
  {
    v1 = *(_QWORD *)(qword_1801C7200 + 24);
  }
  return (v1 - 32) & -(__int64)(v1 != 0);
}
