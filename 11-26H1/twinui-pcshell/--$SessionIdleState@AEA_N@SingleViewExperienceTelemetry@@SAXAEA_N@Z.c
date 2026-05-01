/*
 * XREFs of ??$SessionIdleState@AEA_N@SingleViewExperienceTelemetry@@SAXAEA_N@Z @ 0x1800C38E4
 * Callers:
 *     ?OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z @ 0x1800C3848 (-OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z.c)
 * Callees:
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

int __fastcall SingleViewExperienceTelemetry::SessionIdleState<bool &>(char *a1)
{
  const struct _tlgProvider_t *v2; // rax
  char v4; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v5; // [rsp+34h] [rbp-4Ch]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v8; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+64h] [rbp-1Ch]
  char *v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+70h] [rbp-10h]

  v2 = SingleViewExperienceLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v2 > 5u
    && (*((_QWORD *)v2 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v2 + 3) & 0x200000000000LL) == *((_QWORD *)v2 + 3) )
  {
    v4 = *a1;
    v12 = 1LL;
    v11 = &v4;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v2 + 1);
    EventDescriptor.Keyword = 0x200000000000LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v8 = &unk_18082F6AD;
    v10 = 1;
    UserData.Reserved = 2;
    v9 = 36;
    v5 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v2) = EventWriteTransfer(*((_QWORD *)v2 + 4), &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  return (int)v2;
}
