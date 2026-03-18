/*
 * XREFs of PsIsHostSilo @ 0x14046E630
 * Callers:
 *     ObInitServerSilo @ 0x1407C22F0 (ObInitServerSilo.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407C2A4C (ObpCreateDosDevicesDirectory.c)
 *     ObpInitializeRootNamespace @ 0x1407C2F9C (ObpInitializeRootNamespace.c)
 *     NtQueryInformationJobObject @ 0x1407F2FB0 (NtQueryInformationJobObject.c)
 *     PspCatchCriticalBreak @ 0x1407FA818 (PspCatchCriticalBreak.c)
 *     PsRegisterSiloMonitor @ 0x1407FBB20 (PsRegisterSiloMonitor.c)
 *     SeInitServerSilo @ 0x1408100DC (SeInitServerSilo.c)
 *     EtwpInitializeSiloState @ 0x140826150 (EtwpInitializeSiloState.c)
 *     ExpTimeZoneWork @ 0x1408365C0 (ExpTimeZoneWork.c)
 *     SLUpdateLicenseDataInternal @ 0x140839788 (SLUpdateLicenseDataInternal.c)
 *     MmMapApiSetView @ 0x140863ED4 (MmMapApiSetView.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     SeCreateClientSecurityEx @ 0x140929AE0 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x140929D90 (AlpcpGetEffectiveTokenMessage.c)
 *     SepCreateClientSecurityEx @ 0x14092A140 (SepCreateClientSecurityEx.c)
 *     IopAllocRealFileObject @ 0x1409337E0 (IopAllocRealFileObject.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1409546CC (EtwpWriteAppStateChangeSummary.c)
 *     PopGetSettingNotificationName @ 0x140A3B2C4 (PopGetSettingNotificationName.c)
 *     sub_140A7DC40 @ 0x140A7DC40 (sub_140A7DC40.c)
 *     PspMapSiloSharedDataView @ 0x140A9B2D8 (PspMapSiloSharedDataView.c)
 *     PspEstimateNewProcessServerSilo @ 0x140AE25C4 (PspEstimateNewProcessServerSilo.c)
 *     SepRmCommandServerThread @ 0x140AF0B10 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x140AF0D9C (SepRmLsaConnectRequest.c)
 *     PopTransitionCheckpoint @ 0x140B1B69C (PopTransitionCheckpoint.c)
 *     DbgkRegisterErrorPort @ 0x140B581C4 (DbgkRegisterErrorPort.c)
 *     SepUpdateSiloInClientSecurity @ 0x140B65550 (SepUpdateSiloInClientSecurity.c)
 *     NtSetSystemPowerState @ 0x140BFD2E0 (NtSetSystemPowerState.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
