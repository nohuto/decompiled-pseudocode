/*
 * XREFs of ?RegisterHotKeys@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ @ 0x1802409C8
 * Callers:
 *     ?subscribe_to_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1802B7FC0 (-subscribe_to_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WidgetsOSState@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18028F0FC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WidgetsOSState@@@details@wil@@QEAAX_NW4Re.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::RegisterHotKeys(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  _DWORD v6[8]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6[0] = 0;
  v6[4] = 0;
  v6[1] = 102;
  v6[2] = 16392;
  v6[3] = 87;
  v6[5] = 76;
  v6[6] = 16394;
  v6[7] = 8;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WidgetsOSState>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_WidgetsOSState>::GetImpl'::`2'::impl,
    a2);
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, winrt::Windows::Internal::Shell::implementation::DashboardManager *, char *))(**((_QWORD **)this + 25) + 56LL))(
         *((_QWORD *)this + 25),
         2LL,
         v6,
         this,
         (char *)this + 212);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x568,
    (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
