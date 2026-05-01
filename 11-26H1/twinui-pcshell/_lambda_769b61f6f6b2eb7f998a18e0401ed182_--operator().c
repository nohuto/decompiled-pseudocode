/*
 * XREFs of _lambda_769b61f6f6b2eb7f998a18e0401ed182_::operator() @ 0x1805CD0E0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_769b61f6f6b2eb7f998a18e0401ed182__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call @ 0x1805DA720 (std--_Func_impl_no_alloc__lambda_769b61f6f6b2eb7f998a18e0401ed182__void_winrt--Wind_ea_1805DA720.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ @ 0x1800B7220 (-GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ.c)
 *     ?GetForInputSite@InputGestureManager@Input@Internal@UI@Windows@winrt@@SA@AEBUInputSite@23456@@Z @ 0x1800B72F8 (-GetForInputSite@InputGestureManager@Input@Internal@UI@Windows@winrt@@SA@AEBUInputSite@23456@@Z.c)
 *     ?value@?$optional@I@std@@QEGAAAEAIXZ @ 0x1802157D0 (-value@-$optional@I@std@@QEGAAAEAIXZ.c)
 *     ?RevokeProcessesForAnimation@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBI@3@@Z @ 0x18023831C (-RevokeProcessesForAnimation@-$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGes.c)
 *     ?DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJXZ @ 0x1802AC1D8 (-DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJX.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?GetWidgetsAppProcessId@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension6@UDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805D3370 (-GetWidgetsAppProcessId@-$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension6@UDashboardE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_769b61f6f6b2eb7f998a18e0401ed182_::operator()(__int64 a1, IUnknown **a2)
{
  int v4; // eax
  HRESULT v5; // eax
  unsigned int *v6; // r14
  char v7; // dl
  char v8; // r8
  char v9; // r9
  char v10; // r10
  char v11; // r11
  char v12; // bl
  char v13; // di
  char v14; // si
  IUnknown *v15; // rcx
  int v16; // eax
  IUnknown *v17; // rcx
  __int64 v18; // rax
  __int128 v19; // [rsp+20h] [rbp-60h] BYREF
  int v20[4]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v21; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v22[8]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v23[8]; // [rsp+58h] [rbp-28h] BYREF
  IUnknown **v24; // [rsp+60h] [rbp-20h]
  int v25; // [rsp+68h] [rbp-18h] BYREF
  __int128 v26; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v24 = a2;
  if ( *(_BYTE *)(a1 + 32) )
  {
    v4 = winrt::Windows::Internal::Shell::implementation::DashboardManager::DisableWindowHardeningPolicy();
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E5,
        (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)(unsigned int)v4);
    v5 = CoAllowSetForegroundWindow(*a2, 0LL);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E6,
        (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)(unsigned int)v5);
  }
  v6 = (unsigned int *)std::optional<unsigned int>::value(a1 + 24);
  v7 = *(_BYTE *)(a1 + 16);
  v8 = *(_BYTE *)(a1 + 17);
  v9 = *(_BYTE *)(a1 + 18);
  v10 = *(_BYTE *)(a1 + 19);
  v11 = *(_BYTE *)(a1 + 20);
  v12 = *(_BYTE *)(a1 + 21);
  v13 = *(_BYTE *)(a1 + 22);
  v14 = *(_BYTE *)(a1 + 23);
  *(_QWORD *)&v19 = *(_QWORD *)(a1 + 8);
  BYTE8(v19) = v7;
  BYTE9(v19) = v8;
  BYTE10(v19) = v9;
  BYTE11(v19) = v10;
  BYTE12(v19) = v11;
  BYTE13(v19) = v12;
  BYTE14(v19) = v13;
  HIBYTE(v19) = v14;
  v15 = *a2;
  v25 = 0;
  v26 = 0LL;
  v21 = v19;
  v16 = ((__int64 (__fastcall *)(IUnknown *, __int128 *, _QWORD))v15->lpVtbl[2].Release)(v15, &v21, *v6);
  winrt::check_hresult(v20, v16, (__int64)&v25);
  v17 = *a2;
  if ( *a2 )
  {
    *(_QWORD *)v20 = 0LL;
    ((void (__fastcall *)(IUnknown *, void *, int *))v17->lpVtbl->QueryInterface)(
      v17,
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension6>,
      v20);
    v18 = *(_QWORD *)v20;
    *(_QWORD *)&v19 = *(_QWORD *)v20;
  }
  else
  {
    *(_QWORD *)&v19 = 0LL;
    v18 = 0LL;
  }
  if ( v18 )
  {
    winrt::Windows::UI::Internal::Input::InputSite::GetForCurrentProcess((__int64)v23);
    winrt::Windows::UI::Internal::Input::InputGestureManager::GetForInputSite(
      (const struct winrt::Windows::UI::Internal::Input::InputSite *)v22,
      (__int64)v23);
    v20[0] = winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension6<winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::GetWidgetsAppProcessId(a2);
    *(_QWORD *)&v21 = v20;
    DWORD2(v21) = 1;
    winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::RevokeProcessesForAnimation(
      (__int64)v22,
      &v21);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v22);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v23);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a2);
}
