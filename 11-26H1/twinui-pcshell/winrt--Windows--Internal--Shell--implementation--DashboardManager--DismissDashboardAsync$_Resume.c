/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_ResumeCoro$1 @ 0x1805CEF40
 * Callers:
 *     ?DismissDashboardAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@UDismissShellViewRequestedEventArgs@3UI@WindowsUdk@6@@Z @ 0x1805CF6B4 (-DismissDashboardAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1800276AC (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ?GetView@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@XZ @ 0x1800286C8 (-GetView@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt@.c)
 *     ?Clipboard@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A624 (-Clipboard@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800CC128 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?IsDashboardVisible@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1800CD0A4 (-IsDashboardVisible@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_ @ 0x1801C9850 (std--_Optional_destruct_base__anonymous_namespace_--DashboardExtensionVersion_0_--__Optional_des.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion @ 0x1801C986C (_anonymous_namespace_--DashboardExtensionVersion--_DashboardExtensionVersion.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEAV?$function@$$A6AXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z@std@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@8@@Z @ 0x1801FE150 (-CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEA.c)
 *     ?value@?$optional@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@std@@QEGAAAEAW4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@XZ @ 0x180201AC4 (-value@-$optional@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@w.c)
 *     std::optional__anonymous_namespace_::DashboardExtensionVersion_::value @ 0x180208B60 (std--optional__anonymous_namespace_--DashboardExtensionVersion_--value.c)
 *     ?GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@UShellViewAnimationProperties@3UI@WindowsUdk@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18026D23C (-GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@W.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x180279994 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     _anonymous_namespace_::TryGetDashboardPackageName @ 0x180279CBC (_anonymous_namespace_--TryGetDashboardPackageName.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion_0 @ 0x180295C90 (_anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion_0.c)
 *     ??$DashboardInteracted@Uguid@winrt@@IAEA_NPEBGPEBGAEAY0BG@$$CBGAEAPEBG@DashboardManagerTelemetry@@SAX$$QEAUguid@winrt@@$$QEAIAEA_N$$QEAPEBG3AEAY0BG@$$CBGAEAPEBG@Z @ 0x1802C7DA4 (--$DashboardInteracted@Uguid@winrt@@IAEA_NPEBGPEBGAEAY0BG@$$CBGAEAPEBG@DashboardManagerTelemetry.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?AnimationProperties@?$consume_WindowsUdk_UI_Shell_IDismissShellViewOptions2@UDismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1803648F0 (-AnimationProperties@-$consume_WindowsUdk_UI_Shell_IDismissShellViewOptions2@UDismissShellViewOp.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::operator_ @ 0x1805CC5E8 (_anonymous_namespace_--DashboardExtensionVersion--operator_.c)
 *     ?GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@6@XZ @ 0x1805D2064 (-GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUA.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion_0 @ 0x1805D89C0 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion_0.c)
 *     _anonymous_namespace_::TryGetDashboardPackageName_0 @ 0x1805D8AF4 (_anonymous_namespace_--TryGetDashboardPackageName_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ @ 0x1805DA9EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerWidgetBoardPackageNameFix@@@details@wil@@QEAA_NXZ @ 0x1805DAE78 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerWidgetB.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix@@@details@wil@@QEAA_NXZ @ 0x1805DAEB4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookup.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync__ResumeCoro_1(
        char *a1)
{
  char *v1; // rdi
  __int64 v2; // rcx
  void *v3; // r8
  __int64 **v4; // r15
  __int64 **v5; // rax
  winrt::hstring *v6; // rax
  const OLECHAR *v7; // rax
  unsigned int v8; // ebx
  _QWORD *v9; // r14
  _QWORD *v10; // rax
  __int64 **v11; // rax
  volatile signed __int32 **View; // rax
  __int64 v13; // r15
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *DashboardAppExtension; // rax
  _QWORD *DashboardPackageName_0; // rax
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 AvailableDashboardExtensionVersion_0; // rax
  __int64 *v21; // rcx
  const WCHAR *v22; // rax
  const WCHAR **v23; // r13
  _DWORD *v24; // rax
  char *v25; // r15
  winrt::Windows::Internal::Shell::implementation::DashboardManager *v26; // r12
  const char *v27; // r9
  _QWORD *v29; // rcx
  _QWORD *v30; // rcx
  __int128 v31; // xmm1
  __int64 v32; // xmm0_8
  char *v33; // rdx
  int v34; // [rsp+28h] [rbp-210h]
  bool v35; // [rsp+40h] [rbp-1F8h]
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v36; // [rsp+48h] [rbp-1F0h]
  _QWORD *v37; // [rsp+58h] [rbp-1E0h]
  char *v40; // [rsp+68h] [rbp-1D0h]
  _DWORD *v42; // [rsp+70h] [rbp-1C8h]
  _QWORD *v43; // [rsp+78h] [rbp-1C0h]
  winrt::Windows::Internal::Shell::implementation::DashboardManager *v44; // [rsp+80h] [rbp-1B8h]
  _QWORD *v46; // [rsp+98h] [rbp-1A0h]
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+0h]

  try
  {
    v1 = a1;
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_42;
      case 2:
        winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
          *((_QWORD *)a1 + 85),
          (_QWORD *)a1 + 2);
        *((_QWORD *)v1 + 82) = v1 + 16;
        winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Clipboard(
          (__int64 **)v1 + 86,
          (_QWORD *)v1 + 3);
        v1[32] = 0;
        *((_WORD *)v1 + 4) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v2, (void (*)(void *, void *))v1, v3);
        return;
      case 4:
        v42 = a1 + 40;
        *(_OWORD *)(a1 + 40) = 0LL;
        v4 = (__int64 **)(*((_QWORD *)a1 + 82) + 672LL);
        v5 = (__int64 **)winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                           v4,
                           (_QWORD *)a1 + 7);
        v6 = (winrt::hstring *)winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Clipboard(
                                 v5,
                                 (_QWORD *)v1 + 8);
        v7 = winrt::hstring::c_str(v6);
        v8 = (unsigned int)IIDFromString(v7, (LPIID)(v1 + 40)) >> 31;
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v1 + 8);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v1 + 56));
        if ( (_BYTE)v8 )
          CoCreateGuid((GUID *)(v1 + 40));
        v1[76] = 0;
        v9 = v1 + 80;
        *((_OWORD *)v1 + 5) = 0LL;
        *((_QWORD *)v1 + 12) = 0LL;
        v46 = v1 + 104;
        *((_QWORD *)v1 + 13) = 7LL;
        *((_WORD *)v1 + 40) = 0;
        *((_QWORD *)v1 + 15) = v1 + 112;
        v10 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                v4,
                (_QWORD *)v1 + 16);
        v36 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewOptions2<winrt::WindowsUdk::UI::Shell::DismissShellViewOptions>::AnimationProperties(
                                                                                                    (__int64 (__fastcall ****)(_QWORD, void *, _QWORD **))v10,
                                                                                                    (_QWORD *)v1 + 14);
        v11 = (__int64 **)winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                            v4,
                            (_QWORD *)v1 + 18);
        View = (volatile signed __int32 **)winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
                                             v11,
                                             (_QWORD *)v1 + 17);
        v13 = (__int64)(v1 + 72);
        v37 = v1 + 72;
        winrt::Windows::Internal::Shell::implementation::DashboardManager::GetInvokeTypeFromContextAndAnimationProperties(
          v14,
          View,
          v36,
          (const unsigned __int16 **)v1 + 9,
          (_QWORD *)v1 + 10);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v1 + 144));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v1 + 128));
        v15 = v1 + 152;
        *(_OWORD *)(v1 + 152) = 0LL;
        *((_QWORD *)v1 + 21) = 0LL;
        v43 = v1 + 176;
        *((_QWORD *)v1 + 22) = 7LL;
        *((_WORD *)v1 + 76) = 0;
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DashboardManagerWidgetBoardPackageNameFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_DashboardManagerWidgetBoardPackageNameFix>::GetImpl'::`2'::impl)
          && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl) )
        {
          DashboardAppExtension = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::Windows::Internal::Shell::implementation::DashboardManager::GetDashboardAppExtension(*((_QWORD *)v1 + 85), v1 + 184);
          DashboardPackageName_0 = (_QWORD *)anonymous_namespace_::TryGetDashboardPackageName_0(
                                               v1 + 192,
                                               DashboardAppExtension);
          std::wstring::operator=((_QWORD *)v1 + 19, DashboardPackageName_0);
          std::wstring::_Tidy_deallocate((_QWORD *)v1 + 24);
          v13 = (__int64)(v1 + 72);
        }
        else
        {
          anonymous_namespace_::TryGetDashboardPackageName((_QWORD *)v1 + 19);
        }
        v1[280] = 0;
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix>::GetImpl'::`2'::impl) )
        {
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl) )
          {
            v19 = winrt::Windows::Internal::Shell::implementation::DashboardManager::GetDashboardAppExtension(
                    *((_QWORD *)v1 + 85),
                    v1 + 288);
            v18 = (__int64)(v1 + 296);
            AvailableDashboardExtensionVersion_0 = anonymous_namespace_::TryGetAvailableDashboardExtensionVersion_0(
                                                     v1 + 296,
                                                     v19);
            goto LABEL_19;
          }
          v18 = (__int64)(v1 + 360);
        }
        else
        {
          v18 = (__int64)(v1 + 424);
        }
        AvailableDashboardExtensionVersion_0 = anonymous_namespace_::TryGetAvailableDashboardExtensionVersion(v18);
LABEL_19:
        if ( *(_BYTE *)(AvailableDashboardExtensionVersion_0 + 56) )
        {
          v21 = (__int64 *)(v1 + 224);
          if ( v1[280] )
          {
            anonymous_namespace_::DashboardExtensionVersion::operator_(
              v21,
              (__int64 *)AvailableDashboardExtensionVersion_0);
          }
          else
          {
            anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion_0(
              v21,
              (__int64 *)AvailableDashboardExtensionVersion_0);
            v1[280] = 1;
          }
        }
        else if ( v1[280] )
        {
          anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion((__int64 *)v1 + 28);
          v1[280] = 0;
        }
        std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_(v18);
        if ( v1[280] )
        {
          v22 = (const WCHAR *)(std::optional__anonymous_namespace_::DashboardExtensionVersion_::value((__int64)(v1 + 224))
                              + 24);
          if ( *((_QWORD *)v22 + 3) > 7uLL )
            v22 = *(const WCHAR **)v22;
        }
        else
        {
          v22 = &pvData;
        }
        v23 = (const WCHAR **)(v1 + 488);
        *((_QWORD *)v1 + 61) = v22;
        if ( v1[76] )
        {
          v24 = (_DWORD *)std::optional<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>::value(v13);
          try
          {
            v35 = *v24 != 6;
            v25 = v1 + 496;
            v40 = v1 + 496;
            v1[496] = 0;
            v26 = (winrt::Windows::Internal::Shell::implementation::DashboardManager *)*((_QWORD *)v1 + 85);
            v44 = v26;
            v1[496] = winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardVisible(v26);
          }
          catch ( ... )
          {
            wil::details::in1diag3::Log_CaughtException(
              retaddr,
              (void *)0x8DD,
              (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
              v27);
            v26 = v44;
            v23 = (const WCHAR **)(v1 + 488);
            v25 = v40;
            v15 = v1 + 152;
            v9 = v1 + 80;
            v1 = a1;
          }
          v29 = v15;
          if ( *v43 > 7uLL )
            v29 = (_QWORD *)*v15;
          *((_QWORD *)v1 + 63) = v29;
          v30 = v9;
          if ( *v46 > 7uLL )
            v30 = (_QWORD *)*v9;
          *((_QWORD *)v1 + 64) = v30;
          *((_DWORD *)v1 + 130) = *(_DWORD *)std::optional<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>::value((__int64)v37);
          *((_DWORD *)v1 + 132) = *v42;
          *((_WORD *)v1 + 266) = *((_WORD *)v1 + 22);
          *((_WORD *)v1 + 267) = *((_WORD *)v1 + 23);
          v1[536] = v1[48];
          v1[537] = v1[49];
          v1[538] = v1[50];
          v1[539] = v1[51];
          v1[540] = v1[52];
          v1[541] = v1[53];
          v1[542] = v1[54];
          v1[543] = v1[55];
          DashboardManagerTelemetry::DashboardInteracted<winrt::guid,unsigned int,bool &,unsigned short const *,unsigned short const *,unsigned short const (&)[22],unsigned short const * &>(
            (__int128 *)v1 + 33,
            (int *)v1 + 130,
            v25,
            (const WCHAR **)v1 + 64,
            (const WCHAR **)v1 + 63,
            v34,
            v23);
          *((_QWORD *)v1 + 76) = v26;
          *(_OWORD *)(v1 + 616) = *(_OWORD *)v42;
          *((_QWORD *)v1 + 79) = *v37;
          v1[640] = v35;
          *((_QWORD *)v1 + 68) = off_180759610;
          v31 = *((_OWORD *)v1 + 39);
          v32 = *((_QWORD *)v1 + 80);
          *(_OWORD *)(v1 + 552) = *((_OWORD *)v1 + 38);
          *(_OWORD *)(v1 + 568) = v31;
          *((_QWORD *)v1 + 73) = v32;
          *((_QWORD *)v1 + 75) = v1 + 544;
          winrt::Windows::Internal::Shell::implementation::DashboardManager::CallDashboardExtension(
            (__int64)v26,
            (__int64)(v1 + 544),
            0x1F40u);
          if ( *((_QWORD *)v1 + 75) )
          {
            v33 = (char *)*((_QWORD *)v1 + 75);
            LOBYTE(v33) = v33 != v1 + 544;
            (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v1 + 75) + 32LL))(*((_QWORD *)v1 + 75), v33);
          }
          std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_((__int64)(v1 + 224));
          std::wstring::_Tidy_deallocate(v15);
          std::wstring::_Tidy_deallocate(v9);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v1 + 24));
          if ( *((_QWORD *)v1 + 2) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)v1 + 2);
        }
        else
        {
          std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_((__int64)(v1 + 224));
          std::wstring::_Tidy_deallocate((_QWORD *)v1 + 19);
          std::wstring::_Tidy_deallocate((_QWORD *)v1 + 10);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v1 + 24));
          if ( *((_QWORD *)v1 + 2) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)v1 + 2);
        }
LABEL_42:
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v1 + 688));
        if ( *((_WORD *)v1 + 5) )
          operator delete(v1, (const struct std::nothrow_t *)0x2C0);
        break;
      case 5:
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 24));
        if ( *((_QWORD *)v1 + 2) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)v1 + 2);
        goto LABEL_42;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
