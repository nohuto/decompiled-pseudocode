/*
 * XREFs of ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400AA224
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x140005350 (NdisWdfPnpPowerEventHandler.c)
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14000A2D0 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140007140 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000AC50 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x14000D3F0 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140016370 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140022550 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1400513F0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400824B0 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x14008F6C0 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ?ndisPnPStopDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140094774 (-ndisPnPStopDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline @ 0x140094BEC (Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisMiniportRevokeOpenHandles@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A3C28 (-ndisMiniportRevokeOpenHandles@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x14017A440 (-ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPnPIrpStopDevice(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rax
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      9u,
      0x2Au,
      (struct _GUID *)&WPP_a0375633690b3eae5e161e1c8b2d1e08_Traceguids,
      (char)a2,
      &a2->pAdapterInstanceName->Length);
  NdisTraceLoggingDeviceRemoved();
  ndisLogMiniportEvent(a2, NdisMEvent_DeviceStop);
  ndisPowerSaveStop(a2, 5u);
  a2->PnPFlags &= ~0x10000u;
  a2->PnPDeviceState = NdisPnPDeviceStopped;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  a2->PnPDeviceState = NdisPnPDeviceStopped;
  a2->RemoveReadyEvent = &Event;
  ndisReferenceMiniport(a2, 0x1Cu);
  a2->PnPFlags |= 0x10u;
  ndisPnPStopDevice(a2);
  if ( (unsigned int)Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline() && (a2->Flags & 0x80u) != 0 )
    ndisMiniportRevokeOpenHandles(a2);
  if ( a2->RemoveReadyEvent )
  {
    ndisDereferenceMiniport(a2, 0x1Cu);
    ndisWaitForKernelObject(&Event);
    a2->RemoveReadyEvent = 0LL;
  }
  MiniportSGDmaBlock = a2->MiniportSGDmaBlock;
  if ( MiniportSGDmaBlock && MiniportSGDmaBlock->DmaAdapterRefCount == 1 && (a2->Flags & 0x40) != 0 )
  {
    a2->MiniportSGDmaBlock->DmaResourcesReleasedEvent = 0LL;
    ndisDereferenceDmaAdapter(a2->MiniportSGDmaBlock);
    _InterlockedAnd((volatile signed __int32 *)&a2->Flags, 0xFFFFFFBF);
  }
  if ( ndisIsMiniportStarted(a2) )
  {
    ndisDeQueueMiniportOnDriver(a2, a2->DriverHandle);
    ndisDereferenceDriver(a2->DriverHandle, 0, 2u);
    if ( (a2->Flags & 0x20000) != 0 )
      ndisDereferencePackage((PVOID *)&dword_14011C018);
  }
  if ( a3 )
    a3->IoStatus.Status = 0;
  *a5 = 1;
  return 0LL;
}
