/*
 * XREFs of UsbhRegCreateUsbflagsKey @ 0x140052980
 * Callers:
 *     UsbhGetMSOS_Descriptor @ 0x140042A78 (UsbhGetMSOS_Descriptor.c)
 *     UsbhRegDriverEntry @ 0x1400529E0 (UsbhRegDriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS UsbhRegCreateUsbflagsKey()
{
  NTSTATUS result; // eax

  result = RtlCheckRegistryKey(2u, (PWSTR)L"usbflags");
  if ( (result & 0xC0000000) == 0xC0000000 )
    return RtlCreateRegistryKey(2u, (PWSTR)L"usbflags");
  return result;
}
