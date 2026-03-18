/*
 * XREFs of ViDeadlockExEnterCriticalRegionAndAcquireResourceExclusive_Exit @ 0x140C37720
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140C47314 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall ViDeadlockExEnterCriticalRegionAndAcquireResourceExclusive_Exit(__int64 *a1)
{
  return VfDeadlockAcquireResource(a1[1], *a1);
}
