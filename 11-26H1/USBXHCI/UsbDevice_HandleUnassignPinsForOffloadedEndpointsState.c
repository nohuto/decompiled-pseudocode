/*
 * XREFs of UsbDevice_HandleUnassignPinsForOffloadedEndpointsState @ 0x14004E4E4
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002F314 (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList @ 0x14002ED38 (UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList.c)
 *     UsbDevice_SetResourceAssignment @ 0x14004EA38 (UsbDevice_SetResourceAssignment.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall UsbDevice_HandleUnassignPinsForOffloadedEndpointsState(__int64 a1, __int64 a2)
{
  int v4; // ebx
  int v5; // eax
  int v6; // ebp
  unsigned int i; // edi
  __int64 v8; // rax

  v4 = 0;
  Debug_FreAssertMsg(
    (__int64)"Unexpected EndpointsToDisableCount",
    *(_DWORD *)(a2 + 40) != 0,
    (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
    4506);
  v5 = UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList(a2);
  *(_DWORD *)(a1 + 588) = v5;
  v6 = v5;
  for ( i = 0; i < *(_DWORD *)(a2 + 40); ++i )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
           WdfDriverGlobals,
           *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL * i),
           off_14006AFE8);
    if ( *(_DWORD *)(v8 + 1368) == 2 )
    {
      ++v4;
      UsbDevice_SetResourceAssignment(a1, v8, 0LL);
    }
  }
  Debug_FreAssertMsg(
    (__int64)"Mismatch encountered in UnassignPinsForOffloadedEndpointsState",
    v4 == v6,
    (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
    4530);
}
