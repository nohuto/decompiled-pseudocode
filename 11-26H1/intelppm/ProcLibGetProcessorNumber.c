/*
 * XREFs of ProcLibGetProcessorNumber @ 0x1400041F8
 * Callers:
 *     ProcLibTracePerfConstraintChange @ 0x14002C96C (ProcLibTracePerfConstraintChange.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1400442FC (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTraceQueryCapabilities @ 0x140045EA8 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTracePepPerfCapabilities @ 0x140046010 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTraceProcessorIds @ 0x1400468B4 (ProcLibTraceProcessorIds.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ProcLibGetProcessorNumber(__int64 a1, struct _PROCESSOR_NUMBER *a2)
{
  return KeGetProcessorNumberFromIndex(*(ULONG *)(a1 + 56), a2);
}
