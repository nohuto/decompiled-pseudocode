/*
 * XREFs of PopSuspendResumePdc @ 0x1409F2EF4
 * Callers:
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1407DA120 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x1409F2F20 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopSuspendResumePdc(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140E677C0;
  if ( qword_140E677C0 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
