/*
 * XREFs of PopPowerAggregatorAllocateLogEntry @ 0x140A40154
 * Callers:
 *     PopPowerAggregatorSetCurrentState @ 0x140A38D30 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorRecordIntent @ 0x140A3F340 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140ABB450 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall PopPowerAggregatorAllocateLogEntry(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v5; // rbx
  __int64 result; // rax
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 712);
  *(_DWORD *)(a1 + 712) = ((_BYTE)v2 + 1) & 0x1F;
  v5 = 152 * v2 + a1;
  memset_0((void *)(152 * v2 + a1 + 724), 0, 0x94uLL);
  *(_DWORD *)(v5 + 720) = a2;
  *(_QWORD *)(v5 + 728) = RtlGetInterruptTimePrecise(&v7);
  result = v5 + 720;
  *(_QWORD *)(v5 + 736) = *(_QWORD *)a1;
  return result;
}
