/*
 * XREFs of ?EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUDashboardExtension@Dashboard@3UI@WindowsUdk@6@AEAUguid@6@@Z @ 0x1805AB544
 * Callers:
 *     _lambda_706d5b32740c4da4e698be21c17b442a_::operator() @ 0x1805A8AD8 (_lambda_706d5b32740c4da4e698be21c17b442a_--operator().c)
 *     _lambda_a5f5a1685009109eb237b395fe0f8e38_::operator() @ 0x1805A935C (_lambda_a5f5a1685009109eb237b395fe0f8e38_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180065DB4 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$CoCreateInstance@UIClassFactory@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIClassFactory@@Uerr_exception_policy@wil@@@0@AEBU_GUID@@K@Z @ 0x1801FF12C (--$CoCreateInstance@UIClassFactory@@Uerr_exception_policy@wil@@@wil@@YA-AV-$com_ptr_t@UIClassFac.c)
 *     ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x1802756A8 (-IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NX.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028C87C (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028D458 (--1-$test_watcher@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802AEE5C (--1-$test_data_control@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PU_GUID@@@Z @ 0x1805A1EB0 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::EnsureDashboardExtensionCreated(
        __int64 a1,
        __int64 *a2,
        __int128 *a3)
{
  bool IsDashboardExtensionPresent; // di
  volatile signed __int32 *v6; // rbx
  __int64 *v7; // rax
  char v8; // di
  __int64 v9; // rbx
  volatile signed __int32 *v10; // rbx
  char v11; // bl
  int v12; // eax
  int v13; // eax
  __int64 *v14; // rdi
  char v15; // si
  volatile signed __int32 *v16; // rbx
  int v18; // [rsp+20h] [rbp-99h]
  __int64 v19; // [rsp+30h] [rbp-89h] BYREF
  __int64 v20; // [rsp+38h] [rbp-81h] BYREF
  LPVOID v21; // [rsp+40h] [rbp-79h] BYREF
  int v22; // [rsp+48h] [rbp-71h]
  volatile signed __int32 *v23; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v24[8]; // [rsp+58h] [rbp-61h] BYREF
  volatile signed __int32 *v25; // [rsp+60h] [rbp-59h] BYREF
  __int64 v26; // [rsp+68h] [rbp-51h] BYREF
  volatile signed __int32 *v27; // [rsp+70h] [rbp-49h] BYREF
  __int64 v28; // [rsp+78h] [rbp-41h] BYREF
  RTL_SRWLOCK *v29[2]; // [rsp+80h] [rbp-39h] BYREF
  __int128 v30; // [rsp+90h] [rbp-29h] BYREF
  int v31; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v32; // [rsp+A8h] [rbp-11h]
  _BYTE v33[48]; // [rsp+B8h] [rbp-1h] BYREF
  volatile signed __int32 *v34; // [rsp+E8h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]
  int v36; // [rsp+120h] [rbp+67h] BYREF
  __int64 (__fastcall ***v37)(_QWORD, void *, __int64 *); // [rsp+130h] [rbp+77h] BYREF
  __int64 v38; // [rsp+138h] [rbp+7Fh] BYREF

  v22 = 0;
  v30 = *a3;
  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>>(
    (struct wil::details::IFailureCallback *)v33,
    &v30);
  IsDashboardExtensionPresent = winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardExtensionPresent();
  v6 = v34;
  v23 = v34;
  if ( v34 )
    _InterlockedIncrement(v34 + 76);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)(v6 + 2));
  *((_BYTE *)v6 + 265) = IsDashboardExtensionPresent;
  tip2::test_data_control<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>::~test_data_control<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>((void **)&v23);
  wil::AcquireSRWLockExclusive(v29, (RTL_SRWLOCK *)(a1 + 128));
  if ( *(_BYTE *)(a1 + 264) )
  {
    v7 = (__int64 *)v24;
    v8 = 1;
    v9 = 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 136);
    v38 = v9;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v38);
    v7 = &v38;
    v8 = 2;
  }
  *v7 = 0LL;
  v28 = v9;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v38);
  }
  if ( (v8 & 1) != 0 )
  {
    v8 &= ~1u;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v24);
  }
  if ( v9 )
    goto LABEL_15;
  v10 = v34;
  v25 = v34;
  if ( v34 )
    _InterlockedIncrement(v34 + 76);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)(v10 + 2));
  v8 |= 4u;
  if ( !*((_BYTE *)v10 + 265) )
LABEL_15:
    v11 = 0;
  else
    v11 = 1;
  if ( (v8 & 4) != 0 )
    tip2::test_data_control<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>::~test_data_control<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>((void **)&v25);
  if ( v11 )
  {
    wil::CoCreateInstance<IClassFactory,wil::err_exception_policy>(&v21);
    v37 = 0LL;
    v12 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*(_QWORD *)v21 + 24LL))(
            v21,
            0LL,
            &GUID_00000000_0000_0000_c000_000000000046,
            &v37);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x729,
        (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)(unsigned int)v12,
        v18);
    if ( v37 )
    {
      v20 = 0LL;
      v31 = 0;
      v32 = 0LL;
      v13 = (**v37)(v37, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension>, &v20);
      winrt::check_hresult(&v36, v13, (__int64)&v31);
      v19 = v20;
    }
    else
    {
      v19 = 0LL;
    }
    v14 = (__int64 *)(a1 + 136);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(a1 + 136), &v19);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
    *(_BYTE *)(a1 + 264) = 0;
    if ( v37 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v37);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
  }
  else
  {
    v14 = (__int64 *)(a1 + 136);
  }
  v26 = 0LL;
  v15 = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v14, &v26);
  v16 = v34;
  v27 = v34;
  if ( v34 )
    _InterlockedIncrement(v34 + 76);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)(v16 + 2));
  *((_BYTE *)v16 + 264) = v15;
  tip2::test_data_control<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>::~test_data_control<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>((void **)&v27);
  *a2 = *v14;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v28);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v29);
  tip2::test_watcher<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>::~test_watcher<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>((__int64)v33);
  return a2;
}
