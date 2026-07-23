/*
 * XREFs of PsIsHostSilo @ 0x140467DB0
 * Callers:
 *     ObInitServerSilo @ 0x1407C5350 (ObInitServerSilo.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407C5AAC (ObpCreateDosDevicesDirectory.c)
 *     ObpInitializeRootNamespace @ 0x1407C5FFC (ObpInitializeRootNamespace.c)
 *     NtQueryInformationJobObject @ 0x1407F8B10 (NtQueryInformationJobObject.c)
 *     PspCatchCriticalBreak @ 0x140800248 (PspCatchCriticalBreak.c)
 *     PsRegisterSiloMonitor @ 0x140801550 (PsRegisterSiloMonitor.c)
 *     SeInitServerSilo @ 0x140815B6C (SeInitServerSilo.c)
 *     EtwpInitializeSiloState @ 0x14082C390 (EtwpInitializeSiloState.c)
 *     ExpTimeZoneWork @ 0x14083C800 (ExpTimeZoneWork.c)
 *     SLUpdateLicenseDataInternal @ 0x14083F9C8 (SLUpdateLicenseDataInternal.c)
 *     MmMapApiSetView @ 0x14086A2B4 (MmMapApiSetView.c)
 *     SeCreateClientSecurityEx @ 0x1409055F0 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x1409058A0 (AlpcpGetEffectiveTokenMessage.c)
 *     SepCreateClientSecurityEx @ 0x140905C50 (SepCreateClientSecurityEx.c)
 *     IopAllocRealFileObject @ 0x14090F390 (IopAllocRealFileObject.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1409D0688 (EtwpWriteAppStateChangeSummary.c)
 *     PspMapSiloSharedDataView @ 0x1409E6308 (PspMapSiloSharedDataView.c)
 *     PopGetSettingNotificationName @ 0x1409F6CE4 (PopGetSettingNotificationName.c)
 *     sub_140A83AB0 @ 0x140A83AB0 (sub_140A83AB0.c)
 *     PspEstimateNewProcessServerSilo @ 0x140AE0144 (PspEstimateNewProcessServerSilo.c)
 *     SepRmCommandServerThread @ 0x140AF3750 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x140AF39DC (SepRmLsaConnectRequest.c)
 *     PopTransitionCheckpoint @ 0x140B1D94C (PopTransitionCheckpoint.c)
 *     DbgkRegisterErrorPort @ 0x140B5AFE4 (DbgkRegisterErrorPort.c)
 *     SepUpdateSiloInClientSecurity @ 0x140B685F0 (SepUpdateSiloInClientSecurity.c)
 *     NtSetSystemPowerState @ 0x140C032E0 (NtSetSystemPowerState.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
