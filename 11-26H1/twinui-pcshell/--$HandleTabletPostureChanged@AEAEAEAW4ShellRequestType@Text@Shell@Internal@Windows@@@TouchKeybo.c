/*
 * XREFs of ??$HandleTabletPostureChanged@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18015CD88
 * Callers:
 *     ?HandleTabletPostureChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18015CD50 (-HandleTabletPostureChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Tex.c)
 * Callees:
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18015CEF8 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

const struct _tlgProvider_t *__fastcall TouchKeyboardExperienceTelemetryLogger::HandleTabletPostureChanged<unsigned char &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
        _BYTE *a1,
        char *a2)
{
  const struct _tlgProvider_t *result; // rax
  int v5; // r9d
  __int64 v6; // r8
  bool v7; // zf
  __int64 v8[3]; // [rsp+40h] [rbp-18h] BYREF
  char v9; // [rsp+70h] [rbp+18h] BYREF
  bool v10; // [rsp+78h] [rbp+20h] BYREF

  result = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)result > 5u && (*((_BYTE *)result + 16) & 0x10) != 0 )
  {
    v6 = *((_QWORD *)result + 3) & 0x10LL;
    if ( v6 == *((_QWORD *)result + 3) )
    {
      v7 = *a1 == 0;
      v9 = *a2;
      v10 = !v7;
      v8[0] = 0x2000000LL;
      return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                                              (_DWORD)result,
                                              (unsigned int)&unk_18080F55C,
                                              v6,
                                              v5,
                                              (__int64)&v10,
                                              (__int64)&v9,
                                              (__int64)v8);
    }
  }
  return result;
}
