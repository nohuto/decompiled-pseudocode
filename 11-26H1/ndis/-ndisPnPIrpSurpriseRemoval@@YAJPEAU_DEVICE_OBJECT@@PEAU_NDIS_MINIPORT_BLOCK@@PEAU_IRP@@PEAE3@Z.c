/*
 * XREFs of ?ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x140081C20
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x140005350 (NdisWdfPnpPowerEventHandler.c)
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14000A2D0 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140007140 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000AC50 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x14000D3F0 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400220A0 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x14007C2A0 (-ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x14008F6C0 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140154FC0 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPnPIrpSurpriseRemoval(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  bool v8; // zf
  bool v9; // cc
  unsigned __int8 v10; // cl

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      9u,
      0x27u,
      (struct _GUID *)&WPP_a0375633690b3eae5e161e1c8b2d1e08_Traceguids,
      (char)a2,
      &a2->pAdapterInstanceName->Length);
  NdisTraceLoggingDeviceRemoved(a2, 3LL);
  ndisLogMiniportEvent(a2, NdisMEvent_DeviceSurpriseRemoval);
  _InterlockedOr((volatile signed __int32 *)&a2->InterlockedFlags, 0x200u);
  a2->PnPFlags = a2->PnPFlags & 0xFFFEFFEF | 0x10;
  if ( a3 )
    a3->IoStatus.Status = 0;
  if ( ndisIsMiniportStarted(a2) && a2->PnPDeviceState == NdisPnPDeviceStarted && (a2->PnPFlags & 0x4000) == 0 )
    ndisDevicePnPEventNotifyMiniport(a2, NdisDevicePnPEventSurpriseRemoved, 0LL, 0);
  ndisReferenceMiniportNoCheck(a2, 0x1Eu);
  ndisReferenceMiniportNoCheck(a2, 0x1Du);
  v8 = a2->MajorNdisVersion == 6;
  v9 = a2->MajorNdisVersion <= 6u;
  a2->PnPDeviceState = NdisPnPDeviceRemoved;
  if ( v9 && (!v8 || a2->MinorNdisVersion < 0x28u) || (a2->Flags & 0x80u) != 0 )
  {
    ndisPnPIrpSurpriseRemovalInner(a2);
    v10 = 1;
  }
  else
  {
    if ( a3 )
      a3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    a2->SurpriseRemovalWorkItem.Irp = a3;
    a2->SurpriseRemovalWorkItem.Workitem.Parameter = &a2->SurpriseRemovalWorkItem;
    a2->SurpriseRemovalWorkItem.Workitem.WorkerRoutine = ndisQueuedPnPIrpSurpriseRemoval;
    a2->SurpriseRemovalWorkItem.Workitem.List.Flink = 0LL;
    ExQueueWorkItem(&a2->SurpriseRemovalWorkItem.Workitem, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
    v10 = 0;
  }
  *a5 = v10;
  *a4 = 0;
  if ( *a5 || (a2->Flags & 0x80u) != 0 )
    return 0LL;
  else
    return 259LL;
}
