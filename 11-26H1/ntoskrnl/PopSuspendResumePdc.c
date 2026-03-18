/*
 * XREFs of PopSuspendResumePdc @ 0x140A37334
 * Callers:
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1407D6FF0 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140A37360 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopSuspendResumePdc(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140E67560;
  if ( qword_140E67560 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
