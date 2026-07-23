/*
 * XREFs of PnpCompleteSystemStartProcess @ 0x140527E20
 * Callers:
 *     PnpDeviceActionWorker @ 0x14047C410 (PnpDeviceActionWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PnpDiagnosticTrace @ 0x14048D948 (PnpDiagnosticTrace.c)
 *     PpReleaseBootDDB @ 0x140779D38 (PpReleaseBootDDB.c)
 *     PiInitReleaseCachedGroupInformation @ 0x14077F34C (PiInitReleaseCachedGroupInformation.c)
 *     IopCallDriverReinitializationRoutines @ 0x140A39684 (IopCallDriverReinitializationRoutines.c)
 *     EtwWriteEndScenario @ 0x140AD7F30 (EtwWriteEndScenario.c)
 *     KseShimDatabaseBootRelease @ 0x140B51C54 (KseShimDatabaseBootRelease.c)
 */

NTSTATUS PnpCompleteSystemStartProcess()
{
  __int64 v0; // rcx
  NTSTATUS result; // eax

  PnpDiagnosticTrace(&KMPnPEvt_SystemStartLegacyEnum_Start, 0, 0LL);
  PnpDiagnosticTrace(&KMPnPEvt_SystemStartDriverReinit_Start, 0, 0LL);
  LOBYTE(v0) = 1;
  IopCallDriverReinitializationRoutines(v0);
  PnpDiagnosticTrace(&KMPnPEvt_SystemStartDriverReinit_Stop, 0, 0LL);
  PnPInitialized = 1;
  KeSetEvent(&PnpSystemDeviceEnumerationComplete, 0, 0);
  PiInitReleaseCachedGroupInformation();
  PpReleaseBootDDB();
  KseShimDatabaseBootRelease();
  result = PnpDiagnosticTrace(&KMPnPEvt_SystemStartLegacyEnum_Stop, 0, 0LL);
  if ( PnpEtwHandle )
    return EtwWriteEndScenario(PnpEtwHandle, &KMPnPEvt_DriverInitPhase_Stop, &PnpDriverInitPhaseActivityId, 0, 0LL);
  return result;
}
