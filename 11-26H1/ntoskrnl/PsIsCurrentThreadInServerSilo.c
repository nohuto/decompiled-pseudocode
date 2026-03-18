/*
 * XREFs of PsIsCurrentThreadInServerSilo @ 0x140450FF0
 * Callers:
 *     RtlGetActiveConsoleId @ 0x140450F30 (RtlGetActiveConsoleId.c)
 *     RtlGetNtProductType @ 0x140450F70 (RtlGetNtProductType.c)
 *     RtlGetSystemGlobalData @ 0x14048B860 (RtlGetSystemGlobalData.c)
 *     RtlSetSystemGlobalData @ 0x1404BE960 (RtlSetSystemGlobalData.c)
 *     IopLoadDriverImage @ 0x14052A428 (IopLoadDriverImage.c)
 *     EtwpGetPmcOwnership @ 0x1406C3A54 (EtwpGetPmcOwnership.c)
 *     EtwpSetSoftRestartInformation @ 0x140777D18 (EtwpSetSoftRestartInformation.c)
 *     PoUserShutdownCancelled @ 0x14077B960 (PoUserShutdownCancelled.c)
 *     NtSetInformationSymbolicLink @ 0x1407C3480 (NtSetInformationSymbolicLink.c)
 *     PsQueryCurrentApiSetSchema @ 0x1407EE710 (PsQueryCurrentApiSetSchema.c)
 *     PspConvertSiloToServerSilo @ 0x1407EEB8C (PspConvertSiloToServerSilo.c)
 *     PsShutdownSystem @ 0x1407FA284 (PsShutdownSystem.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x140800340 (RtlGetConsoleSessionForegroundProcessId.c)
 *     RtlSetActiveConsoleId @ 0x140800500 (RtlSetActiveConsoleId.c)
 *     SepInitializationPhase1 @ 0x140810284 (SepInitializationPhase1.c)
 *     EtwpGetSoftRestartInformation @ 0x14082E1A8 (EtwpGetSoftRestartInformation.c)
 *     ExpSetTimeZoneInformation @ 0x14083337C (ExpSetTimeZoneInformation.c)
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 *     NtSetSystemTime @ 0x1408366B0 (NtSetSystemTime.c)
 *     ExpSetBootEntry @ 0x14083BEC0 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14083C5DC (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x14083D0F0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x14083D290 (NtDeleteDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x14083D430 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x14083D8B0 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x14083DB70 (NtQueryDriverEntryOrder.c)
 *     NtQuerySystemEnvironmentValue @ 0x14083DE30 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x14083E0F0 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x14083E2B0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x14083E500 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x14083E6B0 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x14083EAA0 (NtSetSystemEnvironmentValueEx.c)
 *     NtSetDefaultHardErrorPort @ 0x1408406A0 (NtSetDefaultHardErrorPort.c)
 *     NtSystemDebugControl @ 0x1408459A0 (NtSystemDebugControl.c)
 *     CmpAcceptBoot @ 0x14084E81C (CmpAcceptBoot.c)
 *     MiValidatePageFileCreationParameters @ 0x14086C85C (MiValidatePageFileCreationParameters.c)
 *     NtDisableLastKnownGood @ 0x1408A6AA0 (NtDisableLastKnownGood.c)
 *     NtEnableLastKnownGood @ 0x1408A6BD0 (NtEnableLastKnownGood.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     ObpParseSymbolicLinkEx @ 0x140900300 (ObpParseSymbolicLinkEx.c)
 *     NtQueryBootOptions @ 0x140906480 (NtQueryBootOptions.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140907320 (NtQuerySystemEnvironmentValueEx.c)
 *     SepCreateClientSecurityEx @ 0x14092A140 (SepCreateClientSecurityEx.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093E008 (EtwQueryPerformanceTraceInformation.c)
 *     NtPlugPlayControl @ 0x1409A6850 (NtPlugPlayControl.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     NtInitiatePowerAction @ 0x140A37400 (NtInitiatePowerAction.c)
 *     TtmIsEnabled @ 0x140A3EE84 (TtmIsEnabled.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 *     RtlGetNtSystemRoot @ 0x140A79090 (RtlGetNtSystemRoot.c)
 *     RtlCapabilityCheck @ 0x140A91900 (RtlCapabilityCheck.c)
 *     RtlIsMultiSessionSku @ 0x140A91D70 (RtlIsMultiSessionSku.c)
 *     RtlGetSuiteMask @ 0x140A92CC0 (RtlGetSuiteMask.c)
 *     NtEnumerateBootEntries @ 0x140A94460 (NtEnumerateBootEntries.c)
 *     NtTranslateFilePath @ 0x140A94C80 (NtTranslateFilePath.c)
 *     NtImpersonateAnonymousToken @ 0x140AB2A30 (NtImpersonateAnonymousToken.c)
 *     PspCreateSilo @ 0x140B09C28 (PspCreateSilo.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x140B09EA0 (RtlSetConsoleSessionForegroundProcessId.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B1209C (ExpRefreshTimeZoneInformation.c)
 *     ExpWriteTimeZoneBias @ 0x140B12910 (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x140B129D4 (ExpWriteTimeZoneBiasStartEnd.c)
 *     IopUnloadDriver @ 0x140B2ADF8 (IopUnloadDriver.c)
 *     ExpRaiseHardError @ 0x140B33F0C (ExpRaiseHardError.c)
 *     NtQueryBootEntryOrder @ 0x140B34660 (NtQueryBootEntryOrder.c)
 *     EtwShutdown @ 0x140B362AC (EtwShutdown.c)
 *     EtwSetPerformanceTraceInformation @ 0x140B36610 (EtwSetPerformanceTraceInformation.c)
 *     SepRmSetAuditEventWrkr @ 0x140B3F020 (SepRmSetAuditEventWrkr.c)
 *     PoUserShutdownInitiated @ 0x140B46F30 (PoUserShutdownInitiated.c)
 *     PspInitializeSessionGlobals @ 0x140B6AFFC (PspInitializeSessionGlobals.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140CD3474 (PopDetectSimulatedHeteroProcessors.c)
 * Callees:
 *     PsIsServerSilo @ 0x140216838 (PsIsServerSilo.c)
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
