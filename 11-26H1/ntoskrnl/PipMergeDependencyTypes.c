/*
 * XREFs of PipMergeDependencyTypes @ 0x1405DB730
 * Callers:
 *     PipAddRequestToEdge @ 0x1407A2704 (PipAddRequestToEdge.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PipMergeDependencyTypes(__int64 a1, int a2)
{
  KIRQL v4; // al

  v4 = KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
  *(_DWORD *)(a1 + 48) |= a2;
  KeReleaseSpinLock(&PiDependencyEdgeWriteLock, v4);
}
