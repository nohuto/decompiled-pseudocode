/*
 * XREFs of ViDeadlockExAcquireFastMutex_Exit @ 0x140C3D6B0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140C4D324 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall ViDeadlockExAcquireFastMutex_Exit(__int64 *a1)
{
  return VfDeadlockAcquireResource(a1[1], *a1);
}
