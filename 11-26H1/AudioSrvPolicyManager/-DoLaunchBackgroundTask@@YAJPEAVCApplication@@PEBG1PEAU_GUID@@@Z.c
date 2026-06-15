/*
 * XREFs of ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z @ 0x1800439CC
 * Callers:
 *     ?TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z @ 0x180044B74 (-TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18000B220 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800158F0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x180017BD0 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180021430 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     memset_0 @ 0x180030A1C (memset_0.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18003D080 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$Make@VCBackgroundSessionCallbacks@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCBackgroundSessionCallbacks@@@12@XZ @ 0x180042E78 (--$Make@VCBackgroundSessionCallbacks@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCBackgroundSessi.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIBackgroundSessionCallbacks@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180043FD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIBackgroundSessi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DoLaunchBackgroundTask(
        struct CApplication *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        struct _GUID *a4)
{
  int v8; // eax
  int v9; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  RPC_STATUS v12; // eax
  HANDLE CurrentThread; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  struct TSSession *v16; // rbx
  _QWORD *v17; // rdi
  int v18; // eax
  int v19; // esi
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct TSSession *v23; // rcx
  int v24; // eax
  int v25; // eax
  void *TokenHandle; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v28; // [rsp+78h] [rbp-88h] BYREF
  struct TSSession *v29; // [rsp+80h] [rbp-80h] BYREF
  ULONG ReturnLength; // [rsp+88h] [rbp-78h] BYREF
  struct _RTL_CRITICAL_SECTION *v31[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD TokenInformation[12]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  CWindowsPolicyManager::Lock((__int64)a1, v31);
  v29 = 0LL;
  v8 = TsSessionFromSessionId(*((_DWORD *)a1 + 53), 0, &v29);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 466LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)v10);
    goto LABEL_31;
  }
  memset_0(TokenInformation, 0, 0x58uLL);
  v12 = RpcImpersonateClient(0LL);
  v9 = v12;
  if ( !v12 || v12 == 1725 )
  {
    TokenHandle = 0LL;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &TokenHandle,
      0LL);
    CurrentThread = GetCurrentThread();
    v14 = NtOpenThreadToken(CurrentThread, 8u, 1u, &TokenHandle);
    if ( v14 >= 0 )
    {
      ReturnLength = 0;
      v14 = NtQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, &ReturnLength);
      if ( v14 >= 0 )
      {
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
        RpcRevertToSelf();
        v16 = v29;
        v17 = (_QWORD *)((char *)v29 + 1048);
        if ( !*((_QWORD *)v29 + 131) )
        {
          *v17 = 0LL;
          v18 = CreateOnDemandBrokerClient(L"AudioSrv", v17);
          v19 = v18;
          if ( v18 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1EF,
              (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
              (const char *)(unsigned int)v18);
            v9 = v19;
            goto LABEL_31;
          }
        }
        if ( *((_QWORD *)v16 + 132) )
          goto LABEL_26;
        v20 = Microsoft::WRL::Details::Make<CBackgroundSessionCallbacks,>(&v29);
        v21 = *v20;
        *v20 = 0LL;
        v22 = *((_QWORD *)v16 + 132);
        *((_QWORD *)v16 + 132) = v21;
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        v23 = v29;
        if ( v29 )
        {
          v29 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IBackgroundSessionCallbacks>::Release(v23);
        }
        if ( *((_QWORD *)v16 + 132) )
        {
LABEL_26:
          v28 = 0;
          v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, unsigned int *))(*(_QWORD *)*v17 + 24LL))(
                  *v17,
                  TokenInformation[0],
                  702LL,
                  *((_QWORD *)v16 + 132),
                  &v28);
          v9 = v24;
          if ( v24 >= 0 )
          {
            v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, const unsigned __int16 *, const unsigned __int16 *, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, struct _GUID *))(*(_QWORD *)*v17 + 56LL))(
                    *v17,
                    TokenInformation[0],
                    0LL,
                    v28,
                    a2,
                    a3,
                    0LL,
                    0LL,
                    0,
                    0LL,
                    0LL,
                    a4);
            v9 = v25;
            if ( v25 >= 0 )
            {
              v9 = 0;
              goto LABEL_31;
            }
            v10 = (unsigned int)v25;
            v11 = 522LL;
          }
          else
          {
            v10 = (unsigned int)v24;
            v11 = 509LL;
          }
          goto LABEL_10;
        }
        v9 = -2147024882;
        v11 = 502LL;
        goto LABEL_9;
      }
      v15 = 490LL;
    }
    else
    {
      v15 = 486LL;
    }
    v9 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)v15,
           (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
           (const char *)(unsigned int)v14);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
    RpcRevertToSelf();
    goto LABEL_31;
  }
  if ( v12 > 0 )
    v9 = (unsigned __int16)v12 | 0x80070000;
  if ( v9 < 0 )
  {
    v11 = 481LL;
LABEL_9:
    v10 = (unsigned int)v9;
    goto LABEL_10;
  }
LABEL_31:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v31);
  return (unsigned int)v9;
}
