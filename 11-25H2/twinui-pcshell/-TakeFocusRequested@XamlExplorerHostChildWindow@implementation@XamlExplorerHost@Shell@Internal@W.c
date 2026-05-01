/*
 * XREFs of ?TakeFocusRequested@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUevent_token@7@AEBU?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@67@@Z @ 0x1801F32C4
 * Callers:
 *     ?add_TakeFocusRequested@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x1801F3260 (-add_TakeFocusRequested@-$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@S.c)
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180065DB4 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?revoke_impl@?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@AEAAXUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@3@@Z @ 0x180101888 (-revoke_impl@-$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@-.c)
 *     ?add@?$event@U?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@2@@Z @ 0x1801F340C (-add@-$event@U-$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@W.c)
 *     ?get@?$weak_ref@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ @ 0x180229F80 (-get@-$weak_ref@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x1802921A4 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??4?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1802AA430 (--4-$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIDes.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ?TakeFocusRequested@?$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@UDesktopWindowXamlSourceTakeFocusRequestedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x1804407CC (-TakeFocusRequested@-$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::TakeFocusRequested(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v9; // rax
  char *v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h] BYREF
  int v13; // [rsp+34h] [rbp-2Ch]
  __int128 v14; // [rsp+38h] [rbp-28h]
  __int64 v15; // [rsp+48h] [rbp-18h]
  _BYTE v16[16]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v11 = 0LL;
  if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 32), &v11) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB3,
      (int)"pcshell\\twinui\\XamlExplorerHost\\lib\\XamlExplorerHostChildWindow.cpp",
      (const char *)0x8007139FLL,
      (int)v11);
  if ( !*(_QWORD *)(a1 + 40) )
  {
    *(_QWORD *)&v14 = a1;
    *((_QWORD *)&v14 + 1) = winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::OnTakeFocusRequested;
    LODWORD(v15) = 0;
    HIDWORD(v15) = v13;
    v11 = (char *)operator new(0x28uLL);
    winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v11 + 8));
    *(_OWORD *)(v6 + 16) = v14;
    *(_QWORD *)(v6 + 32) = v15;
    _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
    *(_QWORD *)v6 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>,_lambda_65d9d95dc8f5b1840d03fd77ef45dc28_>::`vftable';
    v11 = (char *)v6;
    v8 = winrt::impl::consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>::TakeFocusRequested(
           a1 + 32,
           &v12,
           v7,
           &v11);
    __4__event_revoker_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt___MP8type___abi_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
      a1 + 40,
      v8);
    if ( v12 )
    {
      v9 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::weak_ref<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>::get(
                                                                                                 &v12,
                                                                                                 v16);
      _revoke_impl___event_revoker_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt___MP8type___abi_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__AEAAXUIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_3__Z(
        (__int64)&v12,
        v9);
      if ( v12 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v12);
    }
    if ( v11 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v11);
  }
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IInspectable>>::add(
    a1 + 96,
    a2,
    a3);
  return a2;
}
