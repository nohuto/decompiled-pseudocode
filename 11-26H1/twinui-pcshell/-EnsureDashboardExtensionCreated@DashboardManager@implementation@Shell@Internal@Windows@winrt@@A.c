/*
 * XREFs of ?EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUDashboardExtension@Dashboard@3UI@WindowsUdk@6@AEAUguid@6@@Z @ 0x1805CF760
 * Callers:
 *     _lambda_684357928b11216b6941a1297d217b63_::operator() @ 0x1805CCB58 (_lambda_684357928b11216b6941a1297d217b63_--operator().c)
 *     _lambda_a05c3887e986835b884f6c40c22d2f9d_::operator() @ 0x1805CD5C4 (_lambda_a05c3887e986835b884f6c40c22d2f9d_--operator().c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180025E74 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CoCreateInstance@UIClassFactory@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIClassFactory@@Uerr_exception_policy@wil@@@0@AEBU_GUID@@K@Z @ 0x1801F4534 (--$CoCreateInstance@UIClassFactory@@Uerr_exception_policy@wil@@@wil@@YA-AV-$com_ptr_t@UIClassFac.c)
 *     ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x18026D69C (-IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NX.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18027FD74 (--1-$test_data_control@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18027FDAC (--1-$test_watcher@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18027FDD4 (--1-$com_ptr_t@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode.c)
 *     ??0?$test_watcher@V?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@@tip2@@IEAA@AEAV?$com_ptr_t@V?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18027FE84 (--0-$test_watcher@V-$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windo.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18027FED8 (-ensure_data@-$tip_test@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@.c)
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@AEAPEAU_GUID@@@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@AEAPEAU_GUID@@@Z @ 0x1802800F0 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@AEA.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802816D8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802BFAC0 (--4-$com_ptr_t@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::EnsureDashboardExtensionCreated(
        __int64 a1,
        __int64 *a2,
        __int128 *a3)
{
  volatile signed __int32 **v5; // rax
  __int64 *v6; // rax
  char IsDashboardExtensionPresent; // di
  volatile signed __int32 *v8; // rbx
  __int64 *v9; // rax
  char v10; // di
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  bool v13; // zf
  char v14; // bl
  int v15; // eax
  int v16; // eax
  __int64 *v17; // rdi
  char v18; // si
  volatile signed __int32 *v19; // rbx
  int v21; // [rsp+20h] [rbp-59h]
  LPVOID v22; // [rsp+30h] [rbp-49h] BYREF
  int v23; // [rsp+38h] [rbp-41h]
  volatile signed __int32 *v24; // [rsp+40h] [rbp-39h] BYREF
  __int128 v25; // [rsp+50h] [rbp-29h] BYREF
  int v26; // [rsp+60h] [rbp-19h] BYREF
  __int128 v27; // [rsp+68h] [rbp-11h]
  _BYTE v28[48]; // [rsp+78h] [rbp-1h] BYREF
  volatile signed __int32 *v29; // [rsp+A8h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  volatile signed __int32 *v31; // [rsp+E0h] [rbp+67h] BYREF
  __int128 *v32; // [rsp+F0h] [rbp+77h] BYREF
  volatile signed __int32 *v33; // [rsp+F8h] [rbp+7Fh] BYREF

  v23 = 0;
  v31 = 0LL;
  v25 = *a3;
  v32 = &v25;
  v5 = (volatile signed __int32 **)tip2::details::tip_make_shared_nothrow<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>,_GUID * &>(
                                     &v33,
                                     &v32);
  wil::com_ptr_t<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>,wil::err_returncode_policy>::operator=(
    &v31,
    v5);
  wil::com_ptr_t<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>,wil::err_returncode_policy>((void **)&v33);
  v6 = tip2::tip_test<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>::ensure_data(&v31);
  tip2::test_watcher<tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>>::test_watcher<tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>>(
    (struct wil::details::IFailureCallback *)v28,
    v6);
  wil::com_ptr_t<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>,wil::err_returncode_policy>((void **)&v31);
  IsDashboardExtensionPresent = winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardExtensionPresent();
  v8 = v29;
  v31 = v29;
  if ( v29 )
    _InterlockedIncrement(v29 + 78);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)(v8 + 2));
  *((_BYTE *)v8 + 273) = IsDashboardExtensionPresent;
  tip2::test_data_control<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>::~test_data_control<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>((__int64 *)&v31);
  wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v25, (RTL_SRWLOCK *)(a1 + 128));
  if ( *(_BYTE *)(a1 + 312) )
  {
    v9 = (__int64 *)&v32;
    v10 = 1;
    v11 = 0LL;
  }
  else
  {
    v11 = *(volatile signed __int32 **)(a1 + 136);
    v31 = v11;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v31);
    v9 = (__int64 *)&v31;
    v10 = 2;
  }
  *v9 = 0LL;
  v24 = v11;
  if ( (v10 & 2) != 0 )
  {
    v10 &= ~2u;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v31);
  }
  if ( (v10 & 1) != 0 )
  {
    v10 &= ~1u;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v32);
  }
  if ( v11 )
    goto LABEL_14;
  v12 = v29;
  v31 = v29;
  if ( v29 )
    _InterlockedIncrement(v29 + 78);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)(v12 + 2));
  v10 |= 4u;
  v13 = *((_BYTE *)v12 + 273) == 0;
  v14 = 1;
  if ( v13 )
LABEL_14:
    v14 = 0;
  if ( (v10 & 4) != 0 )
    tip2::test_data_control<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>::~test_data_control<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>((__int64 *)&v31);
  if ( v14 )
  {
    wil::CoCreateInstance<IClassFactory,wil::err_exception_policy>(&v22);
    v32 = 0LL;
    v15 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, GUID *, __int128 **))(*(_QWORD *)v22 + 24LL))(
            v22,
            0LL,
            &GUID_00000000_0000_0000_c000_000000000046,
            &v32);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x744,
        (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)(unsigned int)v15,
        v21);
    if ( v32 )
    {
      v33 = 0LL;
      v26 = 0;
      v27 = 0LL;
      v16 = (**(__int64 (__fastcall ***)(__int128 *, void *, void **))v32)(
              v32,
              &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension>,
              (void **)&v33);
      winrt::check_hresult((int *)&v31, v16, (__int64)&v26);
      v31 = v33;
    }
    else
    {
      v31 = 0LL;
    }
    v17 = (__int64 *)(a1 + 136);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(a1 + 136), (__int64 *)&v31);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v31);
    *(_BYTE *)(a1 + 312) = 0;
    if ( v32 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v32);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
  }
  else
  {
    v17 = (__int64 *)(a1 + 136);
  }
  v31 = 0LL;
  v18 = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v17, &v31);
  v19 = v29;
  v31 = v29;
  if ( v29 )
    _InterlockedIncrement(v29 + 78);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)(v19 + 2));
  *((_BYTE *)v19 + 272) = v18;
  tip2::test_data_control<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>::~test_data_control<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>((__int64 *)&v31);
  *a2 = *v17;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v24);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v25);
  tip2::test_watcher<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>::~test_watcher<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>((__int64)v28);
  return a2;
}
