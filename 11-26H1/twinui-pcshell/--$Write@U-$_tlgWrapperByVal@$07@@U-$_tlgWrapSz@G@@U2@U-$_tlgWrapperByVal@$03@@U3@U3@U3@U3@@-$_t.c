/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x18000B368
 * Callers:
 *     ??$FocusingView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEAPEBG1AEAKAEAJ333@Z @ 0x1804F3B38 (--$FocusingView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPosturePositionerTelemet.c)
 *     ??$GainingControlOfView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEAPEBG1AEAKAEAJ333@Z @ 0x1804F3C78 (--$GainingControlOfView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPosturePositione.c)
 *     ??$InitializingPositionOfView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEAPEBG1AEAKAEAJ333@Z @ 0x1804F4378 (--$InitializingPositionOfView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPosturePos.c)
 *     ??$LosingControlOfView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEAPEBG1AEAKAEAJ333@Z @ 0x1804F4530 (--$LosingControlOfView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPosturePositioner.c)
 *     ??$RecoveringView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEAPEBG1AEAKAEAJ333@Z @ 0x1804F51A8 (--$RecoveringView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPosturePositionerTelem.c)
 *     ??$ReleasingSecondaryView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEAPEBG1AEAKAEAJ333@Z @ 0x1804F5670 (--$ReleasingSecondaryView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPosturePositio.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007E240 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 v8; // rcx
  __int64 v9; // rax

  v8 = -1LL;
  if ( *a7 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(*a7 + 2 * v9) );
  }
  if ( *a6 )
  {
    do
      ++v8;
    while ( *(_WORD *)(*a6 + 2 * v8) );
  }
  return tlgWriteTransfer_EventWriteTransfer(a1, a2);
}
