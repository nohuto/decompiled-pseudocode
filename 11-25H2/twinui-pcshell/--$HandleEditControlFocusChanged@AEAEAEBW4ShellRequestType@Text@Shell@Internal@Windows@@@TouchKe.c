/*
 * XREFs of ??$HandleEditControlFocusChanged@AEAEAEBW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAEAEBW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180472F60
 * Callers:
 *     ?HandleEditControlFocusChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180038520 (-HandleEditControlFocusChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@.c)
 * Callees:
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18016D3A4 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::HandleEditControlFocusChanged<unsigned char &,enum Windows::Internal::Shell::Text::ShellRequestType const &>(
        _BYTE *a1,
        __int64 a2)
{
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  bool v7; // zf
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  bool v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v9 = a2;
  v3 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v3 > 5u )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)v3, 16LL);
    if ( (_BYTE)v3 )
    {
      v7 = *a1 == 0;
      v11 = 0x1000000LL;
      v10 = !v7;
      LOBYTE(v9) = 0;
      LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                     v4,
                     (unsigned __int8 *)&unk_1807D8B5B,
                     v5,
                     v6,
                     (__int64)&v10,
                     (__int64)&v9,
                     (__int64)&v11);
    }
  }
  return (char)v3;
}
