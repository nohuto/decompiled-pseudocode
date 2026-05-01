/*
 * XREFs of ?ReportTraceLoggingMessage@TraceLoggingProvider@wil@@IEAAXPEBDPEAD@Z @ 0x1803249B4
 * Callers:
 *     ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x180325010 (-TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180013248 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x18001FE34 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1806A4AA0 (_alloca_probe.c)
 */

void __fastcall wil::TraceLoggingProvider::ReportTraceLoggingMessage(
        wil::TraceLoggingProvider *this,
        char *a2,
        va_list a3)
{
  _DWORD *v3; // rax
  __int64 v5; // r9
  _DWORD *v6; // rcx
  const WCHAR *v7; // [rsp+30h] [rbp-1028h] BYREF
  _BYTE v8[4096]; // [rsp+40h] [rbp-1018h] BYREF

  v3 = (_DWORD *)*((_QWORD *)this + 1);
  if ( v3 && *v3 > 5u )
  {
    wil::details::PrintLoggingMessage((wil::details *)v8, (unsigned __int16 *)a2, (__int64)a2, a3);
    v6 = (_DWORD *)*((_QWORD *)this + 1);
    if ( *v6 > 5u )
    {
      v7 = (const WCHAR *)v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        (__int64)v6,
        byte_1807BBE28,
        0LL,
        v5,
        &v7);
    }
  }
}
