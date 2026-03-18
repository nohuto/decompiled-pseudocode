/*
 * XREFs of PiDrvDbUnloadNodeReset @ 0x1404FE490
 * Callers:
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140B34450 (PiDrvDbUnloadNodeWorkerCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PiDrvDbUnloadNodeReset(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  KIRQL v3; // al

  v1 = (KSPIN_LOCK *)(a1 + 424);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 424));
  *(_BYTE *)(a1 + 432) = 0;
  KeReleaseSpinLock(v1, v3);
}
