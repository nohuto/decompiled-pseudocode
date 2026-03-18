/*
 * XREFs of ACPIWriteEmcaSupportToRegistry @ 0x1400BA4C0
 * Callers:
 *     ACPIRootInitialize @ 0x1400B9B0C (ACPIRootInitialize.c)
 * Callees:
 *     OSWriteRegValue @ 0x1400C9238 (OSWriteRegValue.c)
 *     OSCreateHandle @ 0x1400C9370 (OSCreateHandle.c)
 */

int __fastcall ACPIWriteEmcaSupportToRegistry(char *Data)
{
  int result; // eax

  result = OSCreateHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters");
  if ( result >= 0 )
  {
    OSWriteRegValue("EMcaLoggingSupport", 0LL, Data, 1u);
    return OSWriteRegValue("EMcaL1DirectoryBase", 0LL, Data + 8, 8u);
  }
  return result;
}
