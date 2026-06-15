/*
 * XREFs of ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x180018F64
 * Callers:
 *     ?TsSessionIdGetUserDuckingPreference@@YAKK@Z @ 0x180018A28 (-TsSessionIdGetUserDuckingPreference@@YAKK@Z.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180001FB0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180004A44 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18000B220 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800158F0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180021364 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800281CC (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18002CDC4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002FD90 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@std@@@std@@QEAA@XZ @ 0x180043334 (--1-$unique_ptr@U_TOKEN_USER@@U-$default_delete@U_TOKEN_USER@@@std@@@std@@QEAA@XZ.c)
 *     ?LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z @ 0x180043CCC (-LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z.c)
 */

__int64 __fastcall RpcTryInitializeUserSettings(struct TSSession *a1)
{
  const struct _tlgProvider_t *v2; // rax
  int v3; // r8d
  int v4; // r9d
  RPC_STATUS v5; // eax
  unsigned int v6; // edi
  HANDLE CurrentThread; // rax
  const char *v9; // r9
  unsigned int LastError; // ebx
  PSID *v11; // rdi
  DWORD v12; // eax
  const char *v13; // r9
  unsigned int v14; // eax
  unsigned int v15; // eax
  LSTATUS v16; // eax
  DWORD TokenInformationLength; // [rsp+30h] [rbp-D0h] BYREF
  int v18[2]; // [rsp+38h] [rbp-C8h] BYREF
  void *TokenHandle; // [rsp+40h] [rbp-C0h] BYREF
  HKEY phkResult; // [rsp+48h] [rbp-B8h] BYREF
  HKEY v21[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE TokenInformation[512]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  if ( !*((_BYTE *)a1 + 1092) )
  {
    v2 = AudioSrvPolicyManagerTelemetryProvider::Provider();
    if ( *(_DWORD *)v2 > 4u && (unsigned __int8)tlgKeywordOn(v2, 0x20000LL) )
    {
      v18[0] = *(_DWORD *)a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v3,
        (unsigned int)&unk_18005B439,
        v3,
        v4,
        (__int64)v18);
    }
    v5 = RpcImpersonateClient(0LL);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C0,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
    TokenHandle = 0LL;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &TokenHandle,
      0LL);
    CurrentThread = GetCurrentThread();
    if ( !OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x2C7,
                    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                    v9);
LABEL_22:
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
      RpcRevertToSelf();
      return LastError;
    }
    TokenInformationLength = 512;
    *(_QWORD *)v18 = 0LL;
    v11 = (PSID *)TokenInformation;
    if ( !GetTokenInformation(TokenHandle, TokenUser, TokenInformation, 0x200u, &TokenInformationLength) )
    {
      v12 = GetLastError();
      if ( v12 == 122 )
      {
        *(_QWORD *)v18 = operator new[](TokenInformationLength, (const struct std::nothrow_t *)&std::nothrow);
        v11 = *(PSID **)v18;
        if ( !*(_QWORD *)v18 )
        {
          LastError = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2D5,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            (const char *)0x8007000ELL);
LABEL_21:
          std::unique_ptr<_TOKEN_USER>::~unique_ptr<_TOKEN_USER>(v18);
          goto LABEL_22;
        }
        if ( !GetTokenInformation(
                TokenHandle,
                TokenUser,
                *(LPVOID *)v18,
                TokenInformationLength,
                &TokenInformationLength) )
        {
          v14 = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x2D8,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                  v13);
LABEL_15:
          LastError = v14;
          goto LABEL_21;
        }
      }
      else if ( v12 )
      {
        v14 = wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)0x2DC,
                (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                (const char *)v12);
        goto LABEL_15;
      }
    }
    if ( EqualSid(*v11, *((PSID *)a1 + 137)) )
    {
      phkResult = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
        &phkResult,
        0LL);
      v15 = RegOpenCurrentUser(0x20019u, &phkResult);
      if ( v15 )
      {
        LastError = wil::details::in1diag3::Return_Win32(
                      retaddr,
                      (void *)0x2E7,
                      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                      (const char *)v15);
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&phkResult);
        goto LABEL_21;
      }
      v21[0] = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
        v21,
        0LL);
      v16 = RegOpenKeyExW(phkResult, L"Software\\Microsoft\\Multimedia\\Audio", 0, 1u, v21);
      *((_BYTE *)a1 + 1092) = v16 == 0;
      if ( !v16 )
        LoadUserSettings(a1, v21[0]);
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(v21);
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&phkResult);
    }
    std::unique_ptr<_TOKEN_USER>::~unique_ptr<_TOKEN_USER>(v18);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
    RpcRevertToSelf();
  }
  return *((_BYTE *)a1 + 1092) == 0 ? 0x80070490 : 0;
}
