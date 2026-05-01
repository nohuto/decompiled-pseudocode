/*
 * XREFs of ?DragStarting@?$consume_Windows_UI_Xaml_IUIElement3@UListViewBase@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UUIElement@Xaml@UI@Windows@winrt@@UDragStartingEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1806AE000
 * Callers:
 *     ?ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ @ 0x1806AF810 (-ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$from_com_ref@AEBUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@?$weak_ref@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@winrt@@AEAAXAEBUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@1@@Z @ 0x1801CFED8 (--$from_com_ref@AEBUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@-$weak_ref@UIDeskto.c)
 *     ?DragStarting@?$consume_Windows_UI_Xaml_IUIElement3@UListViewBase@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UUIElement@Xaml@UI@Windows@winrt@@UDragStartingEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1806ADF38 (-DragStarting@-$consume_Windows_UI_Xaml_IUIElement3@UListViewBase@Controls@Xaml@UI@Windows@winrt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_UI_Xaml_IUIElement3<winrt::Windows::UI::Xaml::Controls::ListViewBase>::DragStarting(
        void (__fastcall ****a1)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *), void *, __int64 *),
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v6; // rbx
  void (__fastcall ***v7)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *), void *, __int64 *); // rcx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  void (__fastcall ***v10)(_QWORD, const char *, __int64 *); // [rsp+48h] [rbp+10h] BYREF

  v10 = (void (__fastcall ***)(_QWORD, const char *, __int64 *))a2;
  v6 = *winrt::impl::consume_Windows_UI_Xaml_IUIElement3<winrt::Windows::UI::Xaml::Controls::ListViewBase>::DragStarting(
          (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a1,
          &v9,
          a4);
  v7 = *a1;
  v10 = 0LL;
  if ( v7 )
    (**v7)(
      (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))v7,
      &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IUIElement3>,
      (__int64 *)&v10);
  *(_QWORD *)a2 = 0LL;
  winrt::weak_ref<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>::from_com_ref<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource const &>(
    (__int64 *)a2,
    &v10);
  *(_QWORD *)(a2 + 8) = v6;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  return a2;
}
