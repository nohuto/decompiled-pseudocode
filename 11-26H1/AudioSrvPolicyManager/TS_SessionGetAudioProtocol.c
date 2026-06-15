/*
 * XREFs of TS_SessionGetAudioProtocol @ 0x18000C430
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180001FB0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18000B220 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x18000CA50 (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x18000CE08 (-GetTsAudioProtocol@@YAIK@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18002CDC4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800453CC (-find@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@st.c)
 */

__int64 __fastcall TS_SessionGetAudioProtocol(RPC_BINDING_HANDLE BindingHandle, DWORD a2, _DWORD *a3, _DWORD *a4)
{
  RPC_STATUS v8; // eax
  int LastError; // esi
  RPC_STATUS v10; // eax
  HANDLE CurrentThread; // rax
  const char *v12; // r9
  unsigned int TokenInformation; // eax
  int CurrentServiceSessionId; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  int v18; // [rsp+28h] [rbp-89h]
  DWORD SessionId; // [rsp+38h] [rbp-79h] BYREF
  void *TokenHandle; // [rsp+40h] [rbp-71h] BYREF
  __int64 v21; // [rsp+48h] [rbp-69h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+50h] [rbp-61h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+58h] [rbp-59h] BYREF
  __int128 v24; // [rsp+60h] [rbp-51h]
  __int128 v25; // [rsp+70h] [rbp-41h]
  __int128 v26; // [rsp+80h] [rbp-31h]
  __int128 v27; // [rsp+90h] [rbp-21h]
  __int128 v28; // [rsp+A0h] [rbp-11h]
  __int128 v29; // [rsp+B0h] [rbp-1h]
  __int64 v30; // [rsp+C0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x944,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070057LL,
      v18);
    return 2147942487LL;
  }
  if ( a4 )
  {
    *a3 = 0xFFFF;
    *a4 = 0;
    SessionId = 0;
    v24 = 0LL;
    v30 = 0LL;
    v25 = 0LL;
    RpcCallAttributes[0] = 2;
    v26 = 0LL;
    RpcCallAttributes[1] = 16;
    v27 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    v8 = RpcServerInqCallAttributesW(BindingHandle, RpcCallAttributes);
    LastError = v8;
    if ( v8 > 0 )
      LastError = (unsigned __int16)v8 | 0x80070000;
    if ( LastError < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x122,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)LastError,
        v18);
    }
    else
    {
      v10 = RpcImpersonateClient(BindingHandle);
      LastError = v10;
      if ( v10 > 0 )
        LastError = (unsigned __int16)v10 | 0x80070000;
      if ( LastError < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x124,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)LastError,
          v18);
      }
      else
      {
        TokenHandle = 0LL;
        CurrentThread = GetCurrentThread();
        if ( OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
        {
          TokenInformation = GetTokenInformation(TokenHandle, 0LL, 0LL, 0LL, &SessionId);
          if ( !TokenInformation )
          {
            if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
              CloseHandle(TokenHandle);
            RpcRevertToSelf();
LABEL_14:
            if ( a2 == -1 )
              a2 = SessionId;
            CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
            if ( a2 != SessionId && SessionId != CurrentServiceSessionId )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x957,
                (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                (const char *)0x80070005LL,
                v18);
              return 2147942405LL;
            }
            if ( a2 == (unsigned int)RtlGetCurrentServiceSessionId() )
            {
              *a3 = 0;
            }
            else
            {
              *a3 = 0xFFFF;
              EnterCriticalSection(&stru_180068A08);
              LODWORD(TokenHandle) = a2;
              EnterCriticalSection(&stru_180068A08);
              v22 = &stru_180068A08;
              std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::find(
                v15,
                &v21,
                &TokenHandle);
              if ( v21 != qword_180068A38 )
              {
                v16 = *(_QWORD *)(v21 + 24);
                LeaveCriticalSection(&stru_180068A08);
                *a3 = *(_DWORD *)(v16 + 4);
                *a4 = *(_DWORD *)(v16 + 8);
                LeaveCriticalSection(&stru_180068A08);
                return 0LL;
              }
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v22);
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x471,
                (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                (const char *)0x80070490LL,
                v18);
              LeaveCriticalSection(&stru_180068A08);
              *a3 = GetTsAudioProtocol(a2);
            }
            *a4 = 0;
            return 0LL;
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
                        v12);
          if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            CloseHandle(TokenHandle);
        }
        RpcRevertToSelf();
        if ( LastError >= 0 )
          goto LABEL_14;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94D,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)LastError,
      v18);
    return (unsigned int)LastError;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x945,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070057LL,
      v18);
    return 2147942487LL;
  }
}
