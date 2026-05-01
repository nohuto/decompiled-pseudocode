/*
 * XREFs of CrmStateMonitorResourceUsageTimerCallback @ 0x18001F420
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorResourceUsagePoll @ 0x18001F4C8 (CrmStateMonitorResourceUsagePoll.c)
 */

__int64 __fastcall CrmStateMonitorResourceUsageTimerCallback(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  CrmStateMonitorResourceUsagePoll(a2, 0LL, 0LL);
  RtlAcquireSRWLockExclusive(a2 + 8);
  *(_DWORD *)(a2 + 16) = GetCurrentThreadId();
  if ( (unsigned int)TpIsTimerSet(*(_QWORD *)(a2 + 88)) )
  {
    v3 = *(_QWORD *)(a2 + 88);
    v5 = -100000000LL;
    TpSetTimer(v3, &v5, 0LL, 2000LL);
  }
  *(_DWORD *)(a2 + 16) = 0;
  return RtlReleaseSRWLockExclusive(a2 + 8);
}
