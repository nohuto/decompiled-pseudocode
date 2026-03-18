/*
 * XREFs of _tlgCreate1Sz_wchar_t @ 0x140437A60
 * Callers:
 *     PopDiagTraceIrpFinishTelemetry @ 0x14021A4A4 (PopDiagTraceIrpFinishTelemetry.c)
 *     PopTraceThermalRequestActiveActivity @ 0x14043661C (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140436950 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopDiagTraceDIrpAfterSx @ 0x140486F6C (PopDiagTraceDIrpAfterSx.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140510620 (PopTraceThermalZonePassiveHistogram.c)
 *     ExLogTimeZoneInformation @ 0x1405185DC (ExLogTimeZoneInformation.c)
 *     PopTracePowerLimitHistogram @ 0x140609CFC (PopTracePowerLimitHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x14060A1C0 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceZoneCr3Mitigated @ 0x14060A390 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x14060A4B4 (PopTraceZoneCr3Tripped.c)
 *     CarEtwCrashEvent @ 0x1406488CC (CarEtwCrashEvent.c)
 *     CarEtwRegister @ 0x140648A94 (CarEtwRegister.c)
 *     CarEtwWriteBugCheckEvent @ 0x140648C28 (CarEtwWriteBugCheckEvent.c)
 *     CarEtwWriteLiveDumpEvent @ 0x140648D98 (CarEtwWriteLiveDumpEvent.c)
 *     CarLoadImageHandler @ 0x1406491EC (CarLoadImageHandler.c)
 *     CarTipLogDriverLoad @ 0x140649380 (CarTipLogDriverLoad.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x140771AE0 (PopDiagTraceDozeDeferralDecision.c)
 *     PnpTraceDriverBlocked @ 0x1407B1AD8 (PnpTraceDriverBlocked.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407D1870 (PopThermalHandlePreviousShutdown.c)
 *     PopSqmThermalCriticalEvent @ 0x1407E33B4 (PopSqmThermalCriticalEvent.c)
 *     PopSqmThermalZoneEnumeration @ 0x1407E35C0 (PopSqmThermalZoneEnumeration.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x1407E8AF0 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x1407E8EA8 (TtmiLogDeviceEnumeratedTerminalEvent.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x140835C90 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     CmpLogHiveFileInaccessible @ 0x1408B5990 (CmpLogHiveFileInaccessible.c)
 *     IoSetEnvironmentVariableEx @ 0x140906830 (IoSetEnvironmentVariableEx.c)
 *     IoGetEnvironmentVariableEx @ 0x140908318 (IoGetEnvironmentVariableEx.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1409546CC (EtwpWriteAppStateChangeSummary.c)
 *     PfSnLogScenarioDecision @ 0x14096F6B4 (PfSnLogScenarioDecision.c)
 *     PopDiagTracePowerSettingRegistration @ 0x140A3B524 (PopDiagTracePowerSettingRegistration.c)
 *     PfSnEndProcessTrace @ 0x140A43CB4 (PfSnEndProcessTrace.c)
 *     PfSnEndTrace @ 0x140AA3588 (PfSnEndTrace.c)
 *     EtwpWriteProcessStarted @ 0x140AB66AC (EtwpWriteProcessStarted.c)
 *     PnpTraceDeviceConfig @ 0x140AD3BF4 (PnpTraceDeviceConfig.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x140B12960 (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     PopPotsLogPowerTransitionReliability @ 0x140B5BCF4 (PopPotsLogPowerTransitionReliability.c)
 *     PopPotsLogDirtyPowerTransition @ 0x140CD6D14 (PopPotsLogDirtyPowerTransition.c)
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
