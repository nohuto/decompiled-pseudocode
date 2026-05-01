/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1805D9670
 * Callers:
 *     ?UpdateWidgetsTelemetryAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4SessionType@123456@@Z @ 0x1805D9D20 (-UpdateWidgetsTelemetryAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1800276AC (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800324B0 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800CC1A4 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_ @ 0x1801C9850 (std--_Optional_destruct_base__anonymous_namespace_--DashboardExtensionVersion_0_--__Optional_des.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion @ 0x1801C986C (_anonymous_namespace_--DashboardExtensionVersion--_DashboardExtensionVersion.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     std::optional__anonymous_namespace_::DashboardExtensionVersion_::value @ 0x180208B60 (std--optional__anonymous_namespace_--DashboardExtensionVersion_--value.c)
 *     ?ReadPrelaunchValue@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJPEAK@Z @ 0x18020BD48 (-ReadPrelaunchValue@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJPEAK@Z.c)
 *     ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x18026D69C (-IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NX.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x180279994 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     _anonymous_namespace_::TryGetDashboardPackageName @ 0x180279CBC (_anonymous_namespace_--TryGetDashboardPackageName.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WidgetsOSState@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180288228 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WidgetsOSState@@@details@wil@@QEAAX_NW4Re.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion_0 @ 0x180295C90 (_anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion_0.c)
 *     ?now@clock@winrt@@SA?AV?$time_point@Uclock@winrt@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@chrono@std@@XZ @ 0x1802C16CC (-now@clock@winrt@@SA-AV-$time_point@Uclock@winrt@@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chro.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x180329228 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ @ 0x180330970 (-await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@timespan_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@experimental@std@@@Z @ 0x18033EF14 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@impl.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180358560 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$WidgetsOSState@AEAKAEA_NAEAK_NAEA_NPEBGPEBGAEAPEBG_N_NI@DashboardManagerTelemetry@@SAXAEAKAEA_N0$$QEA_N1$$QEAPEBG3AEAPEBG22$$QEAI@Z @ 0x1805C47BC (--$WidgetsOSState@AEAKAEA_NAEAK_NAEA_NPEBGPEBGAEAPEBG_N_NI@DashboardManagerTelemetry@@SAXAEAKAEA.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::operator_ @ 0x1805CC5E8 (_anonymous_namespace_--DashboardExtensionVersion--operator_.c)
 *     ?GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@6@XZ @ 0x1805D2064 (-GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUA.c)
 *     ?GetDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUDashboardExtension@Dashboard@3UI@WindowsUdk@6@XZ @ 0x1805D2184 (-GetDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUDash.c)
 *     _anonymous_namespace_::GetDashboardExtensionName @ 0x1805D21D8 (_anonymous_namespace_--GetDashboardExtensionName.c)
 *     _anonymous_namespace_::IsRegistryFlagSet @ 0x1805D4CE0 (_anonymous_namespace_--IsRegistryFlagSet.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion_0 @ 0x1805D89C0 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion_0.c)
 *     _anonymous_namespace_::TryGetDashboardPackageName_0 @ 0x1805D8AF4 (_anonymous_namespace_--TryGetDashboardPackageName_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ @ 0x1805DA9EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash@@@details@wil@@QEAA_NXZ @ 0x1805DAE00 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExte.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerTelemetryCrashFix@@@details@wil@@QEAA_NXZ @ 0x1805DAE3C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerTelemet.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerWidgetBoardPackageNameFix@@@details@wil@@QEAA_NXZ @ 0x1805DAE78 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerWidgetB.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix@@@details@wil@@QEAA_NXZ @ 0x1805DAEB4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookup.c)
 *     ?GetTaskbarBadgingEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1805DDCD8 (-GetTaskbarBadgingEnabled@DashboardTaskbarSettings@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync__ResumeCoro_1(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *v3; // rsi
  void *v4; // r8
  __int64 *v5; // rcx
  __int64 v6; // r13
  _BYTE *v7; // rdi
  DashboardTaskbarSettings *v8; // rcx
  const char *v9; // r9
  __int64 *DashboardAppExtension; // rax
  char *DashboardPackageName_0; // rax
  __int64 v12; // rdi
  __int64 *v13; // rax
  __int64 AvailableDashboardExtensionVersion_0; // rax
  __int64 *v15; // rcx
  const WCHAR *v16; // rax
  __int64 *DashboardExtension; // rax
  bool v18; // bl
  winrt::hstring *DashboardExtensionName; // rax
  char *v20; // rcx
  unsigned int v21; // eax
  unsigned int *v22; // [rsp+60h] [rbp-128h]
  bool *v25; // [rsp+80h] [rbp-108h]
  _DWORD *v26; // [rsp+88h] [rbp-100h]
  __int64 *v27; // [rsp+90h] [rbp-F8h]
  _Mtx_t *v28; // [rsp+98h] [rbp-F0h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  try
  {
    v3 = a1;
    if ( (unsigned __int16)(*((_WORD *)a1 + 4) + 1) > 8u )
    {
LABEL_52:
      __debugbreak();
    }
    else
    {
      switch ( *((_WORD *)a1 + 4) )
      {
        case 0xFFFF:
        case 3:
          goto LABEL_50;
        case 0:
        case 1:
          goto LABEL_52;
        case 2:
          winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
            a1[69],
            a1 + 2);
          *((_BYTE *)v3 + 24) = 0;
          *((_WORD *)v3 + 4) = 4;
          `winrt::resume_background'::`2'::awaitable::await_suspend(4LL, (void (*)(void *, void *))v3, v4);
          return;
        case 4:
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_WidgetsOSState>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_WidgetsOSState>::GetImpl'::`2'::impl,
            1u,
            a3);
          if ( *((_DWORD *)v3 + 140) )
            goto LABEL_14;
          v3[4] = 0LL;
          v3[5] = 0LL;
          v3[6] = 12000000000LL;
          v3[7] = 0LL;
          *((_DWORD *)v3 + 16) = 0;
          *((_WORD *)v3 + 4) = 6;
          winrt::impl::timespan_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::WindowTabHost *,unsigned __int64>::promise_type>(
            (winrt::impl::timespan_awaiter *)(v3 + 4),
            (__int64)v3);
          return;
        case 5:
          v5 = a1 + 2;
          if ( v3[2] )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v5);
          goto LABEL_50;
        case 6:
          winrt::impl::timespan_awaiter::await_resume((winrt::impl::timespan_awaiter *)(a1 + 4));
          winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::cancellable_promise **)v3 + 4);
LABEL_14:
          v27 = v3 + 9;
          winrt::clock::now(v3 + 9);
          v3[10] = 0LL;
          *((_DWORD *)v3 + 22) = 8;
          v6 = v3[69];
          v28 = (_Mtx_t *)(v3 + 12);
          v3[12] = v6 + 232;
          std::_Mutex_base::lock((std::_Mutex_base *)(v6 + 232));
          if ( !RegGetValueW(
                  HKEY_CURRENT_USER,
                  L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh",
                  L"WidgetsStateLastRun",
                  0x40u,
                  0LL,
                  v3 + 10,
                  (LPDWORD)v3 + 22)
            && v3[10] >= v3[9] - 864000000000LL )
          {
            goto LABEL_48;
          }
          v22 = (unsigned int *)(v3 + 13);
          *((_DWORD *)v3 + 26) = 0;
          *((_DWORD *)v3 + 27) = 4;
          if ( RegGetValueW(
                 HKEY_CURRENT_USER,
                 L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
                 L"TaskbarDa",
                 0x10u,
                 0LL,
                 v3 + 13,
                 (LPDWORD)v3 + 27) )
          {
            *((_DWORD *)v3 + 26) = 1;
          }
          v26 = v3 + 14;
          *((_DWORD *)v3 + 28) = 0;
          winrt::Windows::Internal::Shell::implementation::DashboardManager::ReadPrelaunchValue((unsigned int *)v3 + 28);
          v7 = (char *)v3 + 116;
          v25 = (bool *)v3 + 116;
          *((_BYTE *)v3 + 116) = 1;
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DashboardManagerTelemetryCrashFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_DashboardManagerTelemetryCrashFix>::GetImpl'::`2'::impl) )
          {
            try
            {
              *v7 = DashboardTaskbarSettings::GetTaskbarBadgingEnabled(v8);
            }
            catch ( ... )
            {
              wil::details::in1diag3::Log_CaughtException(
                retaddr,
                (void *)0x694,
                (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
                v9);
              v3 = a1;
            }
          }
          else
          {
            *v7 = DashboardTaskbarSettings::GetTaskbarBadgingEnabled(v8);
          }
          *(_OWORD *)(v3 + 15) = 0LL;
          v3[17] = 0LL;
          v3[18] = 7LL;
          *((_WORD *)v3 + 60) = 0;
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DashboardManagerWidgetBoardPackageNameFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_DashboardManagerWidgetBoardPackageNameFix>::GetImpl'::`2'::impl)
            && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl) )
          {
            DashboardAppExtension = winrt::Windows::Internal::Shell::implementation::DashboardManager::GetDashboardAppExtension(
                                      (RTL_SRWLOCK *)v6,
                                      v3 + 19);
            DashboardPackageName_0 = anonymous_namespace_::TryGetDashboardPackageName_0(
                                       (char *)v3 + 160,
                                       (__int64 **)DashboardAppExtension);
            std::wstring::operator=(v3 + 15, DashboardPackageName_0);
            std::wstring::_Tidy_deallocate(v3 + 20);
          }
          else
          {
            anonymous_namespace_::TryGetDashboardPackageName(v3 + 15);
          }
          *((_BYTE *)v3 + 248) = 0;
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix>::GetImpl'::`2'::impl) )
          {
            if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl) )
            {
              v13 = winrt::Windows::Internal::Shell::implementation::DashboardManager::GetDashboardAppExtension(
                      (RTL_SRWLOCK *)v6,
                      v3 + 32);
              v12 = (__int64)(v3 + 33);
              AvailableDashboardExtensionVersion_0 = anonymous_namespace_::TryGetAvailableDashboardExtensionVersion_0(
                                                       (__int64)(v3 + 33),
                                                       (volatile signed __int32 *)v13);
              goto LABEL_30;
            }
            v12 = (__int64)(v3 + 41);
          }
          else
          {
            v12 = (__int64)(v3 + 49);
          }
          AvailableDashboardExtensionVersion_0 = anonymous_namespace_::TryGetAvailableDashboardExtensionVersion(v12);
LABEL_30:
          if ( *(_BYTE *)(AvailableDashboardExtensionVersion_0 + 56) )
          {
            v15 = v3 + 24;
            if ( *((_BYTE *)v3 + 248) )
            {
              anonymous_namespace_::DashboardExtensionVersion::operator_(
                v15,
                (__int64 *)AvailableDashboardExtensionVersion_0);
            }
            else
            {
              anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion_0(
                v15,
                (__int64 *)AvailableDashboardExtensionVersion_0);
              *((_BYTE *)v3 + 248) = 1;
            }
          }
          else if ( *((_BYTE *)v3 + 248) )
          {
            anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion(v3 + 24);
            *((_BYTE *)v3 + 248) = 0;
          }
          std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_(v12);
          if ( *((_BYTE *)v3 + 248) )
          {
            v16 = (const WCHAR *)(std::optional__anonymous_namespace_::DashboardExtensionVersion_::value((__int64)(v3 + 24))
                                + 24);
            if ( *((_QWORD *)v16 + 3) > 7uLL )
              v16 = *(const WCHAR **)v16;
          }
          else
          {
            v16 = &pvData;
          }
          v3[57] = (__int64)v16;
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash>::GetImpl'::`2'::impl) )
          {
            v3[59] = 0LL;
            DashboardExtension = winrt::Windows::Internal::Shell::implementation::DashboardManager::GetDashboardExtension(
                                   (RTL_SRWLOCK *)v6,
                                   v3 + 60);
            v18 = winrt::Windows::Foundation::operator!=(
                    (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))DashboardExtension,
                    (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v3 + 59);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v3 + 60));
          }
          else
          {
            v3[61] = 0LL;
            v18 = winrt::Windows::Foundation::operator!=(
                    (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(v6 + 136),
                    (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v3 + 61);
          }
          *((_BYTE *)v3 + 464) = v18;
          *((_DWORD *)v3 + 124) = *((_DWORD *)v3 + 140);
          *((_BYTE *)v3 + 500) = anonymous_namespace_::IsRegistryFlagSet(
                                   HKEY_CURRENT_USER,
                                   L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh",
                                   L"PackageRepairCompleted",
                                   0);
          *((_BYTE *)v3 + 501) = 0;
          DashboardExtensionName = anonymous_namespace_::GetDashboardExtensionName((winrt::hstring *)(v3 + 64));
          v3[63] = (__int64)winrt::hstring::c_str(DashboardExtensionName);
          v20 = (char *)(v3 + 15);
          if ( (unsigned __int64)v3[18] > 7 )
            v20 = (char *)v3[15];
          v3[65] = (__int64)v20;
          *((_BYTE *)v3 + 528) = winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardExtensionPresent();
          DashboardManagerTelemetry::WidgetsOSState<unsigned long &,bool &,unsigned long &,bool,bool &,unsigned short const *,unsigned short const *,unsigned short const * &,bool,bool,unsigned int>(
            v22,
            (bool *)v3 + 464,
            v26,
            (bool *)v3 + 528,
            v25,
            (const unsigned __int16 **)v3 + 65,
            (const unsigned __int16 **)v3 + 63,
            (const unsigned __int16 **)v3 + 57,
            (bool *)v3 + 501,
            (bool *)v3 + 500,
            (unsigned int *)v3 + 124);
          winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v3 + 64);
          v3[67] = *v27;
          v21 = RegSetKeyValueW(
                  HKEY_CURRENT_USER,
                  L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh",
                  L"WidgetsStateLastRun",
                  0xBu,
                  v3 + 67,
                  8u);
          if ( v21 )
            wil::details::in1diag3::_Log_Win32(
              retaddr,
              1749LL,
              (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
              (const char *)v21);
          std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_((__int64)(v3 + 24));
          std::wstring::_Tidy_deallocate(v3 + 15);
LABEL_48:
          _Mtx_unlock(*v28);
          if ( v3[2] )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v3 + 2);
LABEL_50:
          if ( *((_WORD *)v3 + 5) )
            operator delete(v3, (const struct std::nothrow_t *)0x240);
          break;
        case 7:
          winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::cancellable_promise **)a1 + 4);
          if ( v3[2] )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v3 + 2);
          goto LABEL_50;
      }
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
