/*
 * XREFs of ACPIGpeValidIndex @ 0x140020204
 * Callers:
 *     ACPIGpeIndexToByteIndex @ 0x1400201A8 (ACPIGpeIndexToByteIndex.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x140035060 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIGpeInstallRemoveIndex @ 0x14006154C (ACPIGpeInstallRemoveIndex.c)
 *     ACPIVectorConnect @ 0x14006AC70 (ACPIVectorConnect.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIGpeValidIndex(unsigned int a1)
{
  unsigned int v1; // r8d
  bool result; // al

  result = 1;
  if ( a1 >= 8 * (unsigned int)*((unsigned __int16 *)AcpiInformation + 43) )
  {
    v1 = *((unsigned __int16 *)AcpiInformation + 50);
    if ( a1 < v1 || a1 >= v1 + 8 * *((unsigned __int16 *)AcpiInformation + 49) )
      return 0;
  }
  return result;
}
