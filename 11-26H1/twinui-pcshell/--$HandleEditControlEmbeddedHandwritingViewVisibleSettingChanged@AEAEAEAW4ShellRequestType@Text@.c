/*
 * XREFs of ??$HandleEditControlEmbeddedHandwritingViewVisibleSettingChanged@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800BD350
 * Callers:
 *     ?HandleEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800BD300 (-HandleEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapterPolicy@KeyboardHosti.c)
 * Callees:
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

int __fastcall TouchKeyboardExperienceTelemetryLogger::HandleEditControlEmbeddedHandwritingViewVisibleSettingChanged<unsigned char &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
        _BYTE *a1,
        char *a2)
{
  const struct _tlgProvider_t *v4; // rax
  bool v5; // zf
  char v7; // [rsp+30h] [rbp-29h] BYREF
  bool v8; // [rsp+31h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+34h] [rbp-25h]
  __int64 v10; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  void *v13; // [rsp+60h] [rbp+7h]
  int v14; // [rsp+68h] [rbp+Fh]
  int v15; // [rsp+6Ch] [rbp+13h]
  bool *v16; // [rsp+70h] [rbp+17h]
  __int64 v17; // [rsp+78h] [rbp+1Fh]
  char *v18; // [rsp+80h] [rbp+27h]
  __int64 v19; // [rsp+88h] [rbp+2Fh]
  __int64 *v20; // [rsp+90h] [rbp+37h]
  __int64 v21; // [rsp+98h] [rbp+3Fh]

  v4 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v4 > 5u && (*((_BYTE *)v4 + 16) & 0x10) != 0 && (*((_QWORD *)v4 + 3) & 0x10LL) == *((_QWORD *)v4 + 3) )
  {
    v5 = *a1 == 0;
    v7 = *a2;
    v20 = &v10;
    v8 = !v5;
    v10 = 0x1000000LL;
    v19 = 1LL;
    v18 = &v7;
    v17 = 1LL;
    v16 = &v8;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v4 + 1);
    v21 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 16LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v13 = &unk_18080FDB3;
    v15 = 1;
    UserData.Reserved = 2;
    v14 = 140;
    v9 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v4) = EventWriteTransfer(*((_QWORD *)v4 + 4), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return (int)v4;
}
