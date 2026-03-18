/*
 * XREFs of PopPowerButtonTimerCallback @ 0x14060CD00
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 */

void __fastcall PopPowerButtonTimerCallback(__int64 a1, int a2)
{
  KxAcquireSpinLock(&PopModernStandbyStateNotify.Padding[1]);
  if ( (xmmword_140F0C3B8 & 1) != 0 && DWORD1(xmmword_140F0C3B8) == a2 )
  {
    LODWORD(xmmword_140F0C3B8) = xmmword_140F0C3B8 & 1 | ((xmmword_140F0C3B8 & 0xFFFFFFFE) + 2000);
    PopQueueWorkItem((__int64)&unk_140F0C390, CriticalWorkQueue);
  }
  KxReleaseSpinLock(&PopModernStandbyStateNotify.Padding[1]);
}
