/*
 * XREFs of KiInsertTimer2 @ 0x140337730
 * Callers:
 *     KiTimer2Expiration @ 0x140336A40 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x140336F08 (KiExpireTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x1403374E8 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1403789C0 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1404675F0 (KiHvEnlightenedGuestPriorityKick.c)
 */

char __fastcall KiInsertTimer2(__int64 a1, char a2, __int64 a3)
{
  __int64 v6; // rdx
  char inserted; // bl
  char v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0;
  KxAcquireSpinLock(&KiTimer2CollectionLock);
  LOBYTE(v6) = a2;
  inserted = KiInsertTimer2WithCollectionLockHeld(a1, v6, a3, &v9);
  KxReleaseSpinLock(&KiTimer2CollectionLock);
  if ( v9 )
    KiHvEnlightenedGuestPriorityKick(
      KeGetCurrentPrcb(),
      KiProcessorBlock[(unsigned int)KiClockTimerOwner],
      (unsigned int)KiVpThreadSystemWorkPriority);
  return inserted;
}
