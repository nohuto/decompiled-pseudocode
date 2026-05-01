/*
 * XREFs of ??$ViewShown@AEAII@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI$$QEAI@Z @ 0x1800BC420
 * Callers:
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x1800BAD08 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 * Callees:
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

int __fastcall TouchKeyboardExperienceTelemetryLogger::ViewShown<unsigned int &,unsigned int>(_DWORD *a1, int *a2)
{
  const struct _tlgProvider_t *v4; // rax
  int v6; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v7[3]; // [rsp+34h] [rbp-35h] BYREF
  __int64 v8; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  void *v11; // [rsp+70h] [rbp+7h]
  int v12; // [rsp+78h] [rbp+Fh]
  int v13; // [rsp+7Ch] [rbp+13h]
  _DWORD *v14; // [rsp+80h] [rbp+17h]
  __int64 v15; // [rsp+88h] [rbp+1Fh]
  int *v16; // [rsp+90h] [rbp+27h]
  __int64 v17; // [rsp+98h] [rbp+2Fh]
  __int64 *v18; // [rsp+A0h] [rbp+37h]
  __int64 v19; // [rsp+A8h] [rbp+3Fh]

  v4 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v4 > 5u && (*((_BYTE *)v4 + 16) & 0x10) != 0 && (*((_QWORD *)v4 + 3) & 0x10LL) == *((_QWORD *)v4 + 3) )
  {
    v6 = *a2;
    v7[0] = *a1;
    v8 = 0x1000000LL;
    v18 = &v8;
    v16 = &v6;
    v14 = v7;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v4 + 1);
    v19 = 8LL;
    v17 = 4LL;
    v15 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 16LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v11 = &unk_180807B0C;
    UserData.Reserved = 2;
    v12 = 56;
    v13 = 1;
    v7[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v4) = EventWriteTransfer(*((_QWORD *)v4 + 4), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return (int)v4;
}
