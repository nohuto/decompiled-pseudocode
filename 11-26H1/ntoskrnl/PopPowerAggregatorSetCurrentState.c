/*
 * XREFs of PopPowerAggregatorSetCurrentState @ 0x140A38D30
 * Callers:
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1407D64E0 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x1407D683C (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1407D6FF0 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140A37360 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140A388E0 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x140A38A70 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A38AE8 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x140A38CE0 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 * Callees:
 *     PopPowerAggregatorDiagTraceInternalStateChange @ 0x140A38DB4 (PopPowerAggregatorDiagTraceInternalStateChange.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x140A40154 (PopPowerAggregatorAllocateLogEntry.c)
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
