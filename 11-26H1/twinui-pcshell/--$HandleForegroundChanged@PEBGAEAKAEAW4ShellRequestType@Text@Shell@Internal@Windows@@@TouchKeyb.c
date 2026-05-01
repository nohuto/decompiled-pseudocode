/*
 * XREFs of ??$HandleForegroundChanged@PEBGAEAKAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAKAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180481D4C
 * Callers:
 *     ?HandleForegroundChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_KPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18024ECC0 (-HandleForegroundChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_KPEAW4ShellRequestType@Text@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005DE4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::HandleForegroundChanged<unsigned short const *,unsigned long &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
        _QWORD *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD v6[3]; // [rsp+50h] [rbp-18h] BYREF

  v2 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v2, 16LL);
    if ( (_BYTE)v2 )
    {
      v6[0] = *a1;
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                     v4,
                     (__int64)&unk_18080F6E7,
                     v3,
                     v4,
                     v6);
    }
  }
  return (char)v2;
}
