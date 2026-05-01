/*
 * XREFs of ?Loaded@?$consume_Windows_UI_Xaml_IFrameworkElement@UGrid@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBURoutedEventHandler@Xaml@UI@Windows@3@@Z @ 0x18060B114
 * Callers:
 *     ?CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z @ 0x18060A450 (-CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCAA@AA@impl@winrt@@QEAA@AEBUIUIElement@Xaml@UI@Windows@2@Uevent_token@2@@Z @ 0x1801F7390 (--0-$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement@Xaml@UI@Windows.c)
 *     ?Loaded@?$consume_Windows_UI_Xaml_IFrameworkElement@UGrid@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBURoutedEventHandler@Xaml@UI@Windows@3@@Z @ 0x18059A474 (-Loaded@-$consume_Windows_UI_Xaml_IFrameworkElement@UGrid@Controls@Xaml@UI@Windows@winrt@@@impl@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement<winrt::Windows::UI::Xaml::Controls::Grid>::Loaded(
        void (__fastcall ****a1)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *), void *, __int64 *),
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v6; // rbx
  void (__fastcall ***v7)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *), void *, __int64 *); // rcx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v6 = *winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement<winrt::Windows::UI::Xaml::Controls::Grid>::Loaded(
          (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a1,
          &v9,
          a4);
  v7 = *a1;
  v10 = 0LL;
  if ( v7 )
    (**v7)(
      (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))v7,
      &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IFrameworkElement>,
      (__int64 *)&v10);
  __0__event_revoker_UIUIElement_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BCAA_AA_impl_winrt__QEAA_AEBUIUIElement_Xaml_UI_Windows_2_Uevent_token_2__Z(
    a2,
    (__int64)&v10,
    v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  return a2;
}
