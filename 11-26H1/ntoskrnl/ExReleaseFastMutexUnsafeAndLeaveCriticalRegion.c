/*
 * XREFs of ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x140487690
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(struct _FAST_MUTEX *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  ExReleaseFastMutexUnsafe(a1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v1, v2);
}
