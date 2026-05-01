/*
 * XREFs of ?IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z @ 0x1805E6F50
 * Callers:
 *     ?IsItemPinned@?$produce@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@3456@@impl@winrt@@UEAAHPEAX0PEA_N@Z @ 0x1805E6EF0 (-IsItemPinned@-$produce@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@34.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1801909B8 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180283114 (--1-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uer.c)
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180284C28 (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180288564 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028D400 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?TryGetAppsFolderItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x18028D46C (-TryGetAppsFolderItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@.c)
 *     ?GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@AEBUhstring@6@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x18028F740 (-GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$tuple@V-$.c)
 *     ??1?$out_param_t@V?$unique_ptr@$$CFAU_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802B976C (--1-$out_param_t@V-$unique_ptr@$$CFAU_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x1802B97A0 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     ?CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z @ 0x1802BB578 (-CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z.c)
 *     ??1?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAA@XZ @ 0x1802C32A0 (--1-$tuple@V-$shared_ptr@VPinRequestContext@@@std@@V-$unique_any_t@V-$unique_storage@U-$handle_n.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??1PinManagerIsItemPinned@PinManagerTelemetry@@QEAA@XZ @ 0x1805E3810 (--1PinManagerIsItemPinned@PinManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXXZ @ 0x1805E94D0 (-StartActivity@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXXZ.c)
 *     ?Stop@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXPEBG_N@Z @ 0x1805E9B18 (-Stop@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXPEBG_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
bool __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::IsItemPinned(
        winrt::Windows::Internal::Shell::implementation::PinManager *this,
        const struct winrt::hstring *a2,
        const struct winrt::hstring *a3)
{
  bool v6; // r14
  IUnknown *v7; // rdi
  HRESULT v8; // eax
  int Instance; // eax
  struct CPinnedList *v10; // rbx
  const unsigned __int16 **v11; // rax
  int v13; // [rsp+20h] [rbp-E0h]
  struct CPinnedList *v14[2]; // [rsp+30h] [rbp-D0h] BYREF
  IUnknown *punk; // [rsp+40h] [rbp-C0h] BYREF
  int v16[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v17; // [rsp+50h] [rbp-B0h] BYREF
  char v18; // [rsp+60h] [rbp-A0h]
  HANDLE v19; // [rsp+68h] [rbp-98h] BYREF
  __int64 v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+80h] [rbp-80h] BYREF
  __int128 v22; // [rsp+90h] [rbp-70h] BYREF
  volatile signed __int32 *v23[42]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  memset_0(v23, 0, 0x148uLL);
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v23,
    (__int64)"PinManagerIsItemPinned");
  v23[0] = (volatile signed __int32 *)&PinManagerTelemetry::PinManagerIsItemPinned::`vftable';
  PinManagerTelemetry::PinManagerIsItemPinned::StartActivity((PinManagerTelemetry::PinManagerIsItemPinned *)v23);
  *(_QWORD *)v16 = 0LL;
  winrt::Windows::Internal::Shell::implementation::PinManager::GetPinRequestContext(
    (__int64)this,
    &v19,
    (__int64 *)a2,
    0,
    (__int64)v16);
  v6 = 0;
  v22 = *(_OWORD *)winrt::hstring::operator std::basic_string_view<unsigned short>((__int64 *)a3, &v21);
  *(_OWORD *)v14 = *PinRequestContext::RequestorBestAvailableAppId(v20, &v17);
  TryGetAppsFolderItem(&punk, v14, (__int64)&v22);
  v7 = punk;
  if ( punk )
  {
    *(_QWORD *)&v22 = 0LL;
    *(_QWORD *)&v17 = &v22;
    *((_QWORD *)&v17 + 1) = 0LL;
    v18 = 1;
    v8 = SHGetIDListFromObject(punk, (LPITEMIDLIST *)&v17 + 1);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2FD,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v8,
        v13);
    wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v17);
    v14[0] = 0LL;
    Instance = CTaskbandPin_CreateInstance(v14);
    if ( Instance < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x300,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)Instance,
        v13);
    v10 = v14[0];
    v6 = (*(unsigned int (__fastcall **)(char *, _QWORD))(*((_QWORD *)v14[0] + 2) + 72LL))((char *)v14[0] + 16, v22) == 0;
    if ( v10 )
      winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)v14);
    wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v22,
      0LL);
  }
  if ( v7 )
    winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&punk);
  v11 = (const unsigned __int16 **)PinRequestContext::RequestorBestAvailableAppId(v20, &v17);
  PinManagerTelemetry::PinManagerIsItemPinned::Stop((PinManagerTelemetry::PinManagerIsItemPinned *)v23, *v11, v6);
  std::tuple<std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::~tuple<std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>((__int64)&v19);
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>((void **)v16);
  PinManagerTelemetry::PinManagerIsItemPinned::~PinManagerIsItemPinned(v23);
  return v6;
}
