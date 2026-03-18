/*
 * XREFs of UsbhParseAndInstallRegistryValueDescriptors @ 0x140043398
 * Callers:
 *     UsbhInstallMsOs20RegistryProperties @ 0x1400430C0 (UsbhInstallMsOs20RegistryProperties.c)
 * Callees:
 *     UsbhGetNextMsOs20Descriptor @ 0x140043050 (UsbhGetNextMsOs20Descriptor.c)
 */

char __fastcall UsbhParseAndInstallRegistryValueDescriptors(
        HANDLE KeyHandle,
        __int64 a2,
        unsigned __int16 *a3,
        char *a4)
{
  unsigned __int16 *v6; // rdi
  __int64 v7; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int16 *v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a3;
  while ( 1 )
  {
    if ( !UsbhGetNextMsOs20Descriptor(a4, &v10, (__int64)a3) )
      return 0;
    v6 = v10;
    if ( !v10 )
      break;
    if ( v10[1] == 4 )
    {
      DestinationString = 0LL;
      v7 = v10[3];
      RtlInitUnicodeString(&DestinationString, v10 + 4);
      if ( ZwSetValueKey(
             KeyHandle,
             &DestinationString,
             0,
             v6[2],
             (char *)v6 + v7 + 10,
             *(unsigned __int16 *)((char *)v6 + v7 + 8)) < 0 )
        return 0;
    }
  }
  return 1;
}
