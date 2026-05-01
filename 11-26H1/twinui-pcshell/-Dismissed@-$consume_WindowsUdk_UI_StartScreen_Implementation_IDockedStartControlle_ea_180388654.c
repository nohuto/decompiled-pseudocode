/*
 * XREFs of ?Dismissed@?$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@6@@Foundation@Windows@3@@Z @ 0x180388654
 * Callers:
 *     ?SetDockedStartController@CStartExperienceManager@@UEAAJPEAUIInspectable@@@Z @ 0x18038AFF0 (-SetDockedStartController@CStartExperienceManager@@UEAAJPEAUIInspectable@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$?0AEBUIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@?$weak_ref@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@@winrt@@QEAA@AEBUIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@1@@Z @ 0x18033A994 (--$-0AEBUIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@-$weak_ref@UI.c)
 *     ?Dismissed@?$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@6@@Foundation@Windows@3@@Z @ 0x18038858C (-Dismissed@-$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2@UDockedSta.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2<winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController>::Dismissed(
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
  v6 = *winrt::impl::consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2<winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController>::Dismissed(
          (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a1,
          &v9,
          a4);
  v7 = *a1;
  v10 = 0LL;
  if ( v7 )
    (**v7)(
      (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))v7,
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartController2>,
      (__int64 *)&v10);
  winrt::weak_ref<winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartController2>::weak_ref<winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartController2>(a2);
  a2[1] = v6;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  return a2;
}
