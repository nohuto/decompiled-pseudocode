/*
 * XREFs of PopReleaseUserPresentSpinLock @ 0x1404E14C0
 * Callers:
 *     PopSetSystemAwayMode @ 0x1407D4430 (PopSetSystemAwayMode.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 */

void __fastcall PopReleaseUserPresentSpinLock(KIRQL a1)
{
  KeReleaseSpinLock(&PopUserPresentLock, a1);
}
