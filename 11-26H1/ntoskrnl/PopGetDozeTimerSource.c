/*
 * XREFs of PopGetDozeTimerSource @ 0x14060CAA8
 * Callers:
 *     PopWnfAudioCallback @ 0x140946B50 (PopWnfAudioCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 PopGetDozeTimerSource()
{
  unsigned int v0; // ebx
  KIRQL v1; // al

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  if ( BYTE4(stru_140F0F620.SchedulerAssistLastYieldBoostTime) )
    v0 = stru_140F0F620.Padding[0];
  KeReleaseSpinLock(&PopIdleAoAcDozeS4Lock, v1);
  return v0;
}
