/*
 * XREFs of PopPowerAggregatorAllocateLogEntry @ 0x1409FBB74
 * Callers:
 *     PopPowerAggregatorSetCurrentState @ 0x1409F48F0 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorRecordIntent @ 0x1409FAD60 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140ABC910 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

LARGE_INTEGER *__fastcall PopPowerAggregatorAllocateLogEntry(LARGE_INTEGER *a1, ULONG a2)
{
  __int64 LowPart; // r8
  LARGE_INTEGER *v5; // rbx
  LARGE_INTEGER *result; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  LowPart = a1[89].LowPart;
  a1[89].LowPart = ((_BYTE)LowPart + 1) & 0x1F;
  v5 = &a1[19 * LowPart];
  memset_0((char *)&a1[19 * LowPart + 90].QuadPart + 4, 0, 0x94uLL);
  v5[90].LowPart = a2;
  v5[91] = RtlGetInterruptTimePrecise(&PerformanceCounter);
  result = v5 + 90;
  v5[92] = *a1;
  return result;
}
