/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x140488A24
 * Callers:
 *     EtwpBuffersFlushRequired @ 0x14021999C (EtwpBuffersFlushRequired.c)
 *     EtwpAddLastDroppedEvent @ 0x140488744 (EtwpAddLastDroppedEvent.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x140488910 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpReenableCompression @ 0x140532448 (EtwpReenableCompression.c)
 *     EtwpUpdateContextRegisterTraceEvents @ 0x1408272DC (EtwpUpdateContextRegisterTraceEvents.c)
 *     NtTraceControl @ 0x14093CB40 (NtTraceControl.c)
 *     EtwpAddLogHeader @ 0x140A12D58 (EtwpAddLogHeader.c)
 *     EtwpBufferingModeFlush @ 0x140A13654 (EtwpBufferingModeFlush.c)
 *     EtwpFlushActiveBuffers @ 0x140A141E8 (EtwpFlushActiveBuffers.c)
 *     EtwpAdjustFreeBuffers @ 0x140A1466C (EtwpAdjustFreeBuffers.c)
 *     EtwpUpdateFileHeader @ 0x140A16280 (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x140A16CB0 (EtwpFinalizeHeader.c)
 *     EtwpUpdateTrace @ 0x140A6C6F0 (EtwpUpdateTrace.c)
 *     EtwpFreeTraceBufferPool @ 0x140A6CF98 (EtwpFreeTraceBufferPool.c)
 *     EtwpAllocateTraceBufferPool @ 0x140A6D988 (EtwpAllocateTraceBufferPool.c)
 *     EtwpInitLoggerContext @ 0x140A6DD54 (EtwpInitLoggerContext.c)
 *     EtwpRealtimeRestoreState @ 0x140B5391C (EtwpRealtimeRestoreState.c)
 *     EtwpRealtimeSaveState @ 0x140B5D010 (EtwpRealtimeSaveState.c)
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
