/*
 * XREFs of KiInsertTimer2 @ 0x1403397B0
 * Callers:
 *     KiTimer2Expiration @ 0x140338AC0 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x140338F88 (KiExpireTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x140339568 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x14037A770 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x140460D40 (KiHvEnlightenedGuestPriorityKick.c)
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
