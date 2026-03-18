/*
 * XREFs of TUNNEL_UpdateUsb4HostPowerRelations @ 0x1400938FC
 * Callers:
 *     TUNNEL_EvtWorkitemPnpInterfaceNotification @ 0x140092B90 (TUNNEL_EvtWorkitemPnpInterfaceNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x140007470 (WPP_RECORDER_SF_qd.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x140042B6C (McTemplateK0ppq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TUNNEL_UpdateUsb4HostPowerRelations(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // esi
  struct _DEVICE_OBJECT *v8; // rax
  __int64 v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+30h] [rbp-18h]

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a2 + 16),
    0LL);
  if ( !*(_DWORD *)(a2 + 40) || *(_BYTE *)(a2 + 44) )
  {
LABEL_13:
    v8 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 264))(
                                    WdfDriverGlobals,
                                    a1[2]);
    IoInvalidateDeviceRelations(v8, PowerRelations);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
             WdfDriverGlobals,
             *(_QWORD *)(a2 + 16));
  }
  v4 = PoFxAddComponentRelation(a1[328], 0LL, *(_QWORD *)(a2 + 32), &GUID_NULL);
  v7 = v4;
  if ( v4 >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = v4;
      WPP_RECORDER_SF_qd(
        a1[317],
        4u,
        3u,
        0x26u,
        (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
        *(_QWORD *)(a2 + 32),
        v13);
    }
    if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 4) != 0 )
    {
      LODWORD(v10) = v7;
      McTemplateK0ppq_EtwWriteTransfer(
        v5,
        &USBHUB3_ETW_EVENT_HUB_ADDED_COMPONENT_RELATION,
        v6,
        a1[31],
        *(_QWORD *)(a2 + 32),
        v10);
    }
    *(_BYTE *)(a2 + 44) = 1;
    goto LABEL_13;
  }
  if ( (byte_140070D4B & 0x40) != 0 )
  {
    v11 = v4;
    McTemplateK0ppq_EtwWriteTransfer(
      *(_QWORD *)(a2 + 32),
      &USBHUB3_ETW_EVENT_HUB_ADD_COMPONENT_RELATION_FAILURE,
      v6,
      a1[31],
      *(_QWORD *)(a2 + 32),
      v11);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = v7;
    WPP_RECORDER_SF_qd(
      a1[317],
      2u,
      3u,
      0x25u,
      (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
      *(_QWORD *)(a2 + 32),
      v12);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           *(_QWORD *)(a2 + 16));
}
