/*
 * XREFs of ?ndisMInvokeAddDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009FE7C
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x140023560 (WPP_RECORDER_SF_qql_ea_140023560.c)
 *     ??$?0H$0A@$0A@@?$DriverCallbackBase@U_NDIS_MINIPORT_BLOCK@@H@Details@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@AEBH@Z @ 0x14009EF08 (--$-0H$0A@$0A@@-$DriverCallbackBase@U_NDIS_MINIPORT_BLOCK@@H@Details@AzTelemetry@@QEAA@PEBU_NDIS.c)
 *     ??1MiniportAddDeviceTelemetry@AzTelemetry@@UEAA@XZ @ 0x1400E6C7C (--1MiniportAddDeviceTelemetry@AzTelemetry@@UEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMInvokeAddDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  void *MiniportDriverContext; // rdx
  char v5[4]; // [rsp+38h] [rbp-50h]
  _QWORD v6[8]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v7; // [rsp+90h] [rbp+8h] BYREF

  DriverHandle = a1->DriverHandle;
  v7 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xD4u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)DriverHandle,
      a1);
  AzTelemetry::Details::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,int>::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,int>(
    (__int64)v6,
    (__int64)a1,
    (__int64)&v7);
  MiniportDriverContext = DriverHandle->MiniportDriverContext;
  v6[0] = &AzTelemetry::MiniportAddDeviceTelemetry::`vftable';
  v7 = DriverHandle->AddDeviceHandler(a1, MiniportDriverContext);
  AzTelemetry::MiniportAddDeviceTelemetry::~MiniportAddDeviceTelemetry((AzTelemetry::MiniportAddDeviceTelemetry *)v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v5 = v7;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xD5u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)DriverHandle,
      (char)a1,
      *(_DWORD *)v5);
  }
  return v7;
}
