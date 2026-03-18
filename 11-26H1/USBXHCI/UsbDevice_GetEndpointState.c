/*
 * XREFs of UsbDevice_GetEndpointState @ 0x14002276C
 * Callers:
 *     Endpoint_OnResetEndpointResetCompletion @ 0x14001DF10 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_OnCancelStopCompletion @ 0x140022380 (Endpoint_OnCancelStopCompletion.c)
 *     UsbDevice_DeviceResetCompletion @ 0x140026930 (UsbDevice_DeviceResetCompletion.c)
 * Callees:
 *     XilDeviceSlot_QueryEndpointContextInfo @ 0x1400241F4 (XilDeviceSlot_QueryEndpointContextInfo.c)
 */

__int64 __fastcall UsbDevice_GetEndpointState(__int64 a1, int a2)
{
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  XilDeviceSlot_QueryEndpointContextInfo(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL), a1, a2, (unsigned int)&v3, 0LL);
  return v3;
}
