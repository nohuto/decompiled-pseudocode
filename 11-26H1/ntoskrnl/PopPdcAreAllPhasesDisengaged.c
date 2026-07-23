/*
 * XREFs of PopPdcAreAllPhasesDisengaged @ 0x1409F540C
 * Callers:
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1409F4630 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopArmIdlePhaseWatchdog @ 0x1409F52D8 (PopArmIdlePhaseWatchdog.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopPdcAreAllPhasesDisengaged(__int64 a1, __int64 a2)
{
  char result; // al

  result = 1;
  if ( qword_140E67810 )
    return guard_dispatch_icall_no_overrides(qword_140E67810, a2);
  return result;
}
