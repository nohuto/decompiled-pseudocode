/*
 * XREFs of HUBPDO_EvtDeviceSurpriseRemoval @ 0x140083C50
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x140008774 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBUCX_CheckIfHubIsDisconnected @ 0x14002640C (HUBUCX_CheckIfHubIsDisconnected.c)
 *     HUBMISC_RemoveDeviceInfoFromGlobalChildList @ 0x140033890 (HUBMISC_RemoveDeviceInfoFromGlobalChildList.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     HUBPDO_BillboardCleanup @ 0x140080EF8 (HUBPDO_BillboardCleanup.c)
 */

void __fastcall HUBPDO_EvtDeviceSurpriseRemoval(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rcx

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006D1D0)
                 + 24);
  if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(v1, &USBHUB3_ETW_EVENT_DEVICE_SURPRISE_REMOVAL_START, 0LL, *(_QWORD *)(v2 + 24));
  if ( (unsigned __int8)HUBUCX_CheckIfHubIsDisconnected(*(_QWORD *)v2) )
    HUBMISC_RemoveDeviceInfoFromGlobalChildList(v2);
  **(_BYTE **)(v2 + 16) = 1;
  HUBPDO_BillboardCleanup(v2);
  if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(v3, &USBHUB3_ETW_EVENT_DEVICE_SURPRISE_REMOVAL_COMPLETE, 0LL, *(_QWORD *)(v2 + 24));
}
