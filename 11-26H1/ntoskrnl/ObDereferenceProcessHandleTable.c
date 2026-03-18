/*
 * XREFs of ObDereferenceProcessHandleTable @ 0x140A7D5F0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x14052B668 (IoRevokeHandlesForProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 */

void __fastcall ObDereferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 61);
}
