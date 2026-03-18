/*
 * XREFs of PiUEventDereferenceEventEntry @ 0x1409D712C
 * Callers:
 *     PiUEventProcessEventWorker @ 0x1409D6560 (PiUEventProcessEventWorker.c)
 *     PiUEventDequeuePendingEventWorker @ 0x1409D675C (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventHandleGetEvent @ 0x1409D6A10 (PiUEventHandleGetEvent.c)
 *     PiUEventNotifyUserMode @ 0x1409DD808 (PiUEventNotifyUserMode.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     PiUEventFreeEventEntry @ 0x1409D7190 (PiUEventFreeEventEntry.c)
 */

__int64 __fastcall PiUEventDereferenceEventEntry(PVOID P)
{
  unsigned int v2; // edi
  bool v3; // zf

  ExAcquireFastMutex(*((PKGUARDED_MUTEX *)P + 2));
  v2 = *((_DWORD *)P + 14) - 1;
  v3 = *((_BYTE *)P + 76) == 0;
  *((_DWORD *)P + 14) = v2;
  if ( !v3 && v2 == 1 )
    KeSetEvent(*((PRKEVENT *)P + 3), 0, 0);
  KeReleaseGuardedMutex(*((PKGUARDED_MUTEX *)P + 2));
  if ( !v2 )
    PiUEventFreeEventEntry(P);
  return v2;
}
