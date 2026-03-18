/*
 * XREFs of PopResumeDeviceIdle @ 0x140518024
 * Callers:
 *     PoClearBroadcast @ 0x140B33768 (PoClearBroadcast.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

void PopResumeDeviceIdle()
{
  KIRQL v0; // al

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140F10808);
  BYTE4(stru_140E66FF0.KcsanThread) = 0;
  KeReleaseSpinLock(&qword_140F10808, v0);
}
