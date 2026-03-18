/*
 * XREFs of UsbhOpenRegistryKey @ 0x14005FCF4
 * Callers:
 *     UsbhUxdShutdown @ 0x140060388 (UsbhUxdShutdown.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall UsbhOpenRegistryKey(PHANDLE KeyHandle)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\registry\\machine\\system\\currentcontrolset\\services\\usbhub\\uxd_control\\devices\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(KeyHandle, 0xF003Fu, &ObjectAttributes);
}
