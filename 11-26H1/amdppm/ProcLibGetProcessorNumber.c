/*
 * XREFs of ProcLibGetProcessorNumber @ 0x140002340
 * Callers:
 *     ProcLibTracePerfConstraintChange @ 0x140024FE0 (ProcLibTracePerfConstraintChange.c)
 *     ProcLibTraceQueryCapabilities @ 0x140040A7C (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x140040EF4 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x140041104 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTraceProcessorIds @ 0x140042760 (ProcLibTraceProcessorIds.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ProcLibGetProcessorNumber(__int64 a1, struct _PROCESSOR_NUMBER *a2)
{
  return KeGetProcessorNumberFromIndex(*(ULONG *)(a1 + 56), a2);
}
