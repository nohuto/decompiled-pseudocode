/*
 * XREFs of IopCheckHardErrorEmpty @ 0x1405CA690
 * Callers:
 *     IopHardErrorThread @ 0x140794C00 (IopHardErrorThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

char IopCheckHardErrorEmpty()
{
  KIRQL v0; // al
  char v1; // bl

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140F853B0);
  v1 = 0;
  IopCurrentHardError = 0LL;
  if ( (__int64 *)qword_140F853A0 == &qword_140F853A0 )
    byte_140F853D8 = 0;
  else
    v1 = 1;
  KeReleaseSpinLock(&qword_140F853B0, v0);
  return v1;
}
