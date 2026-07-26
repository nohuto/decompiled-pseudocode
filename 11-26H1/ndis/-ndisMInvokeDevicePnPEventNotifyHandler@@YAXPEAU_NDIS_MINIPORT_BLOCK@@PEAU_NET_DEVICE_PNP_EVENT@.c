/*
 * XREFs of ?ndisMInvokeDevicePnPEventNotifyHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x1401669E0
 * Callers:
 *     ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x14007C2A0 (-ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@.c)
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x14007D9D0 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x140044020 (-ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ??1MiniportDevicePnPEventNotify@AzTelemetry@@UEAA@XZ @ 0x1400745C0 (--1MiniportDevicePnPEventNotify@AzTelemetry@@UEAA@XZ.c)
 *     ??0MiniportDevicePnPEventNotify@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@@Z @ 0x14008DA70 (--0MiniportDevicePnPEventNotify@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_E.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMInvokeDevicePnPEventNotifyHandler(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_DEVICE_PNP_EVENT *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rsi
  enum _NDIS_DEVICE_PNP_EVENT DevicePnPEvent; // ebp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // [rsp+30h] [rbp-68h]
  char v10[4]; // [rsp+30h] [rbp-68h]
  _BYTE v11[64]; // [rsp+40h] [rbp-58h] BYREF

  DriverHandle = a1->DriverHandle;
  DevicePnPEvent = a2->DevicePnPEvent;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = a2->DevicePnPEvent;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xF4u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      *(_DWORD *)v10);
  }
  if ( ndisIsMiniportVerified(DriverHandle) )
  {
    AzTelemetry::MiniportDevicePnPEventNotify::MiniportDevicePnPEventNotify(
      (AzTelemetry::MiniportDevicePnPEventNotify *)v11,
      a1,
      DevicePnPEvent);
    (*((void (__fastcall **)(void *, struct _NET_DEVICE_PNP_EVENT *, struct _NDIS_MINIPORT_BLOCK *, void *, void (__fastcall *)(void *, _NET_DEVICE_PNP_EVENT *)))ndisVerifierNdisDispatch
     + 6))(
      a1->MiniportAdapterContext,
      a2,
      a1,
      a1->VerifierContext,
      DriverHandle->MiniportDriverCharacteristics.DevicePnPEventNotifyHandler);
  }
  else
  {
    AzTelemetry::MiniportDevicePnPEventNotify::MiniportDevicePnPEventNotify(
      (AzTelemetry::MiniportDevicePnPEventNotify *)v11,
      a1,
      DevicePnPEvent);
    DriverHandle->MiniportDriverCharacteristics.DevicePnPEventNotifyHandler(a1->MiniportAdapterContext, a2);
  }
  AzTelemetry::MiniportDevicePnPEventNotify::~MiniportDevicePnPEventNotify(
    (AzTelemetry::MiniportDevicePnPEventNotify *)v11,
    v6,
    v7,
    v8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v9) = DevicePnPEvent;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xF5u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      v9);
  }
}
