/*
 * XREFs of PopPdcDisengagePhases @ 0x140A390CC
 * Callers:
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140A370F0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A38AE8 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPdcDisengagePhases(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140E675A0 )
    return guard_dispatch_icall_no_overrides(qword_140E675A0, a2);
  return result;
}
