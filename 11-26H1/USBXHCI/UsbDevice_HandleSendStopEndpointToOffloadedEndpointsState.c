/*
 * XREFs of UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x14004E428
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002F314 (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList @ 0x14002ED38 (UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002F314 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_SetConfigureRequestStatus @ 0x140035D98 (UsbDevice_SetConfigureRequestStatus.c)
 *     UsbDevice_SendStopEndpointToOffloadedEndpoint @ 0x14004E990 (UsbDevice_SendStopEndpointToOffloadedEndpoint.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx

  result = UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList(a2);
  v5 = 0LL;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a1 + 588) = result;
    if ( *(_DWORD *)(a2 + 40) )
    {
      do
      {
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                   WdfDriverGlobals,
                   *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v5),
                   off_14006AFE8);
        if ( *(_DWORD *)(result + 1368) == 2 )
          result = UsbDevice_SendStopEndpointToOffloadedEndpoint(a1, result);
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < *(_DWORD *)(a2 + 40) );
    }
  }
  else
  {
    Debug_FreAssertMsg(
      (__int64)"Unexpected numberOfOffloadedEndpointsInDropEndpointsList in UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
      3724);
    UsbDevice_SetConfigureRequestStatus(a1, -1073741595);
    return UsbDevice_QueueConfigureEndpointEvent(v6, 2);
  }
  return result;
}
