/*
 * XREFs of ?ResetUserSettings@@YAXPEAVTSSession@@@Z @ 0x18002688C
 * Callers:
 *     ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x18002642C (-TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 */

void __fastcall ResetUserSettings(struct TSSession *a1)
{
  const struct _tlgProvider_t *v2; // rax
  _DWORD v3[2]; // [rsp+30h] [rbp-50h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v6; // [rsp+58h] [rbp-28h]
  int v7; // [rsp+60h] [rbp-20h]
  int v8; // [rsp+64h] [rbp-1Ch]
  _DWORD *v9; // [rsp+68h] [rbp-18h]
  __int64 v10; // [rsp+70h] [rbp-10h]

  v2 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v2 > 4u
    && (*((_DWORD *)v2 + 4) & 0x20000) != 0
    && (*((_QWORD *)v2 + 3) & 0x20000LL) == *((_QWORD *)v2 + 3) )
  {
    v3[0] = *(_DWORD *)a1;
    EventDescriptor.Keyword = 0x20000LL;
    v9 = v3;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = *((_QWORD *)v2 + 1);
    v10 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v6 = &unk_18005B47B;
    UserData.Reserved = 2;
    v7 = 32;
    v8 = 1;
    v3[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v2 + 4), &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  *((_DWORD *)a1 + 272) = 1;
}
