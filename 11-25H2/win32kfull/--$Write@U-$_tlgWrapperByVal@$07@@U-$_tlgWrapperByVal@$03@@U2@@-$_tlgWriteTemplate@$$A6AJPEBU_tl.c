/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x14012ADAC
 * Callers:
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x140117B90 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?CopyForGetRawInputBuffer@RawInput@InputTraceLogging@@SAXPEAUtagHIDDATA@@@Z @ 0x140121080 (-CopyForGetRawInputBuffer@RawInput@InputTraceLogging@@SAXPEAUtagHIDDATA@@@Z.c)
 *     ?TraceLoggingMiPSuppressedForWindow@@YAXQEBUtagWND@@IH@Z @ 0x14012AD58 (-TraceLoggingMiPSuppressedForWindow@@YAXQEBUtagWND@@IH@Z.c)
 *     ?IsFontUnreliable@UmfdReliabilityManager@@YA_NUUMFD_RELIABILITY_KEY@@@Z @ 0x14015364C (-IsFontUnreliable@UmfdReliabilityManager@@YA_NUUMFD_RELIABILITY_KEY@@@Z.c)
 *     ?GetRawInputData@RawInput@InputTraceLogging@@SAXPEAXIPEAUtagHIDDATA@@@Z @ 0x140189670 (-GetRawInputData@RawInput@InputTraceLogging@@SAXPEAXIPEAUtagHIDDATA@@@Z.c)
 *     ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x14020BB84 (-TraceLoggingAutoRotationStateEvent@@YAXXZ.c)
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x14026CED0 (-TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z.c)
 *     ?TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z @ 0x1402B7BD0 (-TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z.c)
 *     ?TraceLoggingPenHotkey@@YAXII@Z @ 0x1402B8048 (-TraceLoggingPenHotkey@@YAXII@Z.c)
 *     ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z @ 0x1402B80DC (-TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1402B8160 (-TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z @ 0x1402B81E4 (-TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14012B154 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2)
{
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL);
}
