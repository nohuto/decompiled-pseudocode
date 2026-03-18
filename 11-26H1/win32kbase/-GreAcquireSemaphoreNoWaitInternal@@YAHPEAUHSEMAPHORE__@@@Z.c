/*
 * XREFs of ?GreAcquireSemaphoreNoWaitInternal@@YAHPEAUHSEMAPHORE__@@@Z @ 0x140169008
 * Callers:
 *     EngAcquireSemaphoreNoWait @ 0x140168FF0 (EngAcquireSemaphoreNoWait.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreAcquireSemaphoreNoWaitInternal(struct _ERESOURCE *Resource)
{
  unsigned int v1; // ebx
  BOOLEAN v3; // al

  v1 = 0;
  if ( Resource )
  {
    PsEnterPriorityRegion();
    KeEnterCriticalRegion();
    v3 = ExAcquireResourceExclusiveLite(Resource, 0);
    v1 = v3;
    if ( !v3 )
    {
      KeLeaveCriticalRegion();
      PsLeavePriorityRegion();
    }
  }
  return v1;
}
