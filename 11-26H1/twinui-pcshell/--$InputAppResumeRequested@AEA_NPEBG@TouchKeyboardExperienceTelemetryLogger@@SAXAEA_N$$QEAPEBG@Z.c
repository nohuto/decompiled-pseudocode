/*
 * XREFs of ??$InputAppResumeRequested@AEA_NPEBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N$$QEAPEBG@Z @ 0x180464BC8
 * Callers:
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18024A340 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001474 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested<bool &,unsigned short const *>(
        char *a1,
        __int64 *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF
  char v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h]

  v4 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v4, 0x200000000000LL);
    if ( (_BYTE)v4 )
    {
      v7 = *a2;
      v10 = *a1;
      v9[0] = v7;
      v11 = 0x1000000LL;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v6,
                     (__int64)&unk_180807FC7,
                     v5,
                     v6,
                     (__int64)&v10,
                     v9);
    }
  }
  return (char)v4;
}
