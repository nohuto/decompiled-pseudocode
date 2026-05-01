/*
 * XREFs of ??$SnapFlyout_HideAsync@AEA_N@SnapFlyoutTelemetry@@SAXAEA_N@Z @ 0x18007AA08
 * Callers:
 *     SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x1802699D0 (SnapFlyoutHost--HideAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

int __fastcall SnapFlyoutTelemetry::SnapFlyout_HideAsync<bool &>(char *a1)
{
  const struct _tlgProvider_t *v2; // rax
  char v3; // cl
  char v5; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v6; // [rsp+34h] [rbp-4Ch]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v9; // [rsp+58h] [rbp-28h]
  int v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+64h] [rbp-1Ch]
  char *v12; // [rsp+68h] [rbp-18h]
  __int64 v13; // [rsp+70h] [rbp-10h]

  v2 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    v3 = *a1;
    v12 = &v5;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v2 + 1);
    v5 = v3;
    v13 = 1LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v9 = &unk_180824823;
    v11 = 1;
    UserData.Reserved = 2;
    v10 = 36;
    v6 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v2) = EventWriteTransfer(*((_QWORD *)v2 + 4), &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  return (int)v2;
}
