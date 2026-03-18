/*
 * XREFs of PopDeviceIdleCompletion @ 0x140603F30
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

void PopDeviceIdleCompletion()
{
  KIRQL v0; // al
  bool v1; // zf
  KIRQL v2; // bl

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140F10808);
  v1 = LODWORD(stru_140E66FF0.KcsanThread)-- == 1;
  v2 = v0;
  if ( v1 && stru_140E66FF0.Spare32 )
  {
    KeSetEvent((PRKEVENT)stru_140E66FF0.Spare32, 0, 0);
    stru_140E66FF0.Spare32 = 0LL;
  }
  KeReleaseSpinLock(&qword_140F10808, v2);
}
