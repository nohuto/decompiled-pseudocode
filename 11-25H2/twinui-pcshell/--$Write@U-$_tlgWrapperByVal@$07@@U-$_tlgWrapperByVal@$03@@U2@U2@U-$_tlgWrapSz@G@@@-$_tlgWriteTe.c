/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapSz@G@@@Z @ 0x1800059F8
 * Callers:
 *     ?StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXW4Mode@LauncherTelemetry@@IPEBG@Z @ 0x180456610 (-StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXW4Mode@LauncherTelemetry@@IPEBG.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18008EEEC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9)
{
  __int64 v9; // rax

  if ( *a9 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(*a9 + 2 * v9) );
  }
  return tlgWriteTransfer_EventWriteTransfer(a1, a2);
}
