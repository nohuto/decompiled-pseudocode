/*
 * XREFs of PopPdcDisengagePhases @ 0x1409F4C8C
 * Callers:
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x1409F2CB0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x1409F46A8 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPdcDisengagePhases(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140E67800 )
    return guard_dispatch_icall_no_overrides(qword_140E67800, a2);
  return result;
}
