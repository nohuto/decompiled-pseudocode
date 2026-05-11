/*
 * XREFs of RegistryReadPnPKeyValue @ 0x14002D584
 * Callers:
 *     USBHwGetCaptureRequestSize @ 0x14002D38C (USBHwGetCaptureRequestSize.c)
 *     USBHwGetDeviceIDString @ 0x14002D400 (USBHwGetDeviceIDString.c)
 * Callees:
 *     RegistryGetValue @ 0x140034360 (RegistryGetValue.c)
 */

__int64 __fastcall RegistryReadPnPKeyValue(struct _DEVICE_OBJECT *a1)
{
  NTSTATUS Value; // ebx
  HANDLE Handle; // [rsp+20h] [rbp-18h] BYREF

  Handle = 0LL;
  Value = IoOpenDeviceRegistryKey(a1, 2u, 0xF003Fu, &Handle);
  if ( Value >= 0 )
  {
    Value = RegistryGetValue(Handle);
    ZwClose(Handle);
  }
  return (unsigned int)Value;
}
