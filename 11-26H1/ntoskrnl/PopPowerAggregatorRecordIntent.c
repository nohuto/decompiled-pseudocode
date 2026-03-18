/*
 * XREFs of PopPowerAggregatorRecordIntent @ 0x140A3F340
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140A3F1C4 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     PopPowerAggregatorAreTargetStatesEqual @ 0x140A3F4CC (PopPowerAggregatorAreTargetStatesEqual.c)
 *     PopPowerAggregatorDiagTraceHandleIntent @ 0x140A3F534 (PopPowerAggregatorDiagTraceHandleIntent.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x140A40154 (PopPowerAggregatorAllocateLogEntry.c)
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
  struct _LIST_ENTRY **p_Blink; // r10
  __int64 v16; // rbx
  __int64 InterruptTimePrecise; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v19; // [rsp+70h] [rbp+8h] BYREF

  v8 = a8;
  v10 = a5;
  v12 = a7;
  v14 = a6;
  PopPowerAggregatorDiagTraceHandleIntent(a2, a3, a4, a5, a6, a7, a8);
  p_Blink = &PopPowerAggregatorLock.Header.WaitListHead.Blink;
  v16 = 152LL * ((PopPowerAggregatorLock.SchedulerApc.ApcStateIndex - 1) & 0x1F);
  if ( *(LONG *)((char *)&PopPowerAggregatorLock.SuspendEvent.Header.LockNV + v16) != 1
    || *(_DWORD *)((char *)&PopPowerAggregatorLock.ThreadListEntry.Flink + v16) != a2
    || *(_DWORD *)(&PopPowerAggregatorLock.AbWaitEntryCount + v16) != a4
    || *(_DWORD *)((char *)&PopPowerAggregatorLock.GlobalForegroundListEntry.Flink + v16) != v12
    || !(unsigned __int8)PopPowerAggregatorAreTargetStatesEqual(
                           (char *)&PopPowerAggregatorLock.SchedulerSharedSystemSlot + v16,
                           v10)
    || !(unsigned __int8)PopPowerAggregatorAreTargetStatesEqual(&p_Blink[(unsigned __int64)v16 / 8 + 103], v14)
    || (InterruptTimePrecise = RtlGetInterruptTimePrecise(&v19),
        p_Blink = &PopPowerAggregatorLock.Header.WaitListHead.Blink,
        result = InterruptTimePrecise
               - *(unsigned __int64 *)((char *)&PopPowerAggregatorLock.SuspendEvent.Header.WaitListHead.Flink + v16),
        result >= 0x2FAF080) )
  {
    result = PopPowerAggregatorAllocateLogEntry(p_Blink, 1LL);
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
