/*
 * XREFs of KeAcquireGuardedMutexUnsafe @ 0x1403FB700
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 */

void __stdcall KeAcquireGuardedMutexUnsafe(PKGUARDED_MUTEX FastMutex)
{
  ExAcquireFastMutexUnsafe(FastMutex);
}
