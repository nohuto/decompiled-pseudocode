/*
 * XREFs of PiUEventBroadcastEventWorker @ 0x140AFC1A0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x1407A56C4 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1407A5754 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiUEventBroadcastVolumesChangedEvent @ 0x1407A58CC (PiUEventBroadcastVolumesChangedEvent.c)
 *     PiUEventBroadcastDevnodesChangedEvent @ 0x140AFC2D0 (PiUEventBroadcastDevnodesChangedEvent.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventBroadcastEventWorker(PVOID P)
{
  char v2; // si
  char *v3; // rdi
  char v4; // bl
  __int64 v5; // rcx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v2 = 0;
  do
  {
    ExAcquireFastMutex(&PiUEventBroadcastEventQueueLock);
    v3 = (char *)PiUEventBroadcastEventQueue;
    v4 = *((_BYTE *)PiUEventBroadcastEventQueue + 16);
    KeReleaseGuardedMutex(&PiUEventBroadcastEventQueueLock);
    if ( v4 )
    {
      v6 = *((_DWORD *)v3 + 5);
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 == 1 )
              PiUEventBroadcastPortsChangedEvent(*((_DWORD *)v3 + 6), (__int128 *)(v3 + 28), (_DWORD)v3 + 44);
          }
          else
          {
            PiUEventBroadcastHardwareProfilesChangedEvent(*((_DWORD *)v3 + 6), (__int64)(v3 + 28));
          }
        }
        else
        {
          PiUEventBroadcastVolumesChangedEvent(*((_DWORD *)v3 + 6));
        }
      }
      else
      {
        PiUEventBroadcastDevnodesChangedEvent(*((unsigned int *)v3 + 6));
      }
    }
    ExAcquireFastMutex(&PiUEventBroadcastEventQueueLock);
    if ( *((PVOID **)PiUEventBroadcastEventQueue + 1) != &PiUEventBroadcastEventQueue
      || (v5 = *(_QWORD *)PiUEventBroadcastEventQueue,
          *(PVOID *)(*(_QWORD *)PiUEventBroadcastEventQueue + 8LL) != PiUEventBroadcastEventQueue) )
    {
      __fastfail(3u);
    }
    PiUEventBroadcastEventQueue = *(PVOID *)PiUEventBroadcastEventQueue;
    *(_QWORD *)(v5 + 8) = &PiUEventBroadcastEventQueue;
    if ( PiUEventBroadcastEventQueue == &PiUEventBroadcastEventQueue )
      v2 = 1;
    KeReleaseGuardedMutex(&PiUEventBroadcastEventQueueLock);
    ExFreePoolWithTag(v3, 0x59706E50u);
  }
  while ( !v2 );
  ExFreePoolWithTag(P, 0x59706E50u);
}
