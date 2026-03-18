/*
 * XREFs of HvlQueryVsmConnection @ 0x1404851C8
 * Callers:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     HvlPrepareForRootCrashdump @ 0x1405BDB54 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x1405BDF50 (HvlResumeFromRootCrashdump.c)
 *     VslConfigureDynamicMemory @ 0x1405C2AD8 (VslConfigureDynamicMemory.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x1405C3070 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciDeviceBootConfiguration @ 0x1405C3110 (VslGetSecurePciDeviceBootConfiguration.c)
 *     VslGetSecurePciEnabled @ 0x1405C3230 (VslGetSecurePciEnabled.c)
 *     VslGetSecureSpeculationControlInformation @ 0x1405C32B0 (VslGetSecureSpeculationControlInformation.c)
 *     VslRelaxQuotas @ 0x140792ABC (VslRelaxQuotas.c)
 *     KiInitializeXSaveConfiguration @ 0x140BF44A0 (KiInitializeXSaveConfiguration.c)
 *     VslpIumPhase0Initialize @ 0x140CB9CAC (VslpIumPhase0Initialize.c)
 *     ExpLicenseWatchInitWorker @ 0x140D01C04 (ExpLicenseWatchInitWorker.c)
 * Callees:
 *     <none>
 */

char __fastcall HvlQueryVsmConnection(_QWORD *a1)
{
  char result; // al

  result = HvlpVsmVtlCallVa;
  if ( *(_QWORD *)&HvlpVsmVtlCallVa )
  {
    if ( a1 )
      *a1 = *(_QWORD *)&HvlpVsmVtlCallVa;
    return 1;
  }
  return result;
}
