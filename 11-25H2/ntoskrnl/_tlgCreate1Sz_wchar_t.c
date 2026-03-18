/*
 * XREFs of _tlgCreate1Sz_wchar_t @ 0x140426678
 * Callers:
 *     PopDiagTraceDIrpAfterSx @ 0x1403565F8 (PopDiagTraceDIrpAfterSx.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x140359318 (PopDiagTraceIrpFinishTelemetry.c)
 *     CcPostVolumeTelemetry @ 0x140421068 (CcPostVolumeTelemetry.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE @ 0x140424688 (Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140425554 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x140427548 (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1404D4110 (PopTraceThermalZonePassiveHistogram.c)
 *     ExLogTimeZoneInformation @ 0x1404DA5AC (ExLogTimeZoneInformation.c)
 *     KasaniSendReport @ 0x1405A6950 (KasaniSendReport.c)
 *     KcsaniSendReport @ 0x1405AAFF0 (KcsaniSendReport.c)
 *     PopTracePowerLimitHistogram @ 0x1405D18AC (PopTracePowerLimitHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x1405D1D7C (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceZoneCr3Mitigated @ 0x1405D1F50 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1405D2078 (PopTraceZoneCr3Tripped.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK @ 0x1405FB770 (Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK.c)
 *     CarEtwCrashEvent @ 0x140609830 (CarEtwCrashEvent.c)
 *     CarEtwRegister @ 0x140609A04 (CarEtwRegister.c)
 *     CarEtwWriteBugCheckEvent @ 0x140609B98 (CarEtwWriteBugCheckEvent.c)
 *     CarEtwWriteLiveDumpEvent @ 0x140609D08 (CarEtwWriteLiveDumpEvent.c)
 *     CarLoadImageHandler @ 0x14060A158 (CarLoadImageHandler.c)
 *     CarTipLogDriverLoad @ 0x14060A2F0 (CarTipLogDriverLoad.c)
 *     PnpTraceDeviceConfig @ 0x1406EC454 (PnpTraceDeviceConfig.c)
 *     PnpTraceDriverBlocked @ 0x140726648 (PnpTraceDriverBlocked.c)
 *     PopThermalHandlePreviousShutdown @ 0x140748274 (PopThermalHandlePreviousShutdown.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x14074A03C (PopDiagTraceDozeDeferralDecision.c)
 *     PopSqmThermalCriticalEvent @ 0x140755D98 (PopSqmThermalCriticalEvent.c)
 *     PopSqmThermalZoneEnumeration @ 0x140755FA4 (PopSqmThermalZoneEnumeration.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x14075C8E8 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x14075CD00 (TtmiLogDeviceEnumeratedTerminalEvent.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x1407A6D40 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     IoSetEnvironmentVariableEx @ 0x140821C20 (IoSetEnvironmentVariableEx.c)
 *     IoGetEnvironmentVariableEx @ 0x1408224D8 (IoGetEnvironmentVariableEx.c)
 *     PfSnLogScenarioDecision @ 0x14082682C (PfSnLogScenarioDecision.c)
 *     CmpLogHiveFileInaccessible @ 0x14091005C (CmpLogHiveFileInaccessible.c)
 *     PfSnEndProcessTrace @ 0x14091D474 (PfSnEndProcessTrace.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140920364 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteProcessStarted @ 0x1409221D8 (EtwpWriteProcessStarted.c)
 *     PfSnEndTrace @ 0x140989508 (PfSnEndTrace.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x14099448C (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     PopDiagTracePowerSettingRegistration @ 0x140A8AB2C (PopDiagTracePowerSettingRegistration.c)
 *     PopPotsLogPowerTransitionReliability @ 0x140A91E9C (PopPotsLogPowerTransitionReliability.c)
 *     PopPotsLogDirtyPowerTransition @ 0x140C227FC (PopPotsLogDirtyPowerTransition.c)
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
