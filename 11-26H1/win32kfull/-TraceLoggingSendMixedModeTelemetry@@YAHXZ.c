/*
 * XREFs of ?TraceLoggingSendMixedModeTelemetry@@YAHXZ @ 0x14023D73C
 * Callers:
 *     NtUserTraceLoggingSendMixedModeTelemetry @ 0x14023D700 (NtUserTraceLoggingSendMixedModeTelemetry.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x14023D7A8 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

__int64 __fastcall TraceLoggingSendMixedModeTelemetry(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned int)dword_1403AAA30 > 5
    && (qword_1403AAA40 & 0x200000000000LL) != 0
    && (qword_1403AAA48 & 0x200000000000LL) == qword_1403AAA48 )
  {
    v5 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1403AAA30,
      (unsigned int)&unk_1403770F0,
      a3,
      a4,
      (__int64)&v5);
  }
  return 1LL;
}
