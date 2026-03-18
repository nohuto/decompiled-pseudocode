/*
 * XREFs of HANDLELOCK_bLockHobj @ 0x1401C8220
 * Callers:
 *     <none>
 * Callees:
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1400CFBA8 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 */

__int64 __fastcall HANDLELOCK_bLockHobj(HANDLELOCK *a1, struct HOBJ__ *a2, char a3)
{
  return HANDLELOCK::bLockHobj(a1, a2, a3);
}
