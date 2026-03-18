/*
 * XREFs of PopPdcAreAllPhasesDisengaged @ 0x140A39804
 * Callers:
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x140A38A70 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopArmIdlePhaseWatchdog @ 0x140A396D0 (PopArmIdlePhaseWatchdog.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopPdcAreAllPhasesDisengaged(__int64 a1, __int64 a2)
{
  char result; // al

  result = 1;
  if ( qword_140E675B0 )
    return guard_dispatch_icall_no_overrides(qword_140E675B0, a2);
  return result;
}
