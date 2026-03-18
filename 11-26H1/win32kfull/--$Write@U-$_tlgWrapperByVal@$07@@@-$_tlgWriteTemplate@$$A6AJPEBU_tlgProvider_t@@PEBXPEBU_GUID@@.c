/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x14023D7A8
 * Callers:
 *     ?TraceLoggingSendMixedModeTelemetry@@YAHXZ @ 0x14023D73C (-TraceLoggingSendMixedModeTelemetry@@YAHXZ.c)
 *     ?HijackHidData@RawInput@InputTraceLogging@@SAXPEAX@Z @ 0x140296E08 (-HijackHidData@RawInput@InputTraceLogging@@SAXPEAX@Z.c)
 *     ?TraceLoggingDrawMenuBarTempCalled@@YAXXZ @ 0x1402D1F20 (-TraceLoggingDrawMenuBarTempCalled@@YAXXZ.c)
 *     ?TraceLoggingGDIScaledAppEvent@@YAXXZ @ 0x1402D1F7C (-TraceLoggingGDIScaledAppEvent@@YAXXZ.c)
 *     ?TraceLoggingSuppressQuickLaunch@@YAXXZ @ 0x1402D25E8 (-TraceLoggingSuppressQuickLaunch@@YAXXZ.c)
 *     ?TraceLoggingWinPHotKeyEvent@@YAXXZ @ 0x1402D2644 (-TraceLoggingWinPHotKeyEvent@@YAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14009234C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+50h] [rbp-28h]
  __int64 v8; // [rsp+58h] [rbp-20h]

  v7 = a5;
  v8 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 3u, &v6);
}
