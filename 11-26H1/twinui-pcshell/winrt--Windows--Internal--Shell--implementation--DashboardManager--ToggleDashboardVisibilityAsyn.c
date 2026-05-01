/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1 @ 0x1805D81C0
 * Callers:
 *     ?ToggleDashboardVisibilityAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@Uguid@6@W4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x1805D8660 (-ToggleDashboardVisibilityAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AE.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1800276AC (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800CC1A4 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?TryUpdatePrelaunchSettings@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801FE0A4 (-TryUpdatePrelaunchSettings@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 *     ?CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEAV?$function@$$A6AXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z@std@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@8@@Z @ 0x1801FE150 (-CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEA.c)
 *     ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x18026D69C (-IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NX.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802816D8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028BFAC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1805CA914 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@detai.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CC294 (--1-$test_data_control@V-$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@@tip2@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CC354 (--1-$test_watcher@V-$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ?GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@6@XZ @ 0x1805D2064 (-GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUA.c)
 *     ?GetDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUDashboardExtension@Dashboard@3UI@WindowsUdk@6@XZ @ 0x1805D2184 (-GetDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUDash.c)
 *     _anonymous_namespace_::TryGetDashboardPackageName_0 @ 0x1805D8AF4 (_anonymous_namespace_--TryGetDashboardPackageName_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ @ 0x1805DA9EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash@@@details@wil@@QEAA_NXZ @ 0x1805DAE00 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExte.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync__ResumeCoro_1(
        char *a1)
{
  __int64 v2; // rcx
  void *v3; // r8
  __int64 *v4; // rcx
  char *v5; // r13
  __int64 *DashboardAppExtension; // rax
  _QWORD *DashboardPackageName_0; // r12
  __int64 v8; // r13
  __int64 v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  int v12; // ebx
  char *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r15
  char v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rbx
  char IsDashboardExtensionPresent; // r12
  __int64 v20; // rcx
  __int64 v21; // rbx
  char IsEnabled; // al
  __int64 v23; // rcx
  __int64 *DashboardExtension; // rax
  __int64 v25; // rcx
  __int64 v26; // rbx
  bool v27; // r12
  __int64 v28; // rcx
  __int64 v29; // rbx
  bool v30; // [rsp+20h] [rbp-128h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_32;
      case 2:
        winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
          *((_QWORD *)a1 + 41),
          (_QWORD *)a1 + 2);
        a1[24] = 0;
        *((_WORD *)a1 + 4) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v2, (void (*)(void *, void *))a1, v3);
        return;
      case 4:
        v5 = a1 + 32;
        tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>>>((struct wil::details::IFailureCallback *)(a1 + 32));
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl) )
        {
          DashboardAppExtension = winrt::Windows::Internal::Shell::implementation::DashboardManager::GetDashboardAppExtension(
                                    *((RTL_SRWLOCK **)a1 + 41),
                                    (__int64 *)a1 + 12);
          DashboardPackageName_0 = (_QWORD *)anonymous_namespace_::TryGetDashboardPackageName_0(
                                               a1 + 104,
                                               (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)DashboardAppExtension);
          v8 = *((_QWORD *)a1 + 10);
          *((_QWORD *)a1 + 11) = v8;
          if ( v8 )
            _InterlockedIncrement((volatile signed __int32 *)(v8 + 312));
          tip2::details::shared_data<1,0,0>::begin_update(v8 + 8);
          std::wstring::operator=((_QWORD *)(v8 + 280), DashboardPackageName_0);
          tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>>((void **)a1 + 11);
          std::wstring::_Tidy_deallocate((_QWORD *)a1 + 13);
          v5 = a1 + 32;
        }
        v9 = *((_QWORD *)a1 + 41);
        *((_QWORD *)a1 + 26) = v9;
        *(_OWORD *)(a1 + 216) = *((_OWORD *)a1 + 21);
        *((_DWORD *)a1 + 58) = *((_DWORD *)v5 + 80);
        *(_OWORD *)(a1 + 236) = *(_OWORD *)(a1 + 356);
        *((_QWORD *)a1 + 18) = off_180759700;
        v10 = *((_OWORD *)a1 + 14);
        v11 = *((_OWORD *)a1 + 15);
        *(_OWORD *)(a1 + 152) = *((_OWORD *)a1 + 13);
        *(_OWORD *)(a1 + 168) = v10;
        *(_OWORD *)(a1 + 184) = v11;
        *((_QWORD *)a1 + 25) = a1 + 144;
        v12 = winrt::Windows::Internal::Shell::implementation::DashboardManager::CallDashboardExtension(
                v9,
                (__int64)(a1 + 144),
                0x1F40u);
        if ( *((_QWORD *)a1 + 25) )
        {
          v13 = (char *)*((_QWORD *)a1 + 25);
          LOBYTE(v13) = v13 != a1 + 144;
          (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)a1 + 25) + 32LL))(*((_QWORD *)a1 + 25), v13);
        }
        v14 = *((_QWORD *)a1 + 10);
        v15 = v14;
        *((_QWORD *)a1 + 32) = v14;
        if ( v14 )
          _InterlockedIncrement((volatile signed __int32 *)(v14 + 312));
        tip2::details::shared_data<1,0,0>::begin_update(v14 + 8);
        *(_DWORD *)(v15 + 276) = v12;
        tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>>((void **)a1 + 32);
        if ( v12 >= 0 || v12 == -2147418110 || (v16 = 1, v12 == -2147023728) )
          v16 = 0;
        v17 = *((_QWORD *)a1 + 10);
        v18 = v17;
        *((_QWORD *)a1 + 33) = v17;
        if ( v17 )
          _InterlockedIncrement((volatile signed __int32 *)(v17 + 312));
        tip2::details::shared_data<1,0,0>::begin_update(v17 + 8);
        *(_BYTE *)(v18 + 274) = v16;
        tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>>((void **)a1 + 33);
        IsDashboardExtensionPresent = winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardExtensionPresent();
        v20 = *((_QWORD *)a1 + 10);
        v21 = v20;
        *((_QWORD *)a1 + 34) = v20;
        if ( v20 )
          _InterlockedIncrement((volatile signed __int32 *)(v20 + 312));
        tip2::details::shared_data<1,0,0>::begin_update(v20 + 8);
        *(_BYTE *)(v21 + 273) = IsDashboardExtensionPresent;
        tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>>((void **)a1 + 34);
        IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash>::GetImpl'::`2'::impl);
        v23 = *((_QWORD *)a1 + 41);
        if ( IsEnabled )
        {
          *((_QWORD *)a1 + 36) = 0LL;
          DashboardExtension = winrt::Windows::Internal::Shell::implementation::DashboardManager::GetDashboardExtension(
                                 (RTL_SRWLOCK *)v23,
                                 (__int64 *)a1 + 37);
          v30 = winrt::Windows::Foundation::operator!=(
                  (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))DashboardExtension,
                  (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a1 + 36);
          v25 = *((_QWORD *)a1 + 10);
          v26 = v25;
          *((_QWORD *)a1 + 35) = v25;
          if ( v25 )
            _InterlockedIncrement((volatile signed __int32 *)(v25 + 312));
          tip2::details::shared_data<1,0,0>::begin_update(v25 + 8);
          *(_BYTE *)(v26 + 272) = v30;
          tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>>((void **)a1 + 35);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 296));
        }
        else
        {
          *((_QWORD *)a1 + 39) = 0LL;
          v27 = winrt::Windows::Foundation::operator!=(
                  (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(v23 + 136),
                  (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a1 + 39);
          v28 = *((_QWORD *)a1 + 10);
          v29 = v28;
          *((_QWORD *)a1 + 38) = v28;
          if ( v28 )
            _InterlockedIncrement((volatile signed __int32 *)(v28 + 312));
          tip2::details::shared_data<1,0,0>::begin_update(v28 + 8);
          *(_BYTE *)(v29 + 272) = v27;
          tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>>((void **)a1 + 38);
        }
        tip2::details::shared_data<1,0,0>::complete_without_lock(*((_QWORD *)a1 + 10) + 8LL);
        winrt::Windows::Internal::Shell::implementation::DashboardManager::TryUpdatePrelaunchSettings(*((winrt::Windows::Internal::Shell::implementation::DashboardManager **)a1 + 41));
        tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>>::~test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>>((__int64)v5);
        if ( *((_QWORD *)a1 + 2) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a1 + 2);
        goto LABEL_32;
      case 5:
        v4 = (__int64 *)(a1 + 16);
        if ( *((_QWORD *)a1 + 2) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v4);
LABEL_32:
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1, (const struct std::nothrow_t *)0x180);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
