/*
 * XREFs of NdisLWMUninitializeNetworkInterface @ 0x140095180
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140007140 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000AC50 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140016370 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400220A0 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1400513F0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisPnPRemoveDeviceEx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140068C70 (-ndisPnPRemoveDeviceEx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRemoveMiniportFromGlobalList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140070980 (-ndisRemoveMiniportFromGlobalList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007F1A0 (-ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x14017A440 (-ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 */

void __fastcall NdisLWMUninitializeNetworkInterface(_NDIS_MINIPORT_BLOCK *this)
{
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      160,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)this);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( (this->Flags & 0x100) == 0 )
    ndisBugCheckEx(0x29uLL, 4uLL, (ULONG_PTR)this, 0LL);
  ndisReferenceMiniportNoCheck(this, 0x6Au);
  ndisLogMiniportEvent(this, NdisMEvent_DeviceRemove);
  this->OldPnPDeviceState = this->PnPDeviceState;
  this->PnPDeviceState = NdisPnPDeviceQueryRemoved;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  this->RemoveReadyEvent = &Event;
  ndisPnPRemoveDeviceEx(this);
  ndisDereferenceMiniport(this, 0x6Au);
  ndisWaitForKernelObject(&Event);
  this->RemoveReadyEvent = 0LL;
  if ( ndisIsMiniportStarted(this) )
  {
    ndisDeQueueMiniportOnDriver(this, this->DriverHandle);
    ndisDereferenceDriver(this->DriverHandle, 0, 2u);
    if ( (this->Flags & 0x20000) != 0 )
      ndisDereferencePackage((PVOID *)&dword_14011C018);
  }
  ndisRemoveMiniportFromGlobalList(this);
  ndisMDeleteMiniportBlockOnRemove(this);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      161,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)this);
}
