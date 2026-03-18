/*
 * XREFs of RIMIsHIDMouse @ 0x1400EF970
 * Callers:
 *     RIMLoadDeviceLegacyInfo @ 0x1400EDEFC (RIMLoadDeviceLegacyInfo.c)
 *     IsMouseDeviceOnIgnoreList @ 0x1400EF3E4 (IsMouseDeviceOnIgnoreList.c)
 * Callees:
 *     RIMGetPointerDevicePDO @ 0x1400EFA1C (RIMGetPointerDevicePDO.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memcmp @ 0x14024C590 (memcmp.c)
 */

_BOOL8 __fastcall RIMIsHIDMouse(struct _DEVICE_OBJECT *a1)
{
  BOOL v1; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-38h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-30h]
  __int128 PropertyBuffer; // [rsp+40h] [rbp-28h] BYREF

  v1 = 0;
  DeviceObject = 0LL;
  if ( (int)RIMGetPointerDevicePDO(a1) >= 0 )
  {
    ResultLength = 0;
    PropertyBuffer = 0LL;
    if ( IoGetDeviceProperty(DeviceObject, DevicePropertyBusTypeGuid, 0x10u, &PropertyBuffer, &ResultLength) >= 0 )
      v1 = memcmp(&PropertyBuffer, &GUID_BUS_TYPE_HID, 0x10uLL) == 0;
    ObfDereferenceObject(DeviceObject);
  }
  return v1;
}
