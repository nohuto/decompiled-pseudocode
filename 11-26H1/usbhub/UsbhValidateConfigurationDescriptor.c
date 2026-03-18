/*
 * XREFs of UsbhValidateConfigurationDescriptor @ 0x14005BCEC
 * Callers:
 *     UsbhFdoSelectConfigurationPdo @ 0x140019724 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhGetDeviceInformation @ 0x14003947C (UsbhGetDeviceInformation.c)
 *     UsbhConfigureUsbHub @ 0x14003AC70 (UsbhConfigureUsbHub.c)
 * Callees:
 *     USBD_ValidateConfigurationDescriptorInternal @ 0x140041BC0 (USBD_ValidateConfigurationDescriptorInternal.c)
 */

char __fastcall UsbhValidateConfigurationDescriptor(__int64 a1, unsigned int a2, _DWORD *a3, char a4)
{
  bool v4; // zf
  char v6; // di
  unsigned __int8 *v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_BYTE *)(a1 + 1) == 2;
  v6 = 1;
  v8 = 0LL;
  if ( !v4 )
  {
    v6 = 0;
    if ( a3 )
      *a3 = -1073737984;
  }
  if ( *(_BYTE *)a1 < 9u )
  {
    v6 = 0;
    if ( a3 )
      *a3 = -1073737984;
  }
  if ( a4 )
  {
    if ( (unsigned int)USBD_ValidateConfigurationDescriptorInternal((unsigned __int16 *)a1, a2, (__int64)a3, &v8) )
    {
      v6 = 0;
      if ( a3 )
        *a3 = -1073737984;
    }
  }
  return v6;
}
