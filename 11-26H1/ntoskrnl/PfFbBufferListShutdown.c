/*
 * XREFs of PfFbBufferListShutdown @ 0x140602F58
 * Callers:
 *     PfTCleanup @ 0x1407C92B4 (PfTCleanup.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PfFbBufferListShutdown(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
