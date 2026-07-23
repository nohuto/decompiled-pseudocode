/*
 * XREFs of HvlQueryVsmConnection @ 0x14047EB38
 * Callers:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     HvlPrepareForRootCrashdump @ 0x1405C03C4 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x1405C07C0 (HvlResumeFromRootCrashdump.c)
 *     VslConfigureDynamicMemory @ 0x1405C5348 (VslConfigureDynamicMemory.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x1405C58E0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciDeviceBootConfiguration @ 0x1405C5980 (VslGetSecurePciDeviceBootConfiguration.c)
 *     VslGetSecurePciEnabled @ 0x1405C5AA0 (VslGetSecurePciEnabled.c)
 *     VslGetSecureSpeculationControlInformation @ 0x1405C5B20 (VslGetSecureSpeculationControlInformation.c)
 *     VslRelaxQuotas @ 0x1407955EC (VslRelaxQuotas.c)
 *     KiInitializeXSaveConfiguration @ 0x140BFA4A0 (KiInitializeXSaveConfiguration.c)
 *     VslpIumPhase0Initialize @ 0x140CBFCEC (VslpIumPhase0Initialize.c)
 *     ExpLicenseWatchInitWorker @ 0x140D07FA4 (ExpLicenseWatchInitWorker.c)
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
