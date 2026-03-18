/*
 * XREFs of ACPIWriteStrictS4SupportToRegistry @ 0x1400BA544
 * Callers:
 *     ACPIRootInitialize @ 0x1400B9B0C (ACPIRootInitialize.c)
 * Callees:
 *     OSWriteRegValue @ 0x1400C9238 (OSWriteRegValue.c)
 *     OSCreateHandle @ 0x1400C9370 (OSCreateHandle.c)
 */

int ACPIWriteStrictS4SupportToRegistry()
{
  int result; // eax

  result = OSCreateHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters");
  if ( result >= 0 )
    return OSWriteRegValue("StrictS4CheckSupport", 0LL, &AcpiStrictS4Supported, 1u);
  return result;
}
