/*
 * XREFs of ??$HandleDpiChanged@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1801BDBE0
 * Callers:
 *     ?HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1801BD980 (-HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Int.c)
 * Callees:
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

int __fastcall TouchKeyboardExperienceTelemetryLogger::HandleDpiChanged<enum Windows::Internal::Shell::Text::ShellRequestType &>(
        char *a1)
{
  const struct _tlgProvider_t *v2; // rax
  char v4; // [rsp+30h] [rbp-19h] BYREF
  unsigned int v5; // [rsp+34h] [rbp-15h]
  __int64 v6; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v9; // [rsp+60h] [rbp+17h]
  int v10; // [rsp+68h] [rbp+1Fh]
  int v11; // [rsp+6Ch] [rbp+23h]
  char *v12; // [rsp+70h] [rbp+27h]
  __int64 v13; // [rsp+78h] [rbp+2Fh]
  __int64 *v14; // [rsp+80h] [rbp+37h]
  __int64 v15; // [rsp+88h] [rbp+3Fh]

  v2 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 5u && (*((_BYTE *)v2 + 16) & 0x10) != 0 && (*((_QWORD *)v2 + 3) & 0x10LL) == *((_QWORD *)v2 + 3) )
  {
    v4 = *a1;
    v13 = 1LL;
    v14 = &v6;
    v6 = 0x2000000LL;
    v12 = &v4;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v2 + 1);
    v15 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 16LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v9 = &unk_18080FBF1;
    v11 = 1;
    UserData.Reserved = 2;
    v10 = 49;
    v5 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v2) = EventWriteTransfer(*((_QWORD *)v2 + 4), &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return (int)v2;
}
