/*
 * XREFs of HANDLELOCK_bLockHobj @ 0x1401F0A50
 * Callers:
 *     <none>
 * Callees:
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1400570A0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 */

__int64 __fastcall HANDLELOCK_bLockHobj(HANDLELOCK *a1, struct HOBJ__ *a2, char a3)
{
  return HANDLELOCK::bLockHobj(a1, a2, a3);
}
