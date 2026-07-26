/*
 * XREFs of ?ndisMInvokeShutdown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SHUTDOWN_ACTION@@@Z @ 0x1400A01CC
 * Callers:
 *     ?ndisBugcheckHandler@@YAXPEAXK@Z @ 0x1400942D0 (-ndisBugcheckHandler@@YAXPEAXK@Z.c)
 *     ?ndisMShutdownMiniport@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401752F8 (-ndisMShutdownMiniport@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMInvokeShutdown(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_SHUTDOWN_ACTION a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rsi
  __int64 v5; // [rsp+30h] [rbp-18h]

  DriverHandle = a1->DriverHandle;
  if ( a2 != NdisShutdownBugCheck && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xF6u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      a2);
  DriverHandle->MiniportDriverCharacteristics.ShutdownHandlerEx(a1->MiniportAdapterContext, a2);
  if ( a2 != NdisShutdownBugCheck && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v5) = a2;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xF7u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      v5);
  }
}
