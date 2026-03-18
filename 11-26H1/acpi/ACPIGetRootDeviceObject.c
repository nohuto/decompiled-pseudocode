/*
 * XREFs of ACPIGetRootDeviceObject @ 0x140055208
 * Callers:
 *     ACPIThermalQueryCoolingInterfaces @ 0x14006A3C8 (ACPIThermalQueryCoolingInterfaces.c)
 * Callees:
 *     <none>
 */

ULONG_PTR ACPIGetRootDeviceObject()
{
  ULONG_PTR result; // rax

  result = RootDeviceExtension;
  if ( RootDeviceExtension )
    return *(_QWORD *)(RootDeviceExtension + 768);
  return result;
}
