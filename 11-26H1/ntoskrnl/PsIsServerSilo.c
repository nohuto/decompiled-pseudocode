/*
 * XREFs of PsIsServerSilo @ 0x140216838
 * Callers:
 *     EtwpTraceFileIo @ 0x140212800 (EtwpTraceFileIo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x140215920 (UpcaseUnicodeToSingleByteNHelper.c)
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     PsGetThreadServerSilo @ 0x1402167A0 (PsGetThreadServerSilo.c)
 *     PsGetEffectiveServerSilo @ 0x140216800 (PsGetEffectiveServerSilo.c)
 *     EtwTraceContextSwap @ 0x140412DE0 (EtwTraceContextSwap.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x14043D8B0 (UpcaseUnicodeToMultiByteNHelper.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     PspJobIsAppSilo @ 0x140614A8C (PspJobIsAppSilo.c)
 *     PsIsProcessInAppSilo @ 0x1407EE6E0 (PsIsProcessInAppSilo.c)
 *     PsTerminateServerSilo @ 0x1407EE820 (PsTerminateServerSilo.c)
 *     PspConvertSiloToServerSilo @ 0x1407EEB8C (PspConvertSiloToServerSilo.c)
 *     PspSetJobMemoryPartition @ 0x1407F96B4 (PspSetJobMemoryPartition.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x1409337E0 (IopAllocRealFileObject.c)
 *     PspJobClose @ 0x140958D70 (PspJobClose.c)
 *     PspTerminateProcessesJobCallback @ 0x140959A60 (PspTerminateProcessesJobCallback.c)
 *     PspGetNextSilo @ 0x140959E18 (PspGetNextSilo.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140959E60 (EtwpUpdateGlobalGroupMasks.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140AF0A90 (PspValidateJobAssignmentSiloPolicy.c)
 *     PspDeleteSilo @ 0x140B47D68 (PspDeleteSilo.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsServerSilo(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1504) != 0LL;
}
