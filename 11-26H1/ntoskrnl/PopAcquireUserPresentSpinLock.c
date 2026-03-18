/*
 * XREFs of PopAcquireUserPresentSpinLock @ 0x1404DE228
 * Callers:
 *     PopSetSystemAwayMode @ 0x1407D1390 (PopSetSystemAwayMode.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

KIRQL __fastcall PopAcquireUserPresentSpinLock(KIRQL *a1)
{
  KIRQL result; // al

  result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F11D08.WaitBlock[0].Thread);
  *a1 = result;
  return result;
}
