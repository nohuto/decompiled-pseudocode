/*
 * XREFs of ACPIInternalDeviceQueryResourceRequirements @ 0x1400B1540
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIBusIrpUnhandled @ 0x1400311D0 (ACPIBusIrpUnhandled.c)
 *     ACPIPccInterruptDeviceQueryResourceRequirements @ 0x1400B29B8 (ACPIPccInterruptDeviceQueryResourceRequirements.c)
 */

__int64 __fastcall ACPIInternalDeviceQueryResourceRequirements(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( strstr(*(const char **)(DeviceExtension + 608), "ACPI\\PccInt") )
    return ACPIPccInterruptDeviceQueryResourceRequirements(a1, a2);
  else
    return ACPIBusIrpUnhandled(a1, a2);
}
