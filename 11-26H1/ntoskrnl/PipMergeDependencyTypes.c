/*
 * XREFs of PipMergeDependencyTypes @ 0x1405D8F30
 * Callers:
 *     PipAddRequestToEdge @ 0x14079FBC4 (PipAddRequestToEdge.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PipMergeDependencyTypes(__int64 a1, int a2)
{
  KIRQL v4; // al

  v4 = KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
  *(_DWORD *)(a1 + 48) |= a2;
  KeReleaseSpinLock(&PiDependencyEdgeWriteLock, v4);
}
