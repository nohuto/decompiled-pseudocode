/*
 * XREFs of CmpQuitNextActiveHive @ 0x140B07CC4
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x1404F39FC (CmpLockKcbStackFlusherLocksExclusive.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 */

void __fastcall CmpQuitNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 205);
}
