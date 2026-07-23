/*
 * XREFs of PsIsServerSilo @ 0x140216B68
 * Callers:
 *     EtwpTraceFileIo @ 0x1402128E0 (EtwpTraceFileIo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x140215C50 (UpcaseUnicodeToSingleByteNHelper.c)
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     PsGetThreadServerSilo @ 0x140216AD0 (PsGetThreadServerSilo.c)
 *     PsGetEffectiveServerSilo @ 0x140216B30 (PsGetEffectiveServerSilo.c)
 *     EtwTraceContextSwap @ 0x140407410 (EtwTraceContextSwap.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x1404363C0 (UpcaseUnicodeToMultiByteNHelper.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     PspJobIsAppSilo @ 0x1406178CC (PspJobIsAppSilo.c)
 *     PsIsProcessInAppSilo @ 0x1407F4240 (PsIsProcessInAppSilo.c)
 *     PsTerminateServerSilo @ 0x1407F4380 (PsTerminateServerSilo.c)
 *     PspConvertSiloToServerSilo @ 0x1407F46EC (PspConvertSiloToServerSilo.c)
 *     PspSetJobMemoryPartition @ 0x1407FF1B4 (PspSetJobMemoryPartition.c)
 *     IopAllocRealFileObject @ 0x14090F390 (IopAllocRealFileObject.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     PspTerminateProcessesJobCallback @ 0x1409FF320 (PspTerminateProcessesJobCallback.c)
 *     PspGetNextSilo @ 0x1409FF6D8 (PspGetNextSilo.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1409FF720 (EtwpUpdateGlobalGroupMasks.c)
 *     PspJobClose @ 0x140A06ED0 (PspJobClose.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140AF36D0 (PspValidateJobAssignmentSiloPolicy.c)
 *     PspDeleteSilo @ 0x140B49AF8 (PspDeleteSilo.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsServerSilo(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1504) != 0LL;
}
