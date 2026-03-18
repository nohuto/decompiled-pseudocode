/*
 * XREFs of ?StartFrame@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z @ 0x1400FA10C
 * Callers:
 *     RIMStartPointerDeviceFrame @ 0x1400F9BCC (RIMStartPointerDeviceFrame.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x14005B6B0 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall InputTraceLogging::TelemetryDebug::RIM::StartFrame(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_1402A9E40 > 7
    && (qword_1402A9E50 & 0x10000) != 0
    && (qword_1402A9E58 & 0x10000) == qword_1402A9E58 )
  {
    v4 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      (__int64)&dword_1402A9E40,
      byte_14028644B,
      0x10000LL,
      a4,
      (__int64)&v4);
  }
}
