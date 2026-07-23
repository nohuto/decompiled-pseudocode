/*
 * XREFs of _tlgCreate1Sz_wchar_t @ 0x1404269F0
 * Callers:
 *     PopDiagTraceIrpFinishTelemetry @ 0x14021BE34 (PopDiagTraceIrpFinishTelemetry.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1404255AC (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1404258E0 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopDiagTraceDIrpAfterSx @ 0x14048093C (PopDiagTraceDIrpAfterSx.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14050A090 (PopTraceThermalZonePassiveHistogram.c)
 *     ExLogTimeZoneInformation @ 0x14051204C (ExLogTimeZoneInformation.c)
 *     PopTracePowerLimitHistogram @ 0x14060C8BC (PopTracePowerLimitHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x14060CD80 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceZoneCr3Mitigated @ 0x14060CF50 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x14060D074 (PopTraceZoneCr3Tripped.c)
 *     CarEtwCrashEvent @ 0x14064C4AC (CarEtwCrashEvent.c)
 *     CarEtwRegister @ 0x14064C674 (CarEtwRegister.c)
 *     CarEtwWriteBugCheckEvent @ 0x14064C808 (CarEtwWriteBugCheckEvent.c)
 *     CarEtwWriteLiveDumpEvent @ 0x14064C978 (CarEtwWriteLiveDumpEvent.c)
 *     CarLoadImageHandler @ 0x14064CDCC (CarLoadImageHandler.c)
 *     CarTipLogDriverLoad @ 0x14064CF60 (CarTipLogDriverLoad.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x140774AE0 (PopDiagTraceDozeDeferralDecision.c)
 *     PnpTraceDriverBlocked @ 0x1407B4B38 (PnpTraceDriverBlocked.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407D4910 (PopThermalHandlePreviousShutdown.c)
 *     PopSqmThermalCriticalEvent @ 0x1407E8444 (PopSqmThermalCriticalEvent.c)
 *     PopSqmThermalZoneEnumeration @ 0x1407E8650 (PopSqmThermalZoneEnumeration.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x1407EE650 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x1407EEA08 (TtmiLogDeviceEnumeratedTerminalEvent.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x14083BED0 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     CmpLogHiveFileInaccessible @ 0x1408BBF64 (CmpLogHiveFileInaccessible.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1409D0688 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteProcessStarted @ 0x1409D0E30 (EtwpWriteProcessStarted.c)
 *     PfSnLogScenarioDecision @ 0x1409D199C (PfSnLogScenarioDecision.c)
 *     PopDiagTracePowerSettingRegistration @ 0x1409F6F44 (PopDiagTracePowerSettingRegistration.c)
 *     IoSetEnvironmentVariableEx @ 0x140A2EB60 (IoSetEnvironmentVariableEx.c)
 *     IoGetEnvironmentVariableEx @ 0x140A30478 (IoGetEnvironmentVariableEx.c)
 *     PfSnEndTrace @ 0x140AA6328 (PfSnEndTrace.c)
 *     PfSnEndProcessTrace @ 0x140ACAE28 (PfSnEndProcessTrace.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x140B146E0 (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     PnpTraceDeviceConfig @ 0x140B31F6C (PnpTraceDeviceConfig.c)
 *     PopPotsLogPowerTransitionReliability @ 0x140B5F010 (PopPotsLogPowerTransitionReliability.c)
 *     PopPotsLogDirtyPowerTransition @ 0x140CDD068 (PopPotsLogDirtyPowerTransition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tlgCreate1Sz_wchar_t(__int64 a1, const WCHAR *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
    result = (unsigned int)(2 * v2 + 2);
  }
  else
  {
    a2 = &SourceString;
    result = 2LL;
  }
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  *(_DWORD *)(a1 + 12) = 0;
  return result;
}
