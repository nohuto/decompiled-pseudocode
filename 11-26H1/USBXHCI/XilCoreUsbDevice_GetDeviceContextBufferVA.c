/*
 * XREFs of XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1400242C4
 * Callers:
 *     Endpoint_OnResetEndpointConfigure @ 0x1400048E4 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1400054F4 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x140005A68 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     UsbDevice_InitializeInputContextForDropEndpoints @ 0x14001D1C4 (UsbDevice_InitializeInputContextForDropEndpoints.c)
 *     UsbDevice_GetXhciEndpointDequeuePointer @ 0x1400227B0 (UsbDevice_GetXhciEndpointDequeuePointer.c)
 *     XilDeviceSlot_QueryEndpointContextInfo @ 0x1400241F4 (XilDeviceSlot_QueryEndpointContextInfo.c)
 *     UsbDevice_UcxEvtReset @ 0x1400244A0 (UsbDevice_UcxEvtReset.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x140025248 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_SetAddressCompletion @ 0x140026300 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x140039948 (UsbDevice_GetEndpointOffloadInformation.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x14003B660 (UsbDevice_EndpointsConfigureCompletion.c)
 *     Crashdump_InitializeDeviceContext @ 0x140050EC8 (Crashdump_InitializeDeviceContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilCoreUsbDevice_GetDeviceContextBufferVA(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return *(_QWORD *)(result + 16);
  return result;
}
