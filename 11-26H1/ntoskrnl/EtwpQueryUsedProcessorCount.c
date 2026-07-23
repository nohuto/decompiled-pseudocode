/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x140482564
 * Callers:
 *     EtwpBuffersFlushRequired @ 0x140219AFC (EtwpBuffersFlushRequired.c)
 *     EtwpAddLastDroppedEvent @ 0x140482284 (EtwpAddLastDroppedEvent.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x140482450 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpReenableCompression @ 0x1405348E8 (EtwpReenableCompression.c)
 *     EtwpUpdateContextRegisterTraceEvents @ 0x14082D51C (EtwpUpdateContextRegisterTraceEvents.c)
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 *     EtwpAddLogHeader @ 0x140A11F48 (EtwpAddLogHeader.c)
 *     EtwpBufferingModeFlush @ 0x140A12844 (EtwpBufferingModeFlush.c)
 *     EtwpFlushActiveBuffers @ 0x140A133D8 (EtwpFlushActiveBuffers.c)
 *     EtwpAdjustFreeBuffers @ 0x140A1385C (EtwpAdjustFreeBuffers.c)
 *     EtwpFreeTraceBufferPool @ 0x140A154F4 (EtwpFreeTraceBufferPool.c)
 *     EtwpUpdateFileHeader @ 0x140A15D84 (EtwpUpdateFileHeader.c)
 *     EtwpUpdateTrace @ 0x140AB081C (EtwpUpdateTrace.c)
 *     EtwpInitLoggerContext @ 0x140AB20E0 (EtwpInitLoggerContext.c)
 *     EtwpAllocateTraceBufferPool @ 0x140AB272C (EtwpAllocateTraceBufferPool.c)
 *     EtwpFinalizeHeader @ 0x140ABCAB0 (EtwpFinalizeHeader.c)
 *     EtwpRealtimeRestoreState @ 0x140B561BC (EtwpRealtimeRestoreState.c)
 *     EtwpRealtimeSaveState @ 0x140B60190 (EtwpRealtimeSaveState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpQueryUsedProcessorCount(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 12) & 0x40000) != 0 && (HvlpFlags & 2) != 0 )
    return (unsigned int)HvlpLogicalProcessorCount;
  result = 1LL;
  if ( (*(_DWORD *)(a1 + 12) & 0x10000000) == 0 )
    return (unsigned int)KeNumberProcessors_0;
  return result;
}
