/*
 * XREFs of KiTpCompletionContextSize @ 0x1407BC558
 * Callers:
 *     KeMarkDynamicTracingHiberPhase @ 0x1405FC318 (KeMarkDynamicTracingHiberPhase.c)
 *     KeSetTracepoint @ 0x1407BBB10 (KeSetTracepoint.c)
 * Callees:
 *     RtlIcCompletionContextSize @ 0x140C560D8 (RtlIcCompletionContextSize.c)
 */

__int64 KiTpCompletionContextSize()
{
  return RtlIcCompletionContextSize();
}
