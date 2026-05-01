/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001474
 * Callers:
 *     ??$InputAppResumeRequested@AEA_NPEBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N$$QEAPEBG@Z @ 0x180464BC8 (--$InputAppResumeRequested@AEA_NPEBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N$$QEAPEBG@Z.c)
 *     ??$DashboardManager_LogBrokerCallerValue@_NAEAY0BAA@G@DashboardManagerTelemetry@@SAX$$QEA_NAEAY0BAA@G@Z @ 0x1805C446C (--$DashboardManager_LogBrokerCallerValue@_NAEAY0BAA@G@DashboardManagerTelemetry@@SAX$$QEA_NAEAY0.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007E240 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v6; // rax

  if ( *a6 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(*a6 + 2 * v6) );
  }
  return tlgWriteTransfer_EventWriteTransfer(a1, a2);
}
