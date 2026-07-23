/*
 * XREFs of ViDeadlockExAcquireFastMutexUnsafe_Exit @ 0x140C3D670
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140C4D324 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall ViDeadlockExAcquireFastMutexUnsafe_Exit(__int64 *a1)
{
  return VfDeadlockAcquireResource(a1[1], *a1);
}
