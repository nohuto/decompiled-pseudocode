/*
 * XREFs of PnpCompleteSystemStartProcess @ 0x1405257B0
 * Callers:
 *     PnpDeviceActionWorker @ 0x140482AA0 (PnpDeviceActionWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     PnpDiagnosticTrace @ 0x140493DF8 (PnpDiagnosticTrace.c)
 *     PpReleaseBootDDB @ 0x140776E90 (PpReleaseBootDDB.c)
 *     PiInitReleaseCachedGroupInformation @ 0x14077C858 (PiInitReleaseCachedGroupInformation.c)
 *     IopCallDriverReinitializationRoutines @ 0x140A265E4 (IopCallDriverReinitializationRoutines.c)
 *     EtwWriteEndScenario @ 0x140ADB480 (EtwWriteEndScenario.c)
 *     KseShimDatabaseBootRelease @ 0x140B4F3C4 (KseShimDatabaseBootRelease.c)
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
