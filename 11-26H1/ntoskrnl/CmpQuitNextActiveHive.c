/*
 * XREFs of CmpQuitNextActiveHive @ 0x140B09DF4
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x1404ECFDC (CmpLockKcbStackFlusherLocksExclusive.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 */

void __fastcall CmpQuitNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 205);
}
