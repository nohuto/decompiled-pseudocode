/*
 * XREFs of SshpQueryBlockerPendingDelete @ 0x1404C9C84
 * Callers:
 *     SshpPurgeBlockersWorker @ 0x140AAB2F0 (SshpPurgeBlockersWorker.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
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
