/*
 * XREFs of ?ReportReactivatingForDrag@?$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K00@Z @ 0x18038361C
 * Callers:
 *     ?ReactivateForDrag@CStartExperienceManager@@UEAAJ_K00@Z @ 0x180383200 (-ReactivateForDrag@CStartExperienceManager@@UEAAJ_K00@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+38h] [rbp-28h] BYREF
  int v13; // [rsp+40h] [rbp-20h] BYREF
  __int128 v14; // [rsp+48h] [rbp-18h]
  int v15; // [rsp+80h] [rbp+20h] BYREF

  v7 = *a1;
  if ( v7 )
  {
    v11 = 0LL;
    v8 = (**v7)(
           v7,
           &winrt::impl::guid_v<winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartController2>,
           &v11);
    v9 = v11;
    v12 = v11;
  }
  else
  {
    v8 = 0;
    v12 = 0LL;
    v9 = 0LL;
  }
  v13 = 0;
  v14 = 0LL;
  winrt::check_hresult(&v15, v8, (__int64)&v13);
  v13 = 0;
  v14 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v9 + 88LL))(v9, a2, a3, a4);
  winrt::check_hresult(&v15, v10, (__int64)&v13);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
}
