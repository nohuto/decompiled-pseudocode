/*
 * XREFs of ?ResetAllApplicationSpecificEndpoints@CWindowsPolicyManager@@UEAAJPEAX@Z @ 0x180046FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180001FB0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset @ 0x180008950 (wil--details--lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___--reset.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18000B220 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x18000CA50 (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800158F0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18002CDC4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ResetAllApplicationSpecificEndpoints@CApplicationManager@@QEAAJK@Z @ 0x18003CEF8 (-ResetAllApplicationSpecificEndpoints@CApplicationManager@@QEAAJK@Z.c)
 *     ?ClearAllPersistedApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@SAJXZ @ 0x1800496F0 (-ClearAllPersistedApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@SAJXZ.c)
 */

__int64 __fastcall CWindowsPolicyManager::ResetAllApplicationSpecificEndpoints(CWindowsPolicyManager *this, void *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // eax
  HANDLE CurrentThread; // rax
  const char *v8; // r9
  unsigned int LastError; // eax
  unsigned int TokenInformation; // eax
  CApplicationManager *v11; // rcx
  int v12; // eax
  void *TokenHandle[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  char v15; // [rsp+60h] [rbp+20h] BYREF
  char v16; // [rsp+61h] [rbp+21h]
  unsigned int v17; // [rsp+68h] [rbp+28h] BYREF

  v3 = ApplicationSpecificEndpointInfo::ClearAllPersistedApplicationDefaultEndpoints();
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = RpcImpersonateClient(a2);
    if ( v5 )
      return wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x19E,
               (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
               (const char *)v5);
    v16 = 1;
    TokenHandle[0] = 0LL;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      TokenHandle,
      0LL);
    CurrentThread = GetCurrentThread();
    if ( OpenThreadToken(CurrentThread, 8u, 1, TokenHandle) )
    {
      v17 = 0;
      TokenInformation = GetTokenInformation(TokenHandle[0], 0LL, 0LL, 0LL, &v17);
      if ( !TokenInformation )
      {
        wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset((__int64)&v15);
        v12 = CApplicationManager::ResetAllApplicationSpecificEndpoints(v11, v17);
        v4 = v12;
        if ( v12 >= 0 )
          v4 = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1AB,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
            (const char *)(unsigned int)v12);
        goto LABEL_13;
      }
      LastError = wil::details::in1diag3::Return_Win32(
                    retaddr,
                    (void *)0x1A6,
                    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
                    (const char *)TokenInformation);
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x1A2,
                    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
                    v8);
    }
    v4 = LastError;
LABEL_13:
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(TokenHandle);
    wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset((__int64)&v15);
    return v4;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19B,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
