/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1400F3420
 * Callers:
 *     ?TraceSendStop@Log@CoreMessagingK@@SAXJ@Z @ 0x14008BB54 (-TraceSendStop@Log@CoreMessagingK@@SAXJ@Z.c)
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 *     ?TraceObjectCalloutStop@Log@CoreMessagingK@@SAXJ@Z @ 0x1400D8414 (-TraceObjectCalloutStop@Log@CoreMessagingK@@SAXJ@Z.c)
 *     ?TraceObjectCalloutStart@Log@CoreMessagingK@@SAXW4_WIN32_CALLOUTS_OPERATION@@@Z @ 0x1400D852C (-TraceObjectCalloutStart@Log@CoreMessagingK@@SAXW4_WIN32_CALLOUTS_OPERATION@@@Z.c)
 *     ?TraceCreatePortStop@Log@CoreMessagingK@@SAXJ@Z @ 0x1400DA368 (-TraceCreatePortStop@Log@CoreMessagingK@@SAXJ@Z.c)
 *     ?TraceInitializeStop@Log@CoreMessagingK@@SAXJ@Z @ 0x1400DAA08 (-TraceInitializeStop@Log@CoreMessagingK@@SAXJ@Z.c)
 *     ?SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z @ 0x14018DDE0 (-SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z.c)
 *     xxxSystemParametersInfo @ 0x1401ACFA0 (xxxSystemParametersInfo.c)
 *     ?TraceRegistrarConnect@Log@CoreMessagingK@@SAXJ@Z @ 0x1401C5D38 (-TraceRegistrarConnect@Log@CoreMessagingK@@SAXJ@Z.c)
 *     ?ButtonState@Mouse@InputTraceLogging@@SAXK@Z @ 0x140222F0C (-ButtonState@Mouse@InputTraceLogging@@SAXK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD v6[6]; // [rsp+30h] [rbp-48h] BYREF

  v6[4] = a5;
  v6[5] = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 3, v6);
}
