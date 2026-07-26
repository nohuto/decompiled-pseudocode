/*
 * XREFs of ?ndisMInvokeHalt@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z @ 0x140168370
 * Callers:
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017E510 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x140044020 (-ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ??1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ @ 0x140070410 (--1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ.c)
 *     ??0MiniportHaltTelemetry@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z @ 0x14008F1A0 (--0MiniportHaltTelemetry@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMInvokeHalt(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_HALT_ACTION a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _BYTE v8[64]; // [rsp+40h] [rbp-48h] BYREF

  DriverHandle = a1->DriverHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xE4u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      DriverHandle);
  if ( ndisIsMiniportVerified(DriverHandle) )
  {
    AzTelemetry::MiniportHaltTelemetry::MiniportHaltTelemetry((AzTelemetry::MiniportHaltTelemetry *)v8, a1, a2);
    (*((void (__fastcall **)(void *, _QWORD, struct _NDIS_MINIPORT_BLOCK *, void *, void (__fastcall *)(void *, _NDIS_HALT_ACTION)))ndisVerifierNdisDispatch
     + 7))(
      a1->MiniportAdapterContext,
      (unsigned int)a2,
      a1,
      a1->VerifierContext,
      DriverHandle->MiniportDriverCharacteristics.HaltHandlerEx);
  }
  else
  {
    AzTelemetry::MiniportHaltTelemetry::MiniportHaltTelemetry((AzTelemetry::MiniportHaltTelemetry *)v8, a1, a2);
    DriverHandle->MiniportDriverCharacteristics.HaltHandlerEx(a1->MiniportAdapterContext, a2);
  }
  AzTelemetry::MiniportHaltTelemetry::~MiniportHaltTelemetry((AzTelemetry::MiniportHaltTelemetry *)v8, v5, v6, v7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xE5u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      DriverHandle);
}
