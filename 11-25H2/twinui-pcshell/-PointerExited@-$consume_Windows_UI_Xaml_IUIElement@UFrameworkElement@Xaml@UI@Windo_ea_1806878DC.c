/*
 * XREFs of ?PointerExited@?$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUPointerEventHandler@Input@Xaml@UI@Windows@3@@Z @ 0x1806878DC
 * Callers:
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180685C54 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCAA@AA@impl@winrt@@QEAA@AEBUIUIElement@Xaml@UI@Windows@2@Uevent_token@2@@Z @ 0x1801FEB6C (--0-$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement@Xaml@UI@Windows.c)
 *     ?PointerExited@?$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUPointerEventHandler@Input@Xaml@UI@Windows@3@@Z @ 0x18068781C (-PointerExited@-$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@im.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void (__fastcall ***__fastcall winrt::impl::consume_Windows_UI_Xaml_IUIElement<winrt::Windows::UI::Xaml::FrameworkElement>::PointerExited(
        void (__fastcall ****a1)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *), void *, __int64 *),
        void (__fastcall ***a2)(_QWORD, __int64 *, __int64 *),
        __int64 a3,
        _QWORD *a4))(_QWORD, __int64 *, __int64 *)
{
  __int64 v6; // rbx
  void (__fastcall ***v7)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *), void *, __int64 *); // rcx
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+40h] [rbp+8h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64 *, __int64 *); // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v6 = *winrt::impl::consume_Windows_UI_Xaml_IUIElement<winrt::Windows::UI::Xaml::FrameworkElement>::PointerExited(
          (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a1,
          &v9,
          a4);
  v7 = *a1;
  if ( *a1 )
  {
    v10 = 0LL;
    (**v7)(
      (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))v7,
      &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IUIElement>,
      (__int64 *)&v10);
    v11 = v10;
  }
  else
  {
    v11 = 0LL;
  }
  __0__event_revoker_UIUIElement_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BCAA_AA_impl_winrt__QEAA_AEBUIUIElement_Xaml_UI_Windows_2_Uevent_token_2__Z(
    (__int64 *)a2,
    &v11,
    v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  return a2;
}
