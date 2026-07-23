/*
 * XREFs of PopGetDozeTimerSource @ 0x14060FC08
 * Callers:
 *     PopWnfAudioCallback @ 0x1409C24C0 (PopWnfAudioCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 PopGetDozeTimerSource()
{
  unsigned int v0; // ebx
  KIRQL v1; // al

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopPdcDeviceListLock.SystemAffinityTokenListHead);
  if ( byte_140F10354 )
    v0 = dword_140F10358;
  KeReleaseSpinLock((PKSPIN_LOCK)&PopPdcDeviceListLock.SystemAffinityTokenListHead, v1);
  return v0;
}
