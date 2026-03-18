/*
 * XREFs of WdmlibIoCreateDeviceSecure @ 0x140430D40
 * Callers:
 *     DpiPdoAddPdo @ 0x140442608 (DpiPdoAddPdo.c)
 *     DriverEntry @ 0x14044C078 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     WdmlibInit @ 0x140235EA4 (WdmlibInit.c)
 */

NTSTATUS __stdcall WdmlibIoCreateDeviceSecure(
        PDRIVER_OBJECT DriverObject,
        ULONG DeviceExtensionSize,
        PUNICODE_STRING DeviceName,
        ULONG DeviceType,
        ULONG DeviceCharacteristics,
        BOOLEAN Exclusive,
        PCUNICODE_STRING DefaultSDDLString,
        LPCGUID DeviceClassGuid,
        PDEVICE_OBJECT *DeviceObject)
{
  if ( !WdmlibInitialized )
    WdmlibInit();
  return ((__int64 (__fastcall *)(PDRIVER_OBJECT, _QWORD, PUNICODE_STRING, _QWORD, ULONG, _BYTE, PCUNICODE_STRING, LPCGUID, PDEVICE_OBJECT *))PfnIoCreateDeviceSecure)(
           DriverObject,
           DeviceExtensionSize,
           DeviceName,
           DeviceType,
           DeviceCharacteristics,
           0,
           DefaultSDDLString,
           DeviceClassGuid,
           DeviceObject);
}
