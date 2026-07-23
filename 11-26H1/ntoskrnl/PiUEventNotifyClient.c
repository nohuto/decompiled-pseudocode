/*
 * XREFs of PiUEventNotifyClient @ 0x14095B248
 * Callers:
 *     PiUEventNotifyTargetDeviceChange @ 0x14095AFAC (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x1409A6AA8 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x1409AA6B8 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140AED174 (PiUEventNotifyDeviceInstanceChange.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     McTemplateK0qqzqqjqzjztd_EtwWriteTransfer @ 0x1405DD070 (McTemplateK0qqzqqjqzjztd_EtwWriteTransfer.c)
 *     McTemplateK0qqzqqjqzjztx_EtwWriteTransfer @ 0x1405DD228 (McTemplateK0qqzqqjqzjztx_EtwWriteTransfer.c)
 *     PiUEventIsClientStuck @ 0x1407A8490 (PiUEventIsClientStuck.c)
 *     PiUEventReferenceEventEntry @ 0x14095CFF4 (PiUEventReferenceEventEntry.c)
 *     PiUEventNotifyClientPendingEvent @ 0x14095D030 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventDequeuePendingEventWorker @ 0x1409A764C (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventQueuePendingEvent @ 0x140A91444 (PiUEventQueuePendingEvent.c)
 *     PiUEventGatherEventData @ 0x140ADE7B0 (PiUEventGatherEventData.c)
 *     PiUEventGetProcessImagePath @ 0x140B0E020 (PiUEventGetProcessImagePath.c)
 *     PiUEventFreeProcessImagePath @ 0x140B412EC (PiUEventFreeProcessImagePath.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiUEventNotifyClient(__int64 a1, __int64 a2)
{
  int v2; // esi
  struct _FAST_MUTEX *v4; // rcx
  char v6; // di
  _QWORD *Pool2; // rdi
  _QWORD *v8; // rcx
  __int64 v10; // r8
  __int64 v11; // rsi
  struct _FAST_MUTEX *v12; // rcx
  const wchar_t *v13[6]; // [rsp+80h] [rbp+27h] BYREF
  const wchar_t *v14; // [rsp+C8h] [rbp+6Fh] BYREF
  const wchar_t *v15; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v16; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = 0;
  v4 = *(struct _FAST_MUTEX **)(a2 + 16);
  v13[0] = 0LL;
  v6 = 0;
  v16 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  ExAcquireFastMutex(v4);
  if ( *(_BYTE *)(a2 + 140) )
  {
    if ( PiUEventIsClientStuck(a2) )
    {
      ++*(_DWORD *)(a2 + 136);
      v6 = 1;
      if ( byte_140EF412C < 0 )
      {
        PiUEventGatherEventData(a1, v13, &v16, &v15);
        PiUEventGetProcessImagePath(*(_QWORD *)(a2 + 48), &v14);
        if ( byte_140EF412C < 0 )
          McTemplateK0qqzqqjqzjztx_EtwWriteTransfer(
            a1 + 80,
            (const EVENT_DESCRIPTOR *)KMPnPEvt_UEvent_ClientStuck,
            v10,
            *(_DWORD *)(a2 + 132),
            *(_DWORD *)(a2 + 48),
            v14,
            *(_DWORD *)(a2 + 128),
            *(_DWORD *)(a2 + 136),
            a1 + 80,
            *(_DWORD *)(a1 + 96),
            v13[0],
            v16,
            v15,
            *(_BYTE *)(a1 + 76),
            0);
        PiUEventFreeProcessImagePath(&v14);
      }
    }
  }
  else
  {
    v6 = 1;
  }
  KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a2 + 16));
  if ( !v6 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      PiUEventReferenceEventEntry(a1);
      Pool2[3] = a1;
      ExAcquireFastMutex(*(PKGUARDED_MUTEX *)(a2 + 16));
      if ( *(_DWORD *)(a2 + 128) >= 0x10000u )
      {
        v11 = *(_QWORD *)(a2 + 112);
        if ( (byte_140EF412D & 1) != 0 )
        {
          PiUEventGatherEventData(*(_QWORD *)(v11 + 24), v13, &v16, &v15);
          PiUEventGetProcessImagePath(*(_QWORD *)(a2 + 48), &v14);
          if ( (byte_140EF412D & 1) != 0 )
            McTemplateK0qqzqqjqzjztd_EtwWriteTransfer(
              *(_QWORD *)(v11 + 24),
              (const EVENT_DESCRIPTOR *)KMPnPEvt_UEvent_QueueFullDropHead,
              (unsigned int)(*(_DWORD *)(a2 + 136) + 1),
              *(_DWORD *)(a2 + 132),
              *(_DWORD *)(a2 + 48),
              v14,
              *(_DWORD *)(a2 + 128),
              *(_BYTE *)(a2 + 136) + 1,
              *(_QWORD *)(v11 + 24) + 80LL,
              *(_DWORD *)(*(_QWORD *)(v11 + 24) + 96LL),
              v13[0],
              v16,
              v15,
              *(_BYTE *)(*(_QWORD *)(v11 + 24) + 76LL),
              1);
          PiUEventFreeProcessImagePath(&v14);
        }
        PiUEventDequeuePendingEventWorker(a2, v11, 0LL, 0LL);
        ++*(_DWORD *)(a2 + 136);
        v2 = PiUEventQueuePendingEvent(a2, Pool2);
      }
      else
      {
        v8 = *(_QWORD **)(a2 + 120);
        if ( *v8 != a2 + 112 )
          __fastfail(3u);
        *Pool2 = a2 + 112;
        Pool2[1] = v8;
        *v8 = Pool2;
        *(_QWORD *)(a2 + 120) = Pool2;
        ++*(_DWORD *)(a2 + 128);
      }
      if ( v2 < 0 )
      {
        v12 = *(struct _FAST_MUTEX **)(a2 + 16);
        ++*(_DWORD *)(a2 + 136);
        KeReleaseGuardedMutex(v12);
        if ( byte_140EF412C < 0 )
        {
          PiUEventGatherEventData(Pool2[3], v13, &v16, &v15);
          PiUEventGetProcessImagePath(*(_QWORD *)(a2 + 48), &v14);
          if ( byte_140EF412C < 0 )
            McTemplateK0qqzqqjqzjztd_EtwWriteTransfer(
              Pool2[3],
              (const EVENT_DESCRIPTOR *)KMPnPEvt_UEvent_CouldNotQueueEvent,
              (unsigned int)(*(_DWORD *)(a2 + 136) + 1),
              *(_DWORD *)(a2 + 132),
              *(_DWORD *)(a2 + 48),
              v14,
              *(_DWORD *)(a2 + 128),
              *(_BYTE *)(a2 + 136) + 1,
              Pool2[3] + 80LL,
              *(_DWORD *)(Pool2[3] + 96LL),
              v13[0],
              v16,
              v15,
              *(_BYTE *)(Pool2[3] + 76LL),
              v2);
          PiUEventFreeProcessImagePath(&v14);
        }
      }
      else
      {
        Pool2[2] = MEMORY[0xFFFFF78000000014];
        KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a2 + 16));
        PiUEventNotifyClientPendingEvent(a2);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v2;
}
