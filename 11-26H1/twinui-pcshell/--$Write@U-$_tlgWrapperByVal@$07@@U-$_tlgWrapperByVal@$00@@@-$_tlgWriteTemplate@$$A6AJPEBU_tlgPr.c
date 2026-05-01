/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18000B828
 * Callers:
 *     ??$MadeGamingHomeAppViewPrimary@AEAPEAUHWND__@@AEA_N@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEA_N@Z @ 0x1804F4670 (--$MadeGamingHomeAppViewPrimary@AEAPEAUHWND__@@AEA_N@GamingPosturePositionerTelemetryProvider@@S.c)
 *     ??$SetFallbackWindowVisibility@AEAPEAUHWND__@@AEA_N@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEA_N@Z @ 0x1804F61A4 (--$SetFallbackWindowVisibility@AEAPEAUHWND__@@AEA_N@GamingPosturePositionerTelemetryProvider@@SA.c)
 *     ??$ViewNeedinessChanged@AEAPEAUHWND__@@_N@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@$$QEA_N@Z @ 0x1804F6658 (--$ViewNeedinessChanged@AEAPEAUHWND__@@_N@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHW.c)
 *     ?IsSuggestionSnapped@DragToSnapBar@CSnapComponentTelemetry@@QEAAX_N@Z @ 0x18059FDE0 (-IsSuggestionSnapped@DragToSnapBar@CSnapComponentTelemetry@@QEAAX_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007E240 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        __int64 a1,
        __int64 a2)
{
  return tlgWriteTransfer_EventWriteTransfer(a1, a2);
}
