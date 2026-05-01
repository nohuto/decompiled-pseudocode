/*
 * XREFs of ??$SetPrimaryViewId@AEAI@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI@Z @ 0x1800BEC18
 * Callers:
 *     ?SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z @ 0x1800BEFA8 (-SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z.c)
 * Callees:
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

int __fastcall TouchKeyboardExperienceTelemetryLogger::SetPrimaryViewId<unsigned int &>(_DWORD *a1)
{
  const struct _tlgProvider_t *v2; // rax
  _DWORD v4[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v5; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v8; // [rsp+60h] [rbp+17h]
  int v9; // [rsp+68h] [rbp+1Fh]
  int v10; // [rsp+6Ch] [rbp+23h]
  _DWORD *v11; // [rsp+70h] [rbp+27h]
  __int64 v12; // [rsp+78h] [rbp+2Fh]
  __int64 *v13; // [rsp+80h] [rbp+37h]
  __int64 v14; // [rsp+88h] [rbp+3Fh]

  v2 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 5u && (*((_BYTE *)v2 + 16) & 0x10) != 0 && (*((_QWORD *)v2 + 3) & 0x10LL) == *((_QWORD *)v2 + 3) )
  {
    v4[0] = *a1;
    v12 = 4LL;
    v13 = &v5;
    v5 = 0x1000000LL;
    v11 = v4;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v2 + 1);
    v14 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 16LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v8 = &unk_180807C1A;
    UserData.Reserved = 2;
    v9 = 51;
    v10 = 1;
    v4[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v2) = EventWriteTransfer(*((_QWORD *)v2 + 4), &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return (int)v2;
}
