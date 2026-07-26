/*
 * XREFs of ?ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008DB30
 * Callers:
 *     ?ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140139D70 (-ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ??$?0X$0A@$0A@@?$DriverCallbackBase@U_NDIS_MINIPORT_BLOCK@@X@Details@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400757C0 (--$-0X$0A@$0A@@-$DriverCallbackBase@U_NDIS_MINIPORT_BLOCK@@X@Details@AzTelemetry@@QEAA@PEBU_NDIS.c)
 *     ??1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ @ 0x1400E6DE4 (--1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMInvokeRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rsi
  void *AddDeviceContext; // rcx
  unsigned __int16 v4; // r9
  _QWORD v5[6]; // [rsp+40h] [rbp-38h] BYREF

  DriverHandle = a1->DriverHandle;
  if ( !DriverHandle->RemoveDeviceHandler )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return;
    v4 = 216;
    goto LABEL_8;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xD6u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)DriverHandle,
      a1);
  AzTelemetry::Details::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,void>::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,void>(
    (__int64)v5,
    (__int64)a1);
  AddDeviceContext = a1->AddDeviceContext;
  v5[0] = &AzTelemetry::MiniportRemoveDeviceTelemetry::`vftable';
  DriverHandle->RemoveDeviceHandler(AddDeviceContext);
  AzTelemetry::MiniportRemoveDeviceTelemetry::~MiniportRemoveDeviceTelemetry((AzTelemetry::MiniportRemoveDeviceTelemetry *)v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 215;
LABEL_8:
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      v4,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)DriverHandle,
      a1);
  }
}
