/*
 * XREFs of ACPIOverrideUsb4Control @ 0x1400AB060
 * Callers:
 *     ACPIRootInitialize @ 0x1400B9B0C (ACPIRootInitialize.c)
 * Callees:
 *     OSReadRegValue @ 0x1400C8470 (OSReadRegValue.c)
 *     OSOpenHandle @ 0x1400C8D44 (OSOpenHandle.c)
 */

__int64 ACPIOverrideUsb4Control()
{
  __int64 result; // rax

  result = OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters");
  if ( (int)result >= 0 )
  {
    result = OSReadRegValue("USB4OSNativeCMPresent");
    if ( (int)result >= 0 )
      AcpiRootFeaturesSupported &= ~0x40000u;
  }
  return result;
}
