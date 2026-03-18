/*
 * XREFs of ?GreAcquireSemaphoreSharedNoWaitInternal@@YAHPEAUHSEMAPHORE__@@@Z @ 0x140177B98
 * Callers:
 *     EngAcquireSemaphoreSharedNoWait @ 0x140177B80 (EngAcquireSemaphoreSharedNoWait.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreAcquireSemaphoreSharedNoWaitInternal(struct _ERESOURCE *Resource)
{
  unsigned int v1; // ebx
  BOOLEAN v3; // al

  v1 = 0;
  if ( Resource )
  {
    PsEnterPriorityRegion();
    KeEnterCriticalRegion();
    v3 = ExAcquireResourceSharedLite(Resource, 0);
    v1 = v3;
    if ( !v3 )
    {
      KeLeaveCriticalRegion();
      PsLeavePriorityRegion();
    }
  }
  return v1;
}
