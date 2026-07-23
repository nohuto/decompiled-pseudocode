/*
 * XREFs of PopPdcEngagePhases @ 0x140B47040
 * Callers:
 *     PopPowerAggregatorEnterScreenOff @ 0x1409F46A8 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x140B46EB0 (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPdcEngagePhases(__int64 a1)
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140E677F8 )
    return guard_dispatch_icall_no_overrides(a1, qword_140E677F8);
  return result;
}
