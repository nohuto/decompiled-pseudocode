/*
 * XREFs of PopPdcEngagePhases @ 0x140B45340
 * Callers:
 *     PopPowerAggregatorEnterScreenOff @ 0x140A38AE8 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x140B451B0 (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPdcEngagePhases(__int64 a1)
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140E67598 )
    return guard_dispatch_icall_no_overrides(a1, qword_140E67598);
  return result;
}
