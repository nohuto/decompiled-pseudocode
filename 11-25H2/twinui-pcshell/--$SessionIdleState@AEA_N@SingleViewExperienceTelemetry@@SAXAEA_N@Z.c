/*
 * XREFs of ??$SessionIdleState@AEA_N@SingleViewExperienceTelemetry@@SAXAEA_N@Z @ 0x1800B9520
 * Callers:
 *     ?OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z @ 0x1800B9484 (-OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z.c)
 * Callees:
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800310C4 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

int __fastcall SingleViewExperienceTelemetry::SessionIdleState<bool &>(char *a1)
{
  const struct _tlgProvider_t *v2; // rax
  const struct _tlgProvider_t *v3; // r10
  char v4; // al
  char v6; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v7; // [rsp+34h] [rbp-4Ch]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v10; // [rsp+58h] [rbp-28h]
  int v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+64h] [rbp-1Ch]
  char *v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+74h] [rbp-Ch]

  v2 = SingleViewExperienceLogging::Provider((__int64)a1);
  v3 = v2;
  if ( *(_DWORD *)v2 > 5u
    && (*((_QWORD *)v2 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v2 + 3) & 0x200000000000LL) == *((_QWORD *)v2 + 3) )
  {
    v4 = *a1;
    v15 = 0;
    v6 = v4;
    v14 = 1;
    v13 = &v6;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v3 + 1);
    EventDescriptor.Keyword = 0x200000000000LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v10 = &unk_1807F0610;
    v12 = 1;
    UserData.Reserved = 2;
    v11 = 36;
    v7 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v2) = EventWriteTransfer(*((_QWORD *)v3 + 4), &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  return (int)v2;
}
