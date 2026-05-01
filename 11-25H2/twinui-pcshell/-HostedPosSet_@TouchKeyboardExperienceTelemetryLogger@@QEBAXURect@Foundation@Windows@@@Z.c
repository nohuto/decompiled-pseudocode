/*
 * XREFs of ?HostedPosSet_@TouchKeyboardExperienceTelemetryLogger@@QEBAXURect@Foundation@Windows@@@Z @ 0x180095D14
 * Callers:
 *     ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x180095B48 (-SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicatio.c)
 * Callees:
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

int __fastcall TouchKeyboardExperienceTelemetryLogger::HostedPosSet_(__int64 a1, _DWORD *a2)
{
  const struct _tlgProvider_t *v3; // rax
  int v5; // [rsp+30h] [rbp-59h] BYREF
  int v6; // [rsp+34h] [rbp-55h] BYREF
  int v7; // [rsp+38h] [rbp-51h] BYREF
  _DWORD v8[3]; // [rsp+3Ch] [rbp-4Dh] BYREF
  __int64 v9; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  void *v12; // [rsp+70h] [rbp-19h]
  int v13; // [rsp+78h] [rbp-11h]
  int v14; // [rsp+7Ch] [rbp-Dh]
  __int64 *v15; // [rsp+80h] [rbp-9h]
  __int64 v16; // [rsp+88h] [rbp-1h]
  _DWORD *v17; // [rsp+90h] [rbp+7h]
  __int64 v18; // [rsp+98h] [rbp+Fh]
  int *v19; // [rsp+A0h] [rbp+17h]
  __int64 v20; // [rsp+A8h] [rbp+1Fh]
  int *v21; // [rsp+B0h] [rbp+27h]
  __int64 v22; // [rsp+B8h] [rbp+2Fh]
  int *v23; // [rsp+C0h] [rbp+37h]
  __int64 v24; // [rsp+C8h] [rbp+3Fh]

  v3 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v3 > 5u && (*((_BYTE *)v3 + 16) & 0x10) != 0 && (*((_QWORD *)v3 + 3) & 0x10LL) == *((_QWORD *)v3 + 3) )
  {
    v5 = a2[3];
    v6 = a2[2];
    v7 = a2[1];
    v8[0] = *a2;
    v23 = &v5;
    v21 = &v6;
    v19 = &v7;
    v17 = v8;
    v15 = &v9;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v3 + 1);
    v9 = 0x1000000LL;
    v24 = 4LL;
    v22 = 4LL;
    v20 = 4LL;
    v18 = 4LL;
    v16 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 16LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v12 = &unk_1807D239C;
    UserData.Reserved = 2;
    v13 = 69;
    v14 = 1;
    v8[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v3) = EventWriteTransfer(*((_QWORD *)v3 + 4), &EventDescriptor, 0LL, 0LL, 7u, &UserData);
  }
  return (int)v3;
}
