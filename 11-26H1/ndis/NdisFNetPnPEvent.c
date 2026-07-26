/*
 * XREFs of NdisFNetPnPEvent @ 0x14000DB00
 * Callers:
 *     ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14000D9E0 (-ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14008C720 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

NDIS_STATUS __stdcall NdisFNetPnPEvent(
        NDIS_HANDLE NdisFilterHandle,
        PNET_PNP_EVENT_NOTIFICATION NetPnPEventNotification)
{
  KIRQL v5; // al
  PNET_PNP_EVENT_NOTIFICATION *v6; // rdx
  KIRQL v7; // bp
  __int64 i; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v10[5]; // [rsp+48h] [rbp-30h] BYREF

  v10[1] = NdisFilterHandle;
  v10[3] = NetPnPEventNotification;
  v10[0] = 0LL;
  v10[2] = 0LL;
  if ( KeExpandKernelStackAndCalloutEx((PEXPAND_STACK_CALLOUT)ndisFNetPnPEventInternal, v10, (unsigned int)Size, 0, 0LL) >= 0 )
    return v10[0];
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisFilterHandle + 18);
  v6 = (PNET_PNP_EVENT_NOTIFICATION *)((char *)NdisFilterHandle + 256);
  *((_QWORD *)NdisFilterHandle + 19) = KeGetCurrentThread();
  v7 = v5;
  for ( i = *((_QWORD *)NdisFilterHandle + 32); i; i = *(_QWORD *)(i + 56) )
    v6 = (PNET_PNP_EVENT_NOTIFICATION *)(i + 56);
  *v6 = NetPnPEventNotification;
  NetPnPEventNotification->NetPnPEvent.NdisReserved[0] = (unsigned __int64)&Event;
  NetPnPEventNotification->NetPnPEvent.NdisReserved[3] = 0LL;
  ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle);
  *((_QWORD *)NdisFilterHandle + 19) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v7);
  ndisWaitForKernelObject(&Event);
  return NetPnPEventNotification->NetPnPEvent.NdisReserved[1];
}
