/*
 * XREFs of RtlpFcInitializeDelayedUsageReportBuffer @ 0x140809FC8
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140CF0AF0 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void *__fastcall RtlpFcInitializeDelayedUsageReportBuffer(void *a1)
{
  return memset_0(a1, 0, 0x310uLL);
}
