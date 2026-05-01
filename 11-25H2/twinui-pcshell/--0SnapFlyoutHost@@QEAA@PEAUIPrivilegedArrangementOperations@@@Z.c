/*
 * XREFs of ??0SnapFlyoutHost@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z @ 0x18029E448
 * Callers:
 *     ?InitializeSnapFlyoutHost@CShellSnapComponent@@AEAAJXZ @ 0x18029E310 (-InitializeSnapFlyoutHost@CShellSnapComponent@@AEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800A8318 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800F7124 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     _lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_ @ 0x1800FB4BC (_lambda_00799cc444f9312ab8cc556666836ecb_--__lambda_00799cc444f9312ab8cc556666836ecb_.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18024210C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     ??0WindowDragInputProvider@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z @ 0x180273518 (--0WindowDragInputProvider@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1802C0B94 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandl_ea_1802C0B94.c)
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x1802CEE8C (--0bad_alloc@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?add_agile@?$event@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@2@@Z @ 0x1803C5538 (-add_agile@-$event@U-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foun.c)
 *     ??$make_agile_delegate@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@1@AEBU2341@@Z @ 0x18059B498 (--$make_agile_delegate@U-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=18
SnapFlyoutHost *__fastcall SnapFlyoutHost::SnapFlyoutHost(
        SnapFlyoutHost *this,
        struct IPrivilegedArrangementOperations *a2)
{
  WindowDragInputProvider **v4; // r14
  _QWORD *v5; // rbx
  size_t size_of; // rax
  _QWORD *v7; // rax
  WindowDragInputProvider *v8; // rbx
  WindowDragInputProvider *v9; // rbx
  __int64 weak_ref; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v16; // [rsp+30h] [rbp-49h] BYREF
  __int64 v17; // [rsp+38h] [rbp-41h] BYREF
  WindowDragInputProvider *v18; // [rsp+40h] [rbp-39h] BYREF
  __int64 v19; // [rsp+48h] [rbp-31h] BYREF
  char v20[8]; // [rsp+50h] [rbp-29h] BYREF
  char v21[8]; // [rsp+58h] [rbp-21h] BYREF
  char v22[8]; // [rsp+60h] [rbp-19h] BYREF
  int v23; // [rsp+68h] [rbp-11h] BYREF
  __int128 v24; // [rsp+70h] [rbp-9h]
  _BYTE pExceptionObject[80]; // [rsp+80h] [rbp+7h] BYREF
  _DWORD *v26; // [rsp+F0h] [rbp+77h]
  _DWORD *v27; // [rsp+F8h] [rbp+7Fh] BYREF

  *((_QWORD *)this + 2) = &winrt::impl::produce_base<SnapMigrationHandler,winrt::Windows::Foundation::IInspectable,void>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<SnapFlyoutHost>::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  v4 = (WindowDragInputProvider **)((char *)this + 112);
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  v5 = (_QWORD *)((char *)this + 144);
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  size_of = std::_Get_size_of_n<48>(1uLL);
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v7 = v7;
  v7[1] = v7;
  v7[2] = v7;
  *((_WORD *)v7 + 12) = 257;
  *v5 = v7;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 22) = 0LL;
  _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil__QEAAXW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
    (char *)this + 80,
    0LL);
  v8 = (WindowDragInputProvider *)operator new(0x68uLL);
  WindowDragInputProvider::WindowDragInputProvider(v8, a2);
  *(_QWORD *)v8 = &WindowDragInputProvider::`vftable';
  v18 = v8;
  if ( v4 == &v18 )
  {
    if ( v8 )
      winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)&v18);
  }
  else
  {
    if ( *v4 )
      winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)v4);
    *v4 = v8;
  }
  v9 = *v4;
  weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref((volatile signed __int64 *)this);
  if ( !weak_ref )
  {
    std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
    throw (std::bad_alloc *)pExceptionObject;
  }
  v19 = weak_ref;
  v17 = 0LL;
  v23 = 0;
  v24 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)weak_ref + 24LL))(weak_ref, &v17);
  winrt::check_hresult(v20, v11, &v23);
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v19);
  v12 = v17;
  v17 = 0LL;
  v16 = v12;
  v26 = operator new(0x18uLL);
  v26[2] = 1;
  v13 = v16;
  v16 = 0LL;
  *((_QWORD *)v26 + 2) = v13;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v26 = off_18072E610;
  v27 = v26;
  lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_(&v16);
  v14 = winrt::impl::make_agile_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>(
          v21,
          &v27);
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>::add_agile(
    (char *)v9 + 64,
    v22,
    v14);
  if ( v27 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v27);
  if ( v17 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v17);
  return this;
}
