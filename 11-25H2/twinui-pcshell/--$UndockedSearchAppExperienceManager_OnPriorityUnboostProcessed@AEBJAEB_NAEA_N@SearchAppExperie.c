/*
 * XREFs of ??$UndockedSearchAppExperienceManager_OnPriorityUnboostProcessed@AEBJAEB_NAEA_N@SearchAppExperienceManagerTelemetry@@SAXAEBJAEB_NAEA_N@Z @ 0x180014B18
 * Callers:
 *     ?UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800149D0 (-UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800384F8 (-Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

int __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_OnPriorityUnboostProcessed<long const &,bool const &,bool &>(
        int *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3)
{
  const struct _tlgProvider_t *v6; // rax
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  int v11; // [rsp+38h] [rbp-49h] BYREF
  int v12; // [rsp+3Ch] [rbp-45h] BYREF
  _DWORD v13[2]; // [rsp+40h] [rbp-41h] BYREF
  __int64 v14; // [rsp+48h] [rbp-39h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  void *v17; // [rsp+78h] [rbp-9h]
  int v18; // [rsp+80h] [rbp-1h]
  int v19; // [rsp+84h] [rbp+3h]
  _DWORD *v20; // [rsp+88h] [rbp+7h]
  __int64 v21; // [rsp+90h] [rbp+Fh]
  int *v22; // [rsp+98h] [rbp+17h]
  __int64 v23; // [rsp+A0h] [rbp+1Fh]
  int *v24; // [rsp+A8h] [rbp+27h]
  __int64 v25; // [rsp+B0h] [rbp+2Fh]
  __int64 *v26; // [rsp+B8h] [rbp+37h]
  __int64 v27; // [rsp+C0h] [rbp+3Fh]

  v6 = SearchAppLauncherLogging::Provider();
  if ( *(_DWORD *)v6 > 4u )
  {
    v7 = *a1;
    v8 = *a3;
    v9 = *a2;
    v26 = &v14;
    v24 = &v11;
    v22 = &v12;
    v20 = v13;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = *((_QWORD *)v6 + 1);
    v13[0] = v7;
    EventDescriptor.Keyword = 0LL;
    v11 = v8;
    v12 = v9;
    v25 = 4LL;
    v23 = 4LL;
    v21 = 4LL;
    v14 = 0x1000000LL;
    v27 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v17 = &unk_1807C666C;
    UserData.Reserved = 2;
    v18 = 143;
    v19 = 1;
    v13[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v6) = EventWriteTransfer(*((_QWORD *)v6 + 4), &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  return (int)v6;
}
