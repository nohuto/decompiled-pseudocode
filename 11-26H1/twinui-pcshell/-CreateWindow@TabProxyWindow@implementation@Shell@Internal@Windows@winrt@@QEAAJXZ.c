/*
 * XREFs of ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1802245BC
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_472a7092c1a4414452e48170d805fed1___::Invoke @ 0x1802966B0 (CAsyncCallbackWithLambda__lambda_472a7092c1a4414452e48170d805fed1___--Invoke.c)
 * Callees:
 *     ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x18002C7D4 (-TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetForCurrentProcess@?$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800B7298 (-GetForCurrentProcess@-$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@I.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800CC128 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800CC1A4 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?DestroyWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1801E0340 (-DestroyWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 *     ?SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x180266834 (-SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and_.c)
 *     ?TabChanged@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UWindowTabView@Shell@UI@Internal@Windows@winrt@@UWindowTabViewPropertyChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x180266C90 (-TabChanged@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shel_ea_180266C90.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SWT_3@@@details@wil@@QEAA_NXZ @ 0x1802E91E0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SWT_3@@@details@wil@@QEAA_NXZ.c)
 *     ?RegisterTaskbarGlom@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x180581D78 (-RegisterTaskbarGlom@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstrin.c)
 *     ?UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180583140 (-UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::CreateWindow(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this)
{
  int v2; // edi
  __int64 **v3; // r14
  winrt::hstring *v4; // rax
  const WCHAR *v5; // rax
  const char *v6; // r9
  HWND v7; // rcx
  __int64 result; // rax
  const char *v9; // r9
  __int64 v10; // rdx
  unsigned int LastError; // edi
  HRESULT v12; // eax
  HRESULT v13; // r15d
  HRESULT v14; // esi
  __int64 v15; // rdx
  LONG WindowLongW; // eax
  const struct winrt::hstring *v17; // rax
  _QWORD *v18; // rax
  void (__fastcall ****v19)(_QWORD, __int64 *, __int64 *); // rax
  char v20; // di
  void (__fastcall ***v21)(_QWORD, __int64 *, __int64 *); // rsi
  const char *v22; // r9
  const char *v23; // r9
  int v24; // [rsp+70h] [rbp-58h] BYREF
  int v25; // [rsp+74h] [rbp-54h] BYREF
  volatile signed __int32 *v26; // [rsp+78h] [rbp-50h] BYREF
  volatile signed __int32 *v27[2]; // [rsp+80h] [rbp-48h] BYREF
  char v28; // [rsp+90h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  void (__fastcall ***v31)(_QWORD, __int64 *, __int64 *); // [rsp+D8h] [rbp+10h] BYREF
  int v32; // [rsp+E0h] [rbp+18h]
  int pvAttribute; // [rsp+E8h] [rbp+20h] BYREF

  v2 = 0;
  v32 = 0;
  v3 = (__int64 **)((char *)this + 48);
  if ( *((_QWORD *)this + 6) )
  {
    v4 = (winrt::hstring *)winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                             (__int64 **)this + 6,
                             &v31);
    v2 = 1;
    v32 = 1;
    v5 = winrt::hstring::c_str(v4);
  }
  else
  {
    v5 = &pvData;
  }
  *((_QWORD *)this + 4) = CreateWindowInBandEx(
                            0x200000LL,
                            L"Windows.Internal.Shell.TabProxyWindow",
                            v5,
                            114229248LL,
                            0,
                            0,
                            1,
                            1,
                            0LL,
                            0LL,
                            &_ImageBase,
                            this,
                            3,
                            1);
  if ( (v2 & 1) != 0 )
  {
    v2 &= ~1u;
    v32 = v2;
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v31);
  }
  v7 = (HWND)*((_QWORD *)this + 4);
  if ( !v7 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xF8,
             (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
             v6);
  v27[1] = (volatile signed __int32 *)this;
  v28 = 1;
  if ( !SetPropW(v7, (LPCWSTR)0xA920, *((HANDLE *)this + 7)) )
  {
    v10 = 259LL;
LABEL_12:
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v10,
                  (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
                  v9);
LABEL_22:
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::DestroyWindow(this);
    return LastError;
  }
  if ( !SetPropW(*((HWND *)this + 4), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow", HANDLE_FLAG_INHERIT) )
  {
    v10 = 261LL;
    goto LABEL_12;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SWT_3>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SWT_3>::GetImpl'::`2'::impl) )
    SetPropW(*((HWND *)this + 4), L"Microsoft.Windows.ImmersiveZBIDWindowAsClassic", HANDLE_FLAG_INHERIT);
  pvAttribute = 1;
  v12 = DwmSetWindowAttribute(*((HWND *)this + 4), 0xDu, &pvAttribute, 4u);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10F,
      (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      (const char *)(unsigned int)v12);
    LastError = v13;
    goto LABEL_22;
  }
  v24 = 1;
  v25 = 1;
  v14 = DwmSetWindowAttribute(*((HWND *)this + 4), 7u, &v24, 4u);
  if ( v14 < 0 )
  {
    v15 = 279LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      (const char *)(unsigned int)v14);
    LastError = v14;
    goto LABEL_22;
  }
  v14 = DwmSetWindowAttribute(*((HWND *)this + 4), 0xAu, &v25, 4u);
  if ( v14 < 0 )
  {
    v15 = 284LL;
    goto LABEL_21;
  }
  WindowLongW = GetWindowLongW(*((HWND *)this + 4), -16);
  SetWindowLongW(*((HWND *)this + 4), -16, WindowLongW | 0x10000000);
  if ( *v3 )
  {
    if ( *((_BYTE *)this + 184) )
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync(this, &v31);
    v17 = (const struct winrt::hstring *)winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
                                           v3,
                                           &v31);
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TileId(this, v17);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v31);
    v18 = (_QWORD *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::TabChanged(
                      v3,
                      &v31,
                      (char *)this + 144);
    *((_QWORD *)this + 19) = *v18;
  }
  try
  {
    v31 = 0LL;
    if ( winrt::Windows::Foundation::operator!=((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v3, &v31) )
    {
      v19 = (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
                                                                    v3,
                                                                    v27);
      v20 = v2 | 2;
    }
    else
    {
      v19 = (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))winrt::hstring::hstring(
                                                                    (winrt::hstring *)&v26,
                                                                    &pvData);
      v20 = v2 | 4;
    }
    v21 = *v19;
    *v19 = 0LL;
    v31 = v21;
    if ( (v20 & 4) != 0 )
    {
      v20 &= ~4u;
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v26);
    }
    if ( (v20 & 2) != 0 )
      winrt::handle_type<winrt::impl::hstring_traits>::close(v27);
    if ( v21 )
    {
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::RegisterTaskbarGlom(
        this,
        (const struct winrt::hstring *)&v31);
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::UpdateTileGuid(this);
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v31);
    result = 0LL;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x137,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      v22);
    LODWORD(v31) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x138,
                     (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
                     v23);
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::DestroyWindow(this);
    return (unsigned int)v31;
  }
  return result;
}
