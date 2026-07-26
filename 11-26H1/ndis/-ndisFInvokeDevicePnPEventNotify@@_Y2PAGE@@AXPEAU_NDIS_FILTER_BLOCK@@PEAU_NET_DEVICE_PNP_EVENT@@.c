/*
 * XREFs of ?ndisFInvokeDevicePnPEventNotify@@_Y2PAGE@@AXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x140165B60
 * Callers:
 *     ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x14007C2A0 (-ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@.c)
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x14007D9D0 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisFInvokeDevicePnPEventNotify(struct _NDIS_FILTER_BLOCK *a1, struct _NET_DEVICE_PNP_EVENT *a2)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rbp
  _NDIS_DEVICE_PNP_EVENT DevicePnPEvent; // esi
  __int64 v6; // [rsp+30h] [rbp-28h]
  char v7[4]; // [rsp+30h] [rbp-28h]

  FilterDriver = a1->FilterDriver;
  DevicePnPEvent = a2->DevicePnPEvent;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = a2->DevicePnPEvent;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x79u,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1,
      *(_DWORD *)v7);
  }
  FilterDriver->DefaultFilterCharacteristics.DevicePnPEventNotifyHandler(a1->FilterModuleContext, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v6) = DevicePnPEvent;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x7Au,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1,
      v6);
  }
}
