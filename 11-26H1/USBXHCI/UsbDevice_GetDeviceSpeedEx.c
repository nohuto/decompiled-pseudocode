/*
 * XREFs of UsbDevice_GetDeviceSpeedEx @ 0x14004E410
 * Callers:
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x140005A68 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     UsbDevice_SetAddress @ 0x140025BE0 (UsbDevice_SetAddress.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x140036438 (UsbDevice_ReconfigureEndpoint.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x14003A690 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x14003B660 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x14003BF8C (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_UcxEvtUpdate @ 0x14003C210 (UsbDevice_UcxEvtUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbDevice_GetDeviceSpeedEx(_DWORD *a1)
{
  if ( a1[4] >= 0x40u )
    return (unsigned int)a1[18];
  else
    return (unsigned int)a1[5];
}
