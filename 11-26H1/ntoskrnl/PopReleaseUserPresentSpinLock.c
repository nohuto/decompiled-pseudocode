/*
 * XREFs of PopReleaseUserPresentSpinLock @ 0x1404E8100
 * Callers:
 *     PopSetSystemAwayMode @ 0x1407D1390 (PopSetSystemAwayMode.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 */

void __fastcall PopReleaseUserPresentSpinLock(KIRQL a1)
{
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F11D08.WaitBlock[0].Thread, a1);
}
