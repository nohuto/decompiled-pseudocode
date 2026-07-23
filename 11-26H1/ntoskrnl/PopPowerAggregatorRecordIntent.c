/*
 * XREFs of PopPowerAggregatorRecordIntent @ 0x1409FAD60
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409FABE4 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     PopPowerAggregatorAreTargetStatesEqual @ 0x1409FAEEC (PopPowerAggregatorAreTargetStatesEqual.c)
 *     PopPowerAggregatorDiagTraceHandleIntent @ 0x1409FAF54 (PopPowerAggregatorDiagTraceHandleIntent.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x1409FBB74 (PopPowerAggregatorAllocateLogEntry.c)
 */

unsigned __int64 __fastcall PopPowerAggregatorRecordIntent(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // r12
  __int64 v10; // rsi
  int v12; // r15d
  __int64 v14; // rdi
  __int64 *v15; // r10
  __int64 v16; // rbx
  LARGE_INTEGER InterruptTimePrecise; // rax
  unsigned __int64 result; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+70h] [rbp+8h] BYREF

  v8 = a8;
  v10 = a5;
  v12 = a7;
  v14 = a6;
  PopPowerAggregatorDiagTraceHandleIntent(a2, a3, a4, a5, a6, a7, a8);
  v15 = PopPowerAggregatorContext;
  v16 = 19LL * (((_BYTE)dword_140F0DB88 - 1) & 0x1F);
  if ( LODWORD(PopPowerAggregatorContext[v16 + 90]) != 1
    || LODWORD(PopPowerAggregatorContext[v16 + 93]) != a2
    || LODWORD(PopPowerAggregatorContext[v16 + 97]) != a4
    || LODWORD(PopPowerAggregatorContext[v16 + 108]) != v12
    || !(unsigned __int8)PopPowerAggregatorAreTargetStatesEqual(&PopPowerAggregatorContext[v16 + 98], v10)
    || !(unsigned __int8)PopPowerAggregatorAreTargetStatesEqual(&v15[v16 + 103], v14)
    || (InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter),
        v15 = PopPowerAggregatorContext,
        result = InterruptTimePrecise.QuadPart - PopPowerAggregatorContext[v16 + 91],
        result >= 0x2FAF080) )
  {
    result = PopPowerAggregatorAllocateLogEntry(v15, 1LL);
    *(_DWORD *)(result + 24) = a2;
    *(_OWORD *)(result + 28) = *(_OWORD *)v8;
    *(_QWORD *)(result + 44) = *(_QWORD *)(v8 + 16);
    *(_DWORD *)(result + 52) = a3;
    *(_DWORD *)(result + 56) = a4;
    *(_OWORD *)(result + 64) = *(_OWORD *)v10;
    *(_OWORD *)(result + 80) = *(_OWORD *)(v10 + 16);
    *(_QWORD *)(result + 96) = *(_QWORD *)(v10 + 32);
    *(_OWORD *)(result + 104) = *(_OWORD *)v14;
    *(_OWORD *)(result + 120) = *(_OWORD *)(v14 + 16);
    *(_QWORD *)(result + 136) = *(_QWORD *)(v14 + 32);
    *(_DWORD *)(result + 144) = v12;
  }
  return result;
}
