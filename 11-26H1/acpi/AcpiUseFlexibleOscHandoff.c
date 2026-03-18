/*
 * XREFs of AcpiUseFlexibleOscHandoff @ 0x1400B3D60
 * Callers:
 *     DriverEntry @ 0x1400D8CB0 (DriverEntry.c)
 * Callees:
 *     OSReadRegValue @ 0x1400C8470 (OSReadRegValue.c)
 *     OSOpenHandle @ 0x1400C8D44 (OSOpenHandle.c)
 */

char AcpiUseFlexibleOscHandoff()
{
  if ( (int)OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters") >= 0 )
  {
    OSReadRegValue("UseFlexibleOscHandoff");
    ZwClose(0LL);
  }
  return 0;
}
