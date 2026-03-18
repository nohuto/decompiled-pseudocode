/*
 * XREFs of Endpoint_Disable @ 0x14001DD5C
 * Callers:
 *     UsbDevice_UcxEvtDisable @ 0x14001C480 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_DisableCompletion @ 0x14001CA4C (UsbDevice_DisableCompletion.c)
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x14001D4A4 (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_SetDeviceDisabled @ 0x14001DBB4 (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_UcxEvtReset @ 0x1400244A0 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_EnableCompletion @ 0x140025600 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_DeviceResetCompletion @ 0x140026930 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x14002EDB0 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     UsbDevice_UcxEvtEnable @ 0x140032FA0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x14003B660 (UsbDevice_EndpointsConfigureCompletion.c)
 * Callees:
 *     Endpoint_Disable_Internal @ 0x14001EB24 (Endpoint_Disable_Internal.c)
 *     ESM_AddEvent @ 0x140020E80 (ESM_AddEvent.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x140040B70 (Controller_DecrementNumberOfEndpointsOffloaded.c)
 */

__int64 __fastcall Endpoint_Disable(__int64 a1, __int64 a2)
{
  char v2; // di

  v2 = a2;
  if ( *(_DWORD *)(a1 + 1368) == 2 )
  {
    *(_DWORD *)(a1 + 1368) = 0;
    Controller_DecrementNumberOfEndpointsOffloaded(*(_QWORD *)a1);
  }
  LOBYTE(a2) = v2;
  Endpoint_Disable_Internal(a1, a2);
  return ESM_AddEvent((PVOID)(a1 + 304));
}
