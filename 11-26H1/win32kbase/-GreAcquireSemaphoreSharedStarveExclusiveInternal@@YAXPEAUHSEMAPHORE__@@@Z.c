/*
 * XREFs of ?GreAcquireSemaphoreSharedStarveExclusiveInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140153E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GreAcquireSemaphoreSharedStarveExclusiveInternal(struct _ERESOURCE *Resource)
{
  if ( Resource )
  {
    PsEnterPriorityRegion();
    KeEnterCriticalRegion();
    ExAcquireSharedStarveExclusive(Resource, 1u);
  }
}
