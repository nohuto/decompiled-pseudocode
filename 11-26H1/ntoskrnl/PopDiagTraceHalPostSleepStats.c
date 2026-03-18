/*
 * XREFs of PopDiagTraceHalPostSleepStats @ 0x1407D3654
 * Callers:
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN PopDiagTraceHalPostSleepStats()
{
  BOOLEAN result; // al
  __int128 v1; // [rsp+38h] [rbp-31h]
  __int64 v2; // [rsp+48h] [rbp-21h]

  result = 0;
  v1 = 0LL;
  v2 = 0LL;
  if ( byte_140E67628 )
  {
    result = EtwEventEnabled(
               *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
               &POP_ETW_EVENT_HAL_POST_SLEEP_STATS);
    if ( result )
      return guard_dispatch_icall_no_overrides(60LL, 24LL);
  }
  return result;
}
