/*
 * XREFs of PiUEventProcessEventWorker @ 0x1409D6560
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14099A54C (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x1409D5AC8 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x1409D60E8 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventDereferenceEventEntry @ 0x1409D712C (PiUEventDereferenceEventEntry.c)
 *     PiUEventProcessBroadcastNotifications @ 0x1409D7D04 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140AEA684 (PiUEventNotifyDeviceInstanceChange.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventProcessEventWorker(PVOID P)
{
  int v2; // edi
  _DWORD *v3; // rbx
  __int64 v4; // rcx
  int v5; // eax

  v2 = 0;
  do
  {
    ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
    v3 = PiUEventUsermodeEventQueue;
    KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
    switch ( v3[24] )
    {
      case 1:
LABEL_15:
        v5 = PiUEventNotifyTargetDeviceChange((__int64)v3);
        goto LABEL_16;
      case 2:
        v5 = PiUEventNotifyDeviceInterfaceChange((__int64)v3);
        goto LABEL_16;
      case 3:
        goto LABEL_15;
      case 4:
LABEL_21:
        v5 = PiUEventNotifyDeviceInstanceChange(v3);
LABEL_16:
        if ( v5 < 0 )
          goto LABEL_9;
        goto LABEL_8;
      case 9:
        v5 = PiUEventNotifyDeviceInstancePropertyChange((__int64)v3);
        goto LABEL_16;
    }
    if ( (unsigned int)(v3[24] - 10) < 2 )
      goto LABEL_21;
LABEL_8:
    PiUEventProcessBroadcastNotifications(v3);
LABEL_9:
    ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
    if ( *((PVOID **)PiUEventUsermodeEventQueue + 1) != &PiUEventUsermodeEventQueue
      || (v4 = *(_QWORD *)PiUEventUsermodeEventQueue,
          *(PVOID *)(*(_QWORD *)PiUEventUsermodeEventQueue + 8LL) != PiUEventUsermodeEventQueue) )
    {
      __fastfail(3u);
    }
    PiUEventUsermodeEventQueue = *(PVOID *)PiUEventUsermodeEventQueue;
    *(_QWORD *)(v4 + 8) = &PiUEventUsermodeEventQueue;
    if ( PiUEventUsermodeEventQueue == &PiUEventUsermodeEventQueue )
      v2 = 1;
    KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
    PiUEventDereferenceEventEntry(v3);
  }
  while ( !v2 );
  ExFreePoolWithTag(P, 0x59706E50u);
}
