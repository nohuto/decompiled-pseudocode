/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14007B6DC
 * Callers:
 *     ?TraceSendStop@Log@CoreMessagingK@@SAXJ@Z @ 0x140067B2C (-TraceSendStop@Log@CoreMessagingK@@SAXJ@Z.c)
 *     ?TraceInitializeStop@Log@CoreMessagingK@@SAXJ@Z @ 0x1400FC3D8 (-TraceInitializeStop@Log@CoreMessagingK@@SAXJ@Z.c)
 *     ?TraceCreatePortStop@Log@CoreMessagingK@@SAXJ@Z @ 0x1400FCBEC (-TraceCreatePortStop@Log@CoreMessagingK@@SAXJ@Z.c)
 *     ?TraceObjectCalloutStop@Log@CoreMessagingK@@SAXJ@Z @ 0x1400FD3A8 (-TraceObjectCalloutStop@Log@CoreMessagingK@@SAXJ@Z.c)
 *     ?TraceObjectCalloutStart@Log@CoreMessagingK@@SAXW4_WIN32_CALLOUTS_OPERATION@@@Z @ 0x1400FD4BC (-TraceObjectCalloutStart@Log@CoreMessagingK@@SAXW4_WIN32_CALLOUTS_OPERATION@@@Z.c)
 *     ?WindowManagementInitiate@Mouse@InputTraceLogging@@SAXK@Z @ 0x14010EBB4 (-WindowManagementInitiate@Mouse@InputTraceLogging@@SAXK@Z.c)
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 *     ?SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z @ 0x1401A0000 (-SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z.c)
 *     ?TraceRegistrarConnect@Log@CoreMessagingK@@SAXJ@Z @ 0x1401A1F10 (-TraceRegistrarConnect@Log@CoreMessagingK@@SAXJ@Z.c)
 *     ?ButtonState@Mouse@InputTraceLogging@@SAXK@Z @ 0x14021F7CC (-ButtonState@Mouse@InputTraceLogging@@SAXK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140079DFC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v9 = 0;
  v7 = a5;
  v8 = 4;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 3u, &v6);
}
