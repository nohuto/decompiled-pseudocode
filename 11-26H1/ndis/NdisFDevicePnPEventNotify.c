/*
 * XREFs of NdisFDevicePnPEventNotify @ 0x1400523E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14008C720 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __stdcall NdisFDevicePnPEventNotify(NDIS_HANDLE NdisFilterHandle, PNET_DEVICE_PNP_EVENT NetDevicePnPEvent)
{
  KIRQL v4; // al
  unsigned __int8 *NdisReserved; // rdx
  KIRQL v6; // bp
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v8[5]; // [rsp+48h] [rbp-30h] BYREF

  v8[1] = NdisFilterHandle;
  v8[3] = NetDevicePnPEvent;
  v8[0] = 0LL;
  v8[2] = 0LL;
  if ( KeExpandKernelStackAndCalloutEx(ndisFDevicePnPEventNotifyInternal, v8, (unsigned int)Size, 0, 0LL) < 0 )
  {
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisFilterHandle + 18);
    NdisReserved = (unsigned __int8 *)NdisFilterHandle + 264;
    *((_QWORD *)NdisFilterHandle + 19) = KeGetCurrentThread();
    v6 = v4;
    if ( *((_QWORD *)NdisFilterHandle + 33) )
      NdisReserved = NetDevicePnPEvent->NdisReserved;
    *(_QWORD *)NdisReserved = NetDevicePnPEvent;
    *(_QWORD *)&NetDevicePnPEvent->NdisReserved[8] = &Event;
    *(_QWORD *)NetDevicePnPEvent->NdisReserved = 0LL;
    ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle);
    *((_QWORD *)NdisFilterHandle + 19) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v6);
    ndisWaitForKernelObject(&Event);
  }
}
