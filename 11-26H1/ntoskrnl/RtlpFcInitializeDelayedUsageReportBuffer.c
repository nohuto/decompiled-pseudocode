/*
 * XREFs of RtlpFcInitializeDelayedUsageReportBuffer @ 0x14080FA58
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140CF6E68 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall RtlpFcInitializeDelayedUsageReportBuffer(void *a1)
{
  return memset_0(a1, 0, 0x310uLL);
}
