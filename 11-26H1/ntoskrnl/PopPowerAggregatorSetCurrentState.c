/*
 * XREFs of PopPowerAggregatorSetCurrentState @ 0x1409F48F0
 * Callers:
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1407D9690 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x1407D99CC (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1407DA120 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x1409F2F20 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x1409F44A0 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1409F4630 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x1409F46A8 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x1409F48A0 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 * Callees:
 *     PopPowerAggregatorDiagTraceInternalStateChange @ 0x1409F4974 (PopPowerAggregatorDiagTraceInternalStateChange.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x1409FBB74 (PopPowerAggregatorAllocateLogEntry.c)
 */

__int64 __fastcall PopPowerAggregatorSetCurrentState(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rbx
  __int64 result; // rax
  __int128 v6; // xmm1

  v2 = (_OWORD *)(a1 + 56);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 24);
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 32);
  PopPowerAggregatorDiagTraceInternalStateChange(a1 + 56);
  result = PopPowerAggregatorAllocateLogEntry(a1, 2LL);
  *(_OWORD *)(result + 24) = *v2;
  *(_OWORD *)(result + 40) = v2[1];
  *(_OWORD *)(result + 56) = *(_OWORD *)a2;
  *(_OWORD *)(result + 72) = *(_OWORD *)(a2 + 16);
  *v2 = *(_OWORD *)a2;
  v6 = *(_OWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 8) |= 2u;
  v2[1] = v6;
  return result;
}
