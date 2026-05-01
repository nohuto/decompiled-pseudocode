/*
 * XREFs of _lambda_f17086a35f2f14e82d9d84ab1f41fcfa_::operator() @ 0x1805A9A44
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_f17086a35f2f14e82d9d84ab1f41fcfa__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call @ 0x1805B6E50 (std--_Func_impl_no_alloc__lambda_f17086a35f2f14e82d9d84ab1f41fcfa__void_winrt--Wind_ea_1805B6E50.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetForInputSite@InputGestureManager@Input@Internal@UI@Windows@winrt@@SA@AEBUInputSite@23456@@Z @ 0x1800FB7F8 (-GetForInputSite@InputGestureManager@Input@Internal@UI@Windows@winrt@@SA@AEBUInputSite@23456@@Z.c)
 *     ?GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ @ 0x1800FB86C (-GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ.c)
 *     ?value@?$optional@I@std@@QEGAAAEAIXZ @ 0x1802249E0 (-value@-$optional@I@std@@QEGAAAEAIXZ.c)
 *     ?RevokeProcessesForAnimation@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBI@3@@Z @ 0x1802470EC (-RevokeProcessesForAnimation@-$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGes.c)
 *     ?DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJXZ @ 0x1802B4FA4 (-DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJX.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?GetWidgetsAppProcessId@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension6@UDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805AF534 (-GetWidgetsAppProcessId@-$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension6@UDashboardE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_f17086a35f2f14e82d9d84ab1f41fcfa_::operator()(__int64 a1, IUnknown **a2)
{
  int v4; // eax
  HRESULT v5; // eax
  unsigned int *v6; // r10
  char v7; // r9
  __int16 v8; // r8
  __int16 v9; // dx
  IUnknown *v10; // rcx
  struct IUnknownVtbl *lpVtbl; // rax
  int v12; // eax
  IUnknown *v13; // rcx
  __int64 v14; // rax
  int v15[4]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v16; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v17[8]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18[2]; // [rsp+48h] [rbp-38h] BYREF
  int v19; // [rsp+58h] [rbp-28h] BYREF
  __int128 v20; // [rsp+60h] [rbp-20h]
  __int128 v21; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v18[1] = (__int64)a2;
  if ( *(_BYTE *)(a1 + 32) )
  {
    v4 = winrt::Windows::Internal::Shell::implementation::DashboardManager::DisableWindowHardeningPolicy();
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8BD,
        (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)(unsigned int)v4);
    v5 = CoAllowSetForegroundWindow(*a2, 0LL);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8BE,
        (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)(unsigned int)v5);
  }
  v6 = (unsigned int *)std::optional<unsigned int>::value(a1 + 24);
  v7 = *(_BYTE *)(a1 + 16);
  v8 = *(_WORD *)(a1 + 14);
  v9 = *(_WORD *)(a1 + 12);
  LODWORD(v21) = *(_DWORD *)(a1 + 8);
  WORD2(v21) = v9;
  WORD3(v21) = v8;
  BYTE8(v21) = v7;
  *(_DWORD *)((char *)&v21 + 9) = *(_DWORD *)(a1 + 17);
  *(_WORD *)((char *)&v21 + 13) = *(_WORD *)(a1 + 21);
  HIBYTE(v21) = *(_BYTE *)(a1 + 23);
  v10 = *a2;
  v19 = 0;
  v20 = 0LL;
  lpVtbl = v10->lpVtbl;
  v16 = v21;
  v12 = ((__int64 (__fastcall *)(IUnknown *, __int128 *, _QWORD))lpVtbl[2].Release)(v10, &v16, *v6);
  winrt::check_hresult(v15, v12, (__int64)&v19);
  v13 = *a2;
  if ( *a2 )
  {
    *(_QWORD *)v15 = 0LL;
    ((void (__fastcall *)(IUnknown *, void *, int *))v13->lpVtbl->QueryInterface)(
      v13,
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension6>,
      v15);
    v14 = *(_QWORD *)v15;
    *(_QWORD *)&v21 = *(_QWORD *)v15;
  }
  else
  {
    *(_QWORD *)&v21 = 0LL;
    v14 = 0LL;
  }
  if ( v14 )
  {
    winrt::Windows::UI::Internal::Input::InputSite::GetForCurrentProcess((__int64)v18);
    winrt::Windows::UI::Internal::Input::InputGestureManager::GetForInputSite(
      (const struct winrt::Windows::UI::Internal::Input::InputSite *)v17,
      v18);
    v15[0] = winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension6<winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::GetWidgetsAppProcessId(a2);
    *(_QWORD *)&v16 = v15;
    DWORD2(v16) = 1;
    winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::RevokeProcessesForAnimation(
      (__int64)v17,
      &v16);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v17);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v18);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a2);
}
