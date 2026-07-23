/*
 * XREFs of PopDiagTraceHalPostSleepStats @ 0x1407D67D4
 * Callers:
 *     PopIssueActionRequest @ 0x1409F3438 (PopIssueActionRequest.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN PopDiagTraceHalPostSleepStats()
{
  BOOLEAN result; // al
  __int128 v1; // [rsp+38h] [rbp-31h]
  __int64 v2; // [rsp+48h] [rbp-21h]

  result = 0;
  v1 = 0LL;
  v2 = 0LL;
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_HAL_POST_SLEEP_STATS);
    if ( result )
      return guard_dispatch_icall_no_overrides(60LL, 24LL);
  }
  return result;
}
