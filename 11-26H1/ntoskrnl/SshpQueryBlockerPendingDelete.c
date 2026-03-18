/*
 * XREFs of SshpQueryBlockerPendingDelete @ 0x1404D0254
 * Callers:
 *     SshpPurgeBlockersWorker @ 0x140AAD230 (SshpPurgeBlockersWorker.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

bool __fastcall SshpQueryBlockerPendingDelete(PKSPIN_LOCK SpinLock)
{
  KIRQL v2; // al
  bool v3; // bl

  v2 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v3 = (SpinLock[1] & 8) != 0;
  KeReleaseSpinLock(SpinLock, v2);
  return v3;
}
