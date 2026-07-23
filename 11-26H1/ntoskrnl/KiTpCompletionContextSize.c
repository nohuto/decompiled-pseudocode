/*
 * XREFs of KiTpCompletionContextSize @ 0x1407BF5B8
 * Callers:
 *     KeMarkDynamicTracingHiberPhase @ 0x1405FED68 (KeMarkDynamicTracingHiberPhase.c)
 *     KeSetTracepoint @ 0x1407BEB70 (KeSetTracepoint.c)
 * Callees:
 *     RtlIcCompletionContextSize @ 0x140C5C0D8 (RtlIcCompletionContextSize.c)
 */

__int64 KiTpCompletionContextSize()
{
  return RtlIcCompletionContextSize();
}
