/*
 * XREFs of AcpiInitializeInterfaces @ 0x1400DB0E4
 * Callers:
 *     DriverEntry @ 0x1400D8CB0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void (__fastcall *AcpiInitializeInterfaces())(__int64 a1)
{
  void (__fastcall *result)(__int64); // rax

  off_14008BDB8 = (__int64 (__fastcall *)())AcpiNullReference;
  off_14008BDC0 = ACPIVectorConnect;
  off_14008BDC8 = (__int64 (__fastcall *)(PVOID))ACPIVectorDisconnect;
  off_14008BDD0[0] = (__int64 (__fastcall *)())ACPIVectorEnable;
  off_14008BDD8[0] = (__int64 (__fastcall *)())ACPIVectorDisable;
  off_14008BDE0[0] = (__int64 (__fastcall *)())ACPIVectorClear;
  off_14008BDE8[0] = (__int64 (__fastcall *)())ACPIRegisterForDeviceNotifications;
  off_14008BDF0 = (__int64 (__fastcall *)())ACPIUnregisterForDeviceNotifications;
  off_14008BD60 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64))ACPIVectorConnect2;
  off_14008BD68 = ACPIVectorDisconnect2;
  off_14008BD70[0] = (__int64 (__fastcall *)())ACPIVectorEnable2;
  off_14008BD78[0] = (__int64 (__fastcall *)())ACPIVectorDisable2;
  off_14008BD80[0] = (__int64 (__fastcall *)())ACPIVectorClear2;
  off_14008BD88[0] = (__int64 (__fastcall *)())ACPIRegisterForDeviceNotifications2;
  off_14008BD90 = (__int64 (__fastcall *)())ACPIUnregisterForDeviceNotifications2;
  off_14008BD10[0] = (__int64 (__fastcall *)())AcpiSetD3ColdSupport;
  off_14008BD18[0] = (__int64 (__fastcall *)())AcpiGetIdleWakeInfo;
  off_14008BD20[0] = (__int64 (__fastcall *)())AcpiGetD3ColdCapability;
  off_14008BD28[0] = (__int64 (__fastcall *)())AcpiGetBusDriverD3ColdSupport;
  off_14008BD30 = (__int64 (__fastcall *)())AcpiGetLastTransitionStatus;
  off_14008BE70 = (__int64 (__fastcall *)())ACPIGetPnpLocationString;
  off_14008BE60 = (__int64 (__fastcall *)())ACPIReferencePnpLocationInterface;
  off_14008BE68 = (__int64 (__fastcall *)(PVOID))ACPIDereferencePnpLocationInterface;
  off_14008BC60 = (__int64 (__fastcall *)())AcpiDeviceResetReference;
  off_14008BC68 = (__int64 (__fastcall *)(PVOID))AcpiDeviceResetDereference;
  off_14008BC70 = (__int64 (__fastcall *)())AcpiDeviceReset;
  off_14008BC88 = (__int64 (__fastcall *)())AcpiQueryBusSpecificResetInfo;
  off_14008BC90 = (__int64 (__fastcall *)(int, int, int, int, __int64))AcpiDeviceBusSpecificReset;
  off_14008BC98 = (__int64 (__fastcall *)())AcpiGetDeviceResetStatus;
  off_14008BE10[0] = (__int64 (__fastcall *)())ACPIReferenceIommuBusInterface;
  off_14008BE18 = (__int64 (__fastcall *)())ACPIDereferenceIommuBusInterface;
  off_14008BE38[0] = (__int64 (__fastcall *)())ACPIIommuGetDeviceProperties;
  off_14008BE40 = (__int64 (__fastcall *)())ACPIIommuGetDeviceId;
  off_14008A590[0] = (__int64 (__fastcall *)())ACPIInterfaceReferenceDeviceExtension;
  off_14008A598[0] = (__int64 (__fastcall *)())ACPIInterfaceDereferenceDeviceExtension;
  result = ACPIBusReenumerateSelf;
  off_14008A5A0 = (__int64 (__fastcall *)())ACPIBusReenumerateSelf;
  off_14008BDB0[0] = (__int64 (__fastcall *)())AcpiNullReference;
  off_14008BD58 = (__int64 (__fastcall *)())AcpiNullReference;
  off_14008BD50[0] = (__int64 (__fastcall *)())AcpiNullReference;
  off_14008BD00[0] = (__int64 (__fastcall *)())AcpiNullReference;
  off_14008BD08[0] = (__int64 (__fastcall *)())AcpiNullReference;
  return result;
}
