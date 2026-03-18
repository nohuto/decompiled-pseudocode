/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801D594C
 * Callers:
 *     ??1CPropertySet@@UEAA@XZ @ 0x1800AD1AC (--1CPropertySet@@UEAA@XZ.c)
 *     ?ExitWait@DWM@KST@InputTraceLogging@@SAXK@Z @ 0x1801507DC (-ExitWait@DWM@KST@InputTraceLogging@@SAXK@Z.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x180154080 (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 *     ?ThreadStart@DWM@KST@InputTraceLogging@@SAXK@Z @ 0x18021DEA4 (-ThreadStart@DWM@KST@InputTraceLogging@@SAXK@Z.c)
 *     ?LogBoostCompositorClock@CInteractionTracker2@@AEAAX_N@Z @ 0x1802743D8 (-LogBoostCompositorClock@CInteractionTracker2@@AEAAX_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800AB4E0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
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
  v8 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 3u, &v6);
}
