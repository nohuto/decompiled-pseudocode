/*
 * XREFs of ?ReportReactivatingForDrag@?$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K00@Z @ 0x18038A9AC
 * Callers:
 *     ?ReactivateForDrag@CStartExperienceManager@@UEAAJ_K00@Z @ 0x18038A580 (-ReactivateForDrag@CStartExperienceManager@@UEAAJ_K00@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2<winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController>::ReportReactivatingForDrag(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 (__fastcall ***v7)(_QWORD, void *, __int64 *); // rcx
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  int v12; // [rsp+38h] [rbp-18h] BYREF
  __int128 v13; // [rsp+40h] [rbp-10h]
  __int64 v14; // [rsp+70h] [rbp+20h] BYREF

  v7 = *a1;
  if ( v7 )
  {
    v14 = 0LL;
    v8 = (**v7)(
           v7,
           &winrt::impl::guid_v<winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartController2>,
           &v14);
    v9 = v14;
    v11 = v14;
  }
  else
  {
    v8 = 0;
    v11 = 0LL;
    v9 = 0LL;
  }
  v12 = 0;
  v13 = 0LL;
  winrt::check_hresult((int *)&v14, v8, (__int64)&v12);
  v12 = 0;
  v13 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v9 + 88LL))(v9, a2, a3, a4);
  winrt::check_hresult((int *)&v14, v10, (__int64)&v12);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
}
