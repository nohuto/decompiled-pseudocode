/*
 * XREFs of ??$HandleDisplayChanged@AEB_NAEB_NAEB_NAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEB_N00AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1802291EC
 * Callers:
 *     ?HandleDisplayChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180214530 (-HandleDisplayChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18000908C (--$Write@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char TouchKeyboardExperienceTelemetryLogger::HandleDisplayChanged<bool const &,bool const &,bool const &,enum Windows::Internal::Shell::Text::ShellRequestType &>()
{
  const struct _tlgProvider_t *v0; // rax
  __int64 v1; // r10

  v0 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v0 > 5u )
  {
    LOBYTE(v0) = tlgKeywordOn((__int64)v0, 16LL);
    if ( (_BYTE)v0 )
      LOBYTE(v0) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                     v1,
                     (__int64)&unk_18080FC7A);
  }
  return (char)v0;
}
