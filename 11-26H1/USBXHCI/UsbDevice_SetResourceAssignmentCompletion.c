/*
 * XREFs of UsbDevice_SetResourceAssignmentCompletion @ 0x140035CC0
 * Callers:
 *     <none>
 * Callees:
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002F314 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_SetConfigureRequestStatus @ 0x140035D98 (UsbDevice_SetConfigureRequestStatus.c)
 *     Controller_IncrementNumberOfEndpointsOffloaded @ 0x140041284 (Controller_IncrementNumberOfEndpointsOffloaded.c)
 */

void __fastcall UsbDevice_SetResourceAssignmentCompletion(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v2; // rbx
  int v3; // ecx
  __int64 v4; // rcx
  int v5; // edx

  v1 = *(__int64 **)(a1 + 48);
  v2 = v1[2];
  --*(_DWORD *)(v2 + 588);
  if ( *(_BYTE *)(a1 + 60) == 1 )
  {
    if ( *(_DWORD *)(v2 + 608) == 8 )
    {
      v3 = *((_DWORD *)v1 + 342);
      if ( v3 == 2 )
      {
        Debug_FreAssertMsg(
          (__int64)"Endpoint is already offloaded",
          0,
          (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.h",
          1356);
      }
      else
      {
        if ( *(_DWORD *)(*v1 + 1036) == 2 )
          Debug_FreAssertMsg(
            (__int64)"Invalid current offload state",
            v3 == 1,
            (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.h",
            1363);
        v4 = *v1;
        *((_DWORD *)v1 + 342) = 2;
        Controller_IncrementNumberOfEndpointsOffloaded(v4);
      }
    }
  }
  else
  {
    UsbDevice_SetConfigureRequestStatus(v2, 3221225473LL);
    *(_BYTE *)(v2 + 592) = 1;
  }
  if ( !*(_DWORD *)(v2 + 588) )
  {
    v5 = 1;
    if ( *(_BYTE *)(v2 + 592) )
      v5 = 2;
    UsbDevice_QueueConfigureEndpointEvent(v2, v5);
  }
}
