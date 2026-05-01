/*
 * XREFs of ?RmpSystemEnableAsyncInSwap@@YAXXZ @ 0x18008C220
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800801E0 (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18002FF30 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void RmpSystemEnableAsyncInSwap(void)
{
  int v0; // edi
  NTSTATUS v1; // ebx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // [rsp+38h] [rbp-9h] BYREF
  void *TokenHandle; // [rsp+40h] [rbp-1h] BYREF
  __int128 SystemInformation; // [rsp+48h] [rbp+7h] BYREF
  __int64 v8; // [rsp+58h] [rbp+17h]
  struct _TOKEN_PRIVILEGES v9[2]; // [rsp+60h] [rbp+1Fh] BYREF
  struct _TOKEN_PRIVILEGES NewState; // [rsp+80h] [rbp+3Fh] BYREF

  v8 = 0LL;
  SystemInformation = 0LL;
  TokenHandle = 0LL;
  memset(v9, 0, sizeof(v9));
  v0 = 0;
  NewState = 0LL;
  if ( ImpersonateSelf(SecurityImpersonation) )
  {
    v0 = 1;
    v1 = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, 0x20u, 0, &TokenHandle);
    if ( v1 >= 0 )
    {
      v5 = 13LL;
      NewState.Privileges[0].Luid = (LUID)13LL;
      NewState.PrivilegeCount = 1;
      NewState.Privileges[0].Attributes = 2;
      v1 = NtAdjustPrivilegesToken(TokenHandle, 0, &NewState, 0x10u, 0LL, 0LL);
      if ( !v1 )
      {
        *(_QWORD *)&SystemInformation = 0x1300000001LL;
        *((_QWORD *)&SystemInformation + 1) = v9;
        LODWORD(v8) = 32;
        *(_QWORD *)&v9[0].PrivilegeCount = 0x101000009LL;
        v1 = NtSetSystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, &SystemInformation, 0x18u);
        if ( v1 >= 0 )
          v1 = 0;
      }
    }
  }
  else
  {
    v1 = -1073741555;
  }
  if ( TokenHandle )
    NtClose(TokenHandle);
  if ( v0 )
    RevertToSelf();
  if ( (unsigned int)dword_1800E1278 > 4 && tlgKeywordOn((__int64)&dword_1800E1278, 1LL) )
  {
    LODWORD(v5) = v1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v2,
      byte_1800D462C,
      v3,
      v4,
      (__int64)&v5);
  }
}
