/*
 * XREFs of CmpVolumeContextUnlockExclusive @ 0x140857524
 * Callers:
 *     CmpVolumeManagerCreateContextsForWellKnownVolumes @ 0x140774A94 (CmpVolumeManagerCreateContextsForWellKnownVolumes.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x140857440 (CmpVolumeContextSendDeviceUsageNotification.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall CmpVolumeContextUnlockExclusive(__int64 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1 + 56;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 56));
  KeAbPostRelease(v1);
}
