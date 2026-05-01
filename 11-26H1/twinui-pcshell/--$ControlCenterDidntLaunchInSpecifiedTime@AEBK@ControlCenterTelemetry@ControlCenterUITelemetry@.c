/*
 * XREFs of ??$ControlCenterDidntLaunchInSpecifiedTime@AEBK@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXAEBK@Z @ 0x18036A014
 * Callers:
 *     ?OnTargetedMessage@CControlCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18036D5CC (-OnTargetedMessage@CControlCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?Provider@ControlCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180019994 (-Provider@ControlCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800998DC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

char __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::ControlCenterDidntLaunchInSpecifiedTime<unsigned long const &>(
        __int64 a1)
{
  const struct _tlgProvider_t *v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v5 = a1;
  v1 = ControlCenterLogging::Provider(a1);
  if ( *(_DWORD *)v1 > 5u )
  {
    LOBYTE(v1) = tlgKeywordOn((__int64)v1, 0x400000000000LL);
    if ( (_BYTE)v1 )
    {
      v6 = 0x1000000LL;
      LODWORD(v5) = 10000;
      LOBYTE(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v2,
                     byte_1807EDDFD,
                     0LL,
                     v3,
                     (__int64)&v5,
                     (__int64)&v6);
    }
  }
  return (char)v1;
}
