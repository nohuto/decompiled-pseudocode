/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x140090B44
 * Callers:
 *     ?CopyForGetRawInputBuffer@RawInput@InputTraceLogging@@SAXPEAUtagHIDDATA@@@Z @ 0x140053FB8 (-CopyForGetRawInputBuffer@RawInput@InputTraceLogging@@SAXPEAUtagHIDDATA@@@Z.c)
 *     ?TraceLoggingMiPSuppressedForWindow@@YAXQEBUtagWND@@IH@Z @ 0x140090AF0 (-TraceLoggingMiPSuppressedForWindow@@YAXQEBUtagWND@@IH@Z.c)
 *     ?GetRawInputData@RawInput@InputTraceLogging@@SAXPEAXIPEAUtagHIDDATA@@@Z @ 0x140093820 (-GetRawInputData@RawInput@InputTraceLogging@@SAXPEAXIPEAUtagHIDDATA@@@Z.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x14009D9B0 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x1400F87BC (-TraceLoggingAutoRotationStateEvent@@YAXXZ.c)
 *     ?IsFontUnreliable@UmfdReliabilityManager@@YA_NUUMFD_RELIABILITY_KEY@@@Z @ 0x1401F8A34 (-IsFontUnreliable@UmfdReliabilityManager@@YA_NUUMFD_RELIABILITY_KEY@@@Z.c)
 *     GreNamedEscape @ 0x14027EC38 (GreNamedEscape.c)
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x1402946C8 (-TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z.c)
 *     ?TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z @ 0x1402D1E20 (-TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z.c)
 *     ?TraceLoggingPenHotkey@@YAXII@Z @ 0x1402D2298 (-TraceLoggingPenHotkey@@YAXII@Z.c)
 *     ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z @ 0x1402D232C (-TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1402D23B0 (-TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z @ 0x1402D2434 (-TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14009234C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD v8[10]; // [rsp+30h] [rbp-68h] BYREF

  v8[8] = a7;
  v8[6] = a6;
  v8[4] = a5;
  v8[9] = 4LL;
  v8[7] = 4LL;
  v8[5] = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 5, v8);
}
