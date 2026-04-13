/*
 * XREFs of ?IsMsaConnected@Actions@CreativeFramework@@YA_NXZ @ 0x180093CBC
 * Callers:
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x1800932F0 (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 * Callees:
 *     memcmp_0 @ 0x180021E99 (memcmp_0.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023724 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UIInspectable@@@wil@@YA?AV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18009249C (--$GetActivationFactory@UIInspectable@@@wil@@YA-AV-$com_ptr_t@UIInspectable@@Uerr_exception_poli.c)
 *     ??$GetActivationFactory@UIWebAuthenticationCoreManagerStatics@Core@Web@Authentication@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UIWebAuthenticationCoreManagerStatics@Core@Web@Authentication@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180092548 (--$GetActivationFactory@UIWebAuthenticationCoreManagerStatics@Core@Web@Authentication@Security@W.c)
 *     ??$query@UITokenBrokerInternalStatics@Web@Authentication@Security@Internal@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITokenBrokerInternalStatics@Web@Authentication@Security@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180092E54 (--$query@UITokenBrokerInternalStatics@Web@Authentication@Security@Internal@Windows@@@-$com_ptr_t.c)
 *     ??$wait_for_completion@PEAVGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@V?$ComPtr@UIGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x180092EAC (--$wait_for_completion@PEAVGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Wi.c)
 *     ??$wait_for_completion@PEAVWebAccountProvider@Credentials@Security@Windows@@V?$ComPtr@UIWebAccountProvider@Credentials@Security@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIWebAccountProvider@Credentials@Security@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x180092F2C (--$wait_for_completion@PEAVWebAccountProvider@Credentials@Security@Windows@@V-$ComPtr@UIWebAccou.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=17 #try_helpers=1
bool __fastcall CreativeFramework::Actions::IsMsaConnected(
        CreativeFramework::Actions *this,
        __int64 a2,
        unsigned int a3)
{
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, PVOID, PVOID, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rsi
  unsigned int v5; // r8d
  PVOID Reserved1; // rdi
  unsigned int v7; // r8d
  HSTRING_HEADER *v8; // rax
  int v9; // eax
  int v10; // r8d
  const WCHAR *v11; // rbx
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  int v15; // r8d
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  bool v21; // bl
  int v23; // [rsp+20h] [rbp-A8h]
  const WCHAR *v24; // [rsp+30h] [rbp-98h] BYREF
  const WCHAR *v25; // [rsp+38h] [rbp-90h] BYREF
  __int64 *v26; // [rsp+40h] [rbp-88h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-80h] BYREF
  __int64 *v28; // [rsp+50h] [rbp-78h] BYREF
  __int64 (__fastcall ***v29)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-70h] BYREF
  const WCHAR *v30; // [rsp+60h] [rbp-68h] BYREF
  __int64 (__fastcall ***v31)(_QWORD, GUID *, _QWORD *); // [rsp+68h] [rbp-60h] BYREF
  __int64 v32; // [rsp+70h] [rbp-58h] BYREF
  HSTRING_HEADER Buf2; // [rsp+78h] [rbp-50h] BYREF
  HSTRING_HEADER Buf1; // [rsp+98h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v25 = L"https://login.microsoft.com";
  v30 = L"consumers";
  wil::GetActivationFactory<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>(
    (const WCHAR *)&v32,
    a2,
    a3);
  v29 = 0LL;
  v3 = v32;
  v4 = *(__int64 (__fastcall **)(__int64, PVOID, PVOID, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v32 + 96LL);
  v29 = 0LL;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&Buf1, &v30, v5)[1].Reserved.Reserved1;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&Buf2, &v25, v7);
  v9 = v4(v3, v8[1].Reserved.Reserved1, Reserved1, &v29);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      55LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v9,
      v23);
  wil::wait_for_completion<Windows::Security::Credentials::WebAccountProvider *,Microsoft::WRL::ComPtr<Windows::Security::Credentials::IWebAccountProvider>>(
    &v24,
    v29,
    v10);
  v11 = v24;
  v24 = 0LL;
  v30 = v11;
  if ( !v11 )
    goto LABEL_19;
  wil::GetActivationFactory<IInspectable>((WCHAR *)&v31);
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Internal::Security::Authentication::Web::ITokenBrokerInternalStatics>(
    &v31,
    &v28);
  *(GUID *)&Buf1.Reserved.Reserved1 = GUID_00000000_0000_0000_0000_000000000000;
  v12 = (*(__int64 (__fastcall **)(__int64 *, const WCHAR *, HSTRING_HEADER *))(*v28 + 264))(v28, v11, &Buf1);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      65LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v12,
      v23);
  v27 = 0LL;
  v13 = *v28;
  v27 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v13 + 232))(
          v28,
          &v27);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      69LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v14,
      v23);
  wil::wait_for_completion<Windows::Internal::Security::Authentication::Web::GetDefaultSignInAccountResult *,Microsoft::WRL::ComPtr<Windows::Internal::Security::Authentication::Web::IGetDefaultSignInAccountResult>>(
    &v25,
    v27,
    v15);
  v26 = 0LL;
  v16 = *(_QWORD *)v25;
  v26 = 0LL;
  v17 = (*(__int64 (__fastcall **)(const WCHAR *, __int64 **))(v16 + 48))(v25, &v26);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      72LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v17,
      v23);
  if ( !v26 )
  {
LABEL_18:
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v26);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v25);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v27);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v28);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v31);
LABEL_19:
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v30);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v29);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v32);
    return 0;
  }
  v24 = 0LL;
  v18 = *v26;
  v24 = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64 *, const WCHAR **))(v18 + 48))(v26, &v24);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      76LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v19,
      v23);
  if ( !v24 )
  {
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v24);
    goto LABEL_18;
  }
  *(GUID *)&Buf2.Reserved.Reserved1 = GUID_00000000_0000_0000_0000_000000000000;
  v20 = (*(__int64 (__fastcall **)(__int64 *, const WCHAR *, HSTRING_HEADER *))(*v28 + 264))(v28, v24, &Buf2);
  if ( v20 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      81LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v20,
      v23);
  v21 = memcmp_0(&Buf1, &Buf2, 0x10uLL) == 0;
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v24);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v26);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v25);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v27);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v28);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v31);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v30);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v29);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v32);
  return v21;
}
