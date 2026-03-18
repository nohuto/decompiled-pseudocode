/*
 * XREFs of UsbDevice_SetConfigureRequestStatus @ 0x140035D98
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002F314 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_SetResourceAssignmentCompletion @ 0x140035CC0 (UsbDevice_SetResourceAssignmentCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x14003B660 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x14003BF8C (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x14003D300 (UsbDevice_HandleAddAndDropEndpointsState.c)
 *     UsbDevice_DropEndpointsCompletion @ 0x14004E310 (UsbDevice_DropEndpointsCompletion.c)
 *     UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x14004E428 (UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState.c)
 * Callees:
 *     <none>
 */

void __fastcall UsbDevice_SetConfigureRequestStatus(__int64 a1, int a2)
{
  if ( *(_DWORD *)(a1 + 456) == 259 )
    *(_DWORD *)(a1 + 456) = a2;
}
