/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005F3C
 * Callers:
 *     ??$OperationAllowedChecked@AEA_NW4OperationAllowedCheckResult@PinManagerTelemetry@@@PinManagerTelemetry@@SAXAEA_N$$QEAW4OperationAllowedCheckResult@0@@Z @ 0x1802821F4 (--$OperationAllowedChecked@AEA_NW4OperationAllowedCheckResult@PinManagerTelemetry@@@PinManagerTe.c)
 *     ??$RequestorAllowedChecked@AEA_NW4RequestorAllowedCheckResult@PinManagerTelemetry@@@PinManagerTelemetry@@SAXAEA_N$$QEAW4RequestorAllowedCheckResult@0@@Z @ 0x180284AF8 (--$RequestorAllowedChecked@AEA_NW4RequestorAllowedCheckResult@PinManagerTelemetry@@@PinManagerTe.c)
 *     ??$PrimaryViewAnimationStarting@_NAEBI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_NAEBI@Z @ 0x1802C002C (--$PrimaryViewAnimationStarting@_NAEBI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_NAEBI@Z.c)
 *     ??$SizeOrModeChangeAnimationStateInShowView@AEAU?$atomic@_N@std@@I@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU?$atomic@_N@std@@$$QEAI@Z @ 0x1802C02E4 (--$SizeOrModeChangeAnimationStateInShowView@AEAU-$atomic@_N@std@@I@TouchKeyboardExperienceTeleme.c)
 *     ??$PrimaryViewAnimationStarting@_NAEAU?$atomic@I@std@@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_NAEAU?$atomic@I@std@@@Z @ 0x18046513C (--$PrimaryViewAnimationStarting@_NAEAU-$atomic@I@std@@@TouchKeyboardExperienceTelemetryLogger@@S.c)
 *     ??$WidgetsOverwatchTriggered@_NAEAK@DashboardManagerTelemetry@@SAX$$QEA_NAEAK@Z @ 0x1805C48AC (--$WidgetsOverwatchTriggered@_NAEAK@DashboardManagerTelemetry@@SAX$$QEA_NAEAK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007E240 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2)
{
  return tlgWriteTransfer_EventWriteTransfer(a1, a2);
}
