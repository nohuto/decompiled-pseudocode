/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$00@@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@33AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005E10
 * Callers:
 *     ??$WindowTabHostTimestampUpdateCanceled@AEA_NAEA_NAEA_N@WindowTabHostTelemetry@@SAXAEA_N00@Z @ 0x18021039C (--$WindowTabHostTimestampUpdateCanceled@AEA_NAEA_NAEA_N@WindowTabHostTelemetry@@SAXAEA_N00@Z.c)
 *     ??$InputAppActivationOmitted@_N_N_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_N00@Z @ 0x180458760 (--$InputAppActivationOmitted@_N_N_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_N00@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18008EEEC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2)
{
  return tlgWriteTransfer_EventWriteTransfer(a1, a2);
}
