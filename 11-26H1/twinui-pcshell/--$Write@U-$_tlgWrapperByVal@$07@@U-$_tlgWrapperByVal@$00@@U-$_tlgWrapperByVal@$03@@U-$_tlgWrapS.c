/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18000B8A0
 * Callers:
 *     ??$AppliedShowWindowPolicyForView@AEAPEAUHWND__@@AEB_NAEAKAEAY0BD@$$CBG@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEB_NAEAKAEAY0BD@$$CBG@Z @ 0x1804F3234 (--$AppliedShowWindowPolicyForView@AEAPEAUHWND__@@AEB_NAEAKAEAY0BD@$$CBG@GamingPosturePositionerT.c)
 *     ??$AppliedShowWindowPolicyForView@AEAPEAUHWND__@@AEB_NAEAKAEAY0BE@$$CBG@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEB_NAEAKAEAY0BE@$$CBG@Z @ 0x1804F32D4 (--$AppliedShowWindowPolicyForView@AEAPEAUHWND__@@AEB_NAEAKAEAY0BE@$$CBG@GamingPosturePositionerT.c)
 *     ??$AppliedShowWindowPolicyForView@AEAPEAUHWND__@@AEB_NAEAKAEAY0BI@$$CBG@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEB_NAEAKAEAY0BI@$$CBG@Z @ 0x1804F3374 (--$AppliedShowWindowPolicyForView@AEAPEAUHWND__@@AEB_NAEAKAEAY0BI@$$CBG@GamingPosturePositionerT.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007E240 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 v8; // rax

  if ( *a8 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(*a8 + 2 * v8) );
  }
  return tlgWriteTransfer_EventWriteTransfer(a1, a2);
}
