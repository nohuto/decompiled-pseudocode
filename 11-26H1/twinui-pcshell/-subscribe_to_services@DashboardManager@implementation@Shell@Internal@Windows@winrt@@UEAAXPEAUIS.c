/*
 * XREFs of ?subscribe_to_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1802AE8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterHotKeys@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ @ 0x180231F3C (-RegisterHotKeys@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WidgetsOSState@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180288228 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WidgetsOSState@@@details@wil@@QEAAX_NW4Re.c)
 *     ?RegisterUserPowerSessionNotifications@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ @ 0x1805D57A8 (-RegisterUserPowerSessionNotifications@DashboardManager@implementation@Shell@Internal@Windows@wi.c)
 *     ?RegisterUserSessionNotifications@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ @ 0x1805D5808 (-RegisterUserSessionNotifications@DashboardManager@implementation@Shell@Internal@Windows@winrt@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::subscribe_to_services(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this,
        struct IServiceProvider *a2)
{
  char *v2; // rbx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // r8
  int v10; // eax
  int v11; // eax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (char *)this + 176;
  QueryService = a2->lpVtbl->QueryService;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 22);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &IID_IImmersiveWindowMessageService,
         &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
         v2);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x395,
      (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v6,
      v12);
  v8 = winrt::Windows::Internal::Shell::implementation::DashboardManager::RegisterHotKeys(
         (winrt::Windows::Internal::Shell::implementation::DashboardManager *)((char *)this - 24),
         v7);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x396,
      (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v8,
      v12);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WidgetsOSState>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WidgetsOSState>::GetImpl'::`2'::impl,
    1u,
    v9);
  v10 = winrt::Windows::Internal::Shell::implementation::DashboardManager::RegisterUserSessionNotifications((winrt::Windows::Internal::Shell::implementation::DashboardManager *)((char *)this - 24));
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x399,
      (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v10,
      v12);
  v11 = winrt::Windows::Internal::Shell::implementation::DashboardManager::RegisterUserPowerSessionNotifications((winrt::Windows::Internal::Shell::implementation::DashboardManager *)((char *)this - 24));
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x39A,
      (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v11,
      v12);
}
