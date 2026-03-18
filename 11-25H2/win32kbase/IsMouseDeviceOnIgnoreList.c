/*
 * XREFs of IsMouseDeviceOnIgnoreList @ 0x1400B1DA8
 * Callers:
 *     RIMApiSetIsMouseDeviceOnIgnoreList @ 0x1400B1910 (RIMApiSetIsMouseDeviceOnIgnoreList.c)
 * Callees:
 *     RIMGetDeviceObjectPointer @ 0x14007A964 (RIMGetDeviceObjectPointer.c)
 *     ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1400B1E90 (-IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z.c)
 *     RIMIsHIDMouse @ 0x1400B2330 (RIMIsHIDMouse.c)
 */

int __fastcall IsMouseDeviceOnIgnoreList(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING v7; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING v8; // [rsp+50h] [rbp-10h] BYREF
  PVOID Object; // [rsp+80h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+28h] BYREF
  PVOID v11; // [rsp+90h] [rbp+30h] BYREF

  Object = 0LL;
  v11 = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  if ( (int)RIMGetDeviceObjectPointer(
              (struct _UNICODE_STRING *)(a1 + 192),
              a2,
              a3,
              &Handle,
              &v11,
              (PDEVICE_OBJECT *)&Object) < 0 )
    return 0;
  ObfReferenceObject(Object);
  v4 = RIMIsHIDMouse(Object);
  ZwClose(Handle);
  ObfDereferenceObject(v11);
  ObfDereferenceObject(Object);
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\IgnoredExternalMice");
  v7 = *(struct _UNICODE_STRING *)(a1 + 872);
  v8 = DestinationString;
  return IsDeviceOnRegistryList(&v8, &v7, v4);
}
