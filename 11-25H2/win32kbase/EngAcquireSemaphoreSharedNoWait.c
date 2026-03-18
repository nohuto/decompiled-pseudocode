/*
 * XREFs of EngAcquireSemaphoreSharedNoWait @ 0x140140570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EngAcquireSemaphoreSharedNoWait(PERESOURCE Resource)
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
