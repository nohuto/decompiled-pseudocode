/*
 * XREFs of UsbhRegCreateUsbflagsKey @ 0x140052E80
 * Callers:
 *     UsbhGetMSOS_Descriptor @ 0x1400425A4 (UsbhGetMSOS_Descriptor.c)
 *     UsbhRegDriverEntry @ 0x140052EE0 (UsbhRegDriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS UsbhRegCreateUsbflagsKey()
{
  NTSTATUS result; // eax

  result = RtlCheckRegistryKey(2u, (PWSTR)"u\x00s\x00b\x00f\x00l\x00a\x00g\x00s");
  if ( (result & 0xC0000000) == 0xC0000000 )
    return RtlCreateRegistryKey(2u, (PWSTR)"u\x00s\x00b\x00f\x00l\x00a\x00g\x00s");
  return result;
}
