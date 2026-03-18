/*
 * XREFs of OSConvertDeviceHandleToNSHANDLE @ 0x140024CD8
 * Callers:
 *     ACPIEcRemoveOpRegionHandler @ 0x1400AF134 (ACPIEcRemoveOpRegionHandler.c)
 *     DeRegisterOpRegionHandler @ 0x1400B5630 (DeRegisterOpRegionHandler.c)
 *     RegisterOpRegionHandler @ 0x1400B5670 (RegisterOpRegionHandler.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1400CFA30 (AcpiGetFullyQualifiedBiosName.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall OSConvertDeviceHandleToNSHANDLE(ULONG_PTR a1)
{
  return *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 760);
}
