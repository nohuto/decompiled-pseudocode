/*
 * XREFs of PsIsCurrentThreadInServerSilo @ 0x140449120
 * Callers:
 *     RtlGetActiveConsoleId @ 0x140449060 (RtlGetActiveConsoleId.c)
 *     RtlGetNtProductType @ 0x1404490A0 (RtlGetNtProductType.c)
 *     RtlGetSystemGlobalData @ 0x1404853A0 (RtlGetSystemGlobalData.c)
 *     RtlSetSystemGlobalData @ 0x1404B81B0 (RtlSetSystemGlobalData.c)
 *     IopLoadDriverImage @ 0x14052C948 (IopLoadDriverImage.c)
 *     EtwpGetPmcOwnership @ 0x1406C7694 (EtwpGetPmcOwnership.c)
 *     EtwpSetSoftRestartInformation @ 0x14077ABB8 (EtwpSetSoftRestartInformation.c)
 *     PoUserShutdownCancelled @ 0x14077E5A0 (PoUserShutdownCancelled.c)
 *     NtSetInformationSymbolicLink @ 0x1407C64E0 (NtSetInformationSymbolicLink.c)
 *     PsQueryCurrentApiSetSchema @ 0x1407F4270 (PsQueryCurrentApiSetSchema.c)
 *     PspConvertSiloToServerSilo @ 0x1407F46EC (PspConvertSiloToServerSilo.c)
 *     PsShutdownSystem @ 0x1407FFCB4 (PsShutdownSystem.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x140805DE0 (RtlGetConsoleSessionForegroundProcessId.c)
 *     RtlSetActiveConsoleId @ 0x140805FA0 (RtlSetActiveConsoleId.c)
 *     SepInitializationPhase1 @ 0x140815D14 (SepInitializationPhase1.c)
 *     EtwpGetSoftRestartInformation @ 0x1408343E8 (EtwpGetSoftRestartInformation.c)
 *     ExpSetTimeZoneInformation @ 0x1408395BC (ExpSetTimeZoneInformation.c)
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     NtSetSystemTime @ 0x14083C8F0 (NtSetSystemTime.c)
 *     ExpSetBootEntry @ 0x140842100 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14084281C (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x140843330 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1408434D0 (NtDeleteDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x140843670 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x140843AF0 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x140843DB0 (NtQueryDriverEntryOrder.c)
 *     NtQuerySystemEnvironmentValue @ 0x140844070 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x140844330 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x1408444F0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x140844740 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1408448F0 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140844CE0 (NtSetSystemEnvironmentValueEx.c)
 *     NtSetDefaultHardErrorPort @ 0x1408468E0 (NtSetDefaultHardErrorPort.c)
 *     NtSystemDebugControl @ 0x14084A9E0 (NtSystemDebugControl.c)
 *     CmpAcceptBoot @ 0x140854B2C (CmpAcceptBoot.c)
 *     MiValidatePageFileCreationParameters @ 0x140872C3C (MiValidatePageFileCreationParameters.c)
 *     NtDisableLastKnownGood @ 0x1408ACF10 (NtDisableLastKnownGood.c)
 *     NtEnableLastKnownGood @ 0x1408AD040 (NtEnableLastKnownGood.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     SepCreateClientSecurityEx @ 0x140905C50 (SepCreateClientSecurityEx.c)
 *     ObpParseSymbolicLinkEx @ 0x140930290 (ObpParseSymbolicLinkEx.c)
 *     NtPlugPlayControl @ 0x1409672B0 (NtPlugPlayControl.c)
 *     RtlGetNtSystemRoot @ 0x1409E50B0 (RtlGetNtSystemRoot.c)
 *     NtInitiatePowerAction @ 0x1409F2FC0 (NtInitiatePowerAction.c)
 *     TtmIsEnabled @ 0x1409FA8A4 (TtmIsEnabled.c)
 *     PspInitializeSessionGlobals @ 0x140A098DC (PspInitializeSessionGlobals.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     NtEnumerateBootEntries @ 0x140A2CCB0 (NtEnumerateBootEntries.c)
 *     NtTranslateFilePath @ 0x140A2D4D0 (NtTranslateFilePath.c)
 *     NtQueryBootEntryOrder @ 0x140A2E370 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x140A2E7B0 (NtQueryBootOptions.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140A2F580 (NtQuerySystemEnvironmentValueEx.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140A31120 (EtwQueryPerformanceTraceInformation.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     RtlCapabilityCheck @ 0x140A96450 (RtlCapabilityCheck.c)
 *     RtlIsMultiSessionSku @ 0x140A968C0 (RtlIsMultiSessionSku.c)
 *     RtlGetSuiteMask @ 0x140A97810 (RtlGetSuiteMask.c)
 *     NtImpersonateAnonymousToken @ 0x140AB3DD0 (NtImpersonateAnonymousToken.c)
 *     PspCreateSilo @ 0x140B0B9E8 (PspCreateSilo.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x140B0BC60 (RtlSetConsoleSessionForegroundProcessId.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B13E1C (ExpRefreshTimeZoneInformation.c)
 *     ExpWriteTimeZoneBias @ 0x140B14690 (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x140B14754 (ExpWriteTimeZoneBiasStartEnd.c)
 *     IopUnloadDriver @ 0x140B2CE78 (IopUnloadDriver.c)
 *     ExpRaiseHardError @ 0x140B3635C (ExpRaiseHardError.c)
 *     EtwShutdown @ 0x140B384BC (EtwShutdown.c)
 *     EtwSetPerformanceTraceInformation @ 0x140B38820 (EtwSetPerformanceTraceInformation.c)
 *     SepRmSetAuditEventWrkr @ 0x140B41050 (SepRmSetAuditEventWrkr.c)
 *     PoUserShutdownInitiated @ 0x140B48F60 (PoUserShutdownInitiated.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140CD9614 (PopDetectSimulatedHeteroProcessors.c)
 * Callees:
 *     PsIsServerSilo @ 0x140216B68 (PsIsServerSilo.c)
 */

bool PsIsCurrentThreadInServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Blink; // rcx
  unsigned __int64 v2; // rcx

  if ( KeGetPcr()->Prcb.NestingLevel )
    return 0;
  CurrentThread = KeGetCurrentThread();
  Blink = (__int64)CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == -3 )
  {
    v2 = CurrentThread->Process[3].ActiveGroupsMask.Masks[0];
    return v2 != 0;
  }
  if ( !Blink )
    return 0;
  if ( PsIsServerSilo(Blink) )
    return v2 != 0;
  while ( !PsIsServerSilo(*(_QWORD *)(v2 + 1304)) )
    ;
  return v2 != 0;
}
