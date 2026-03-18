/*
 * XREFs of PfFbBufferListShutdown @ 0x1406004A8
 * Callers:
 *     PfTCleanup @ 0x1407C6254 (PfTCleanup.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PfFbBufferListShutdown(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
