/*
 * XREFs of ObDereferenceProcessHandleTable @ 0x140A83460
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x14052DB88 (IoRevokeHandlesForProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 */

void __fastcall ObDereferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 61);
}
