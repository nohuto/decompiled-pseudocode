/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140003620
 * Callers:
 *     ?TraceLoggingSendMixedModeTelemetry@@YAHXZ @ 0x14020D05C (-TraceLoggingSendMixedModeTelemetry@@YAHXZ.c)
 *     ?HijackHidData@RawInput@InputTraceLogging@@SAXPEAX@Z @ 0x14026F1C4 (-HijackHidData@RawInput@InputTraceLogging@@SAXPEAX@Z.c)
 *     ?TraceLoggingDrawMenuBarTempCalled@@YAXXZ @ 0x1402B7CD0 (-TraceLoggingDrawMenuBarTempCalled@@YAXXZ.c)
 *     ?TraceLoggingGDIScaledAppEvent@@YAXXZ @ 0x1402B7D2C (-TraceLoggingGDIScaledAppEvent@@YAXXZ.c)
 *     ?TraceLoggingSuppressQuickLaunch@@YAXXZ @ 0x1402B8398 (-TraceLoggingSuppressQuickLaunch@@YAXXZ.c)
 *     ?TraceLoggingWinPHotKeyEvent@@YAXXZ @ 0x1402B83F4 (-TraceLoggingWinPHotKeyEvent@@YAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14012B154 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2)
{
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL);
}
