/*
 * XREFs of PbmReportAppClosing @ 0x1800181C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180001FB0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18000B220 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x18000CA50 (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z @ 0x1800183E8 (-OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18002CDC4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     memset_0 @ 0x180030A1C (memset_0.c)
 */

__int64 __fastcall PbmReportAppClosing(
        RPC_BINDING_HANDLE BindingHandle,
        const unsigned __int16 *a2,
        unsigned __int64 a3)
{
  int LastError; // ebx
  RPC_STATUS v7; // eax
  RPC_STATUS v8; // eax
  HANDLE CurrentThread; // rax
  const char *v10; // r9
  unsigned int TokenInformation; // eax
  CPlaybackManager *v12; // rcx
  __int64 v14; // rdx
  unsigned int v15; // [rsp+30h] [rbp-59h] BYREF
  void *TokenHandle; // [rsp+38h] [rbp-51h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v18[104]; // [rsp+48h] [rbp-41h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v15 = 0;
  LastError = -2147418113;
  if ( !g_PlaybackManager )
    return (unsigned int)LastError;
  memset_0(v18, 0, sizeof(v18));
  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  v7 = RpcServerInqCallAttributesW(BindingHandle, RpcCallAttributes);
  LastError = v7;
  if ( v7 > 0 )
    LastError = (unsigned __int16)v7 | 0x80070000;
  if ( LastError < 0 )
  {
    v14 = 290LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)LastError);
    return (unsigned int)LastError;
  }
  v8 = RpcImpersonateClient(BindingHandle);
  LastError = v8;
  if ( v8 > 0 )
    LastError = (unsigned __int16)v8 | 0x80070000;
  if ( LastError < 0 )
  {
    v14 = 292LL;
    goto LABEL_19;
  }
  TokenHandle = 0LL;
  CurrentThread = GetCurrentThread();
  if ( OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
  {
    TokenInformation = GetTokenInformation(TokenHandle, 0LL, 0LL, 0LL, &v15);
    if ( !TokenInformation )
    {
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      RpcRevertToSelf();
      return (unsigned int)CPlaybackManager::OnAppClosed(v12, a2, a3, v15);
    }
    LastError = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0x12A,
                  (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                  (const char *)TokenInformation);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x128,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                  v10);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
  }
  RpcRevertToSelf();
  if ( !LastError )
    return (unsigned int)CPlaybackManager::OnAppClosed(v12, a2, a3, v15);
  if ( LastError > 0 )
    return (unsigned __int16)LastError | 0x80070000;
  return (unsigned int)LastError;
}
