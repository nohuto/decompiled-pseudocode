/*
 * XREFs of RIMRegOpenDeviceInstanceKey @ 0x1400B19B8
 * Callers:
 *     RIMPopulateExtendedKeyboardDeviceProperties @ 0x1401EC314 (RIMPopulateExtendedKeyboardDeviceProperties.c)
 *     RIMPopulateExtendedMouseDeviceProperties @ 0x1401EC394 (RIMPopulateExtendedMouseDeviceProperties.c)
 *     RIMPopulateExtendedPointerDeviceProperties @ 0x1401EC44C (RIMPopulateExtendedPointerDeviceProperties.c)
 * Callees:
 *     RIMGetDeviceObjectPointer @ 0x14007A964 (RIMGetDeviceObjectPointer.c)
 *     RIMGetPointerDevicePDO @ 0x1400B23E4 (RIMGetPointerDevicePDO.c)
 */

void *__fastcall RIMRegOpenDeviceInstanceKey(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3)
{
  PVOID v4; // [rsp+30h] [rbp-10h] BYREF
  PVOID Object; // [rsp+50h] [rbp+10h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp+18h]
  void *DeviceRegKey; // [rsp+60h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+28h] BYREF

  DeviceRegKey = 0LL;
  Object = 0LL;
  v4 = 0LL;
  Handle = 0LL;
  DeviceObject = 0LL;
  if ( (int)RIMGetDeviceObjectPointer(a1 + 12, a2, a3, &Handle, &v4, (PDEVICE_OBJECT *)&Object) >= 0 )
  {
    ObfReferenceObject(Object);
    if ( (int)RIMGetPointerDevicePDO((PDEVICE_OBJECT)Object) >= 0 )
    {
      if ( IoOpenDeviceRegistryKey(DeviceObject, 1u, 0x20019u, &DeviceRegKey) < 0 )
        DeviceRegKey = 0LL;
      ObfDereferenceObject(DeviceObject);
    }
    ZwClose(Handle);
    ObfDereferenceObject(v4);
    ObfDereferenceObject(Object);
  }
  return DeviceRegKey;
}
