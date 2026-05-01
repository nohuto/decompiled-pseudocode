/*
 * XREFs of ?CreateShowShellViewOptions@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AUShowShellViewOptions@4UI@WindowsUdk@7@W4ShellView@49WindowsUdk@7@_KUPoint@Foundation@67@AEBUGestureAnimationData@Input@9WindowsUdk@7@@Z @ 0x18069BE40
 * Callers:
 *     ?AnimateView@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@QEAAXAEBW4ShellView@4UI@WindowsUdk@7@AEBUShellViewCoordinator@49WindowsUdk@7@_KAEBUGestureAnimationData@Input@9WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x18069BBD8 (-AnimateView@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@Q.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??0ShellViewAnimationProperties@Shell@UI@WindowsUdk@winrt@@QEAA@_KAEBUGestureAnimationData@Input@234@@Z @ 0x18029D9D8 (--0ShellViewAnimationProperties@Shell@UI@WindowsUdk@winrt@@QEAA@_KAEBUGestureAnimationData@Input.c)
 *     ??0ShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x1802A73D8 (--0ShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?PlatedSizeInRawPixels@?$consume_WindowsUdk_UI_StartScreen_ILogoLoadOptions@UILogoLoadOptions@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUSize@Foundation@Windows@3@@Z @ 0x1805398D8 (-PlatedSizeInRawPixels@-$consume_WindowsUdk_UI_StartScreen_ILogoLoadOptions@UILogoLoadOptions@St.c)
 *     ?Context@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180590BE4 (-Context@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@Win.c)
 *     ?TransferForegroundRights@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions3@UShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180593230 (-TransferForegroundRights@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions3@UShowShellViewOpt.c)
 *     ?AnimationProperties@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions2@UShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUShellViewAnimationProperties@Shell@UI@WindowsUdk@3@@Z @ 0x18069BD84 (-AnimationProperties@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions2@UShowShel_ea_18069BD84.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_58936295@@@details@wil@@QEAA_NXZ @ 0x18069C1C0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_58936295@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
winrt::WindowsUdk::UI::Shell::ShowShellViewOptions *__fastcall winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator::CreateShowShellViewOptions(
        winrt::WindowsUdk::UI::Shell::ShowShellViewOptions *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        struct winrt::WindowsUdk::UI::Input::GestureAnimationData *a5)
{
  __int64 v8; // rcx
  int v9; // eax
  char v10; // dl
  const unsigned __int16 *v11; // rdx
  __int64 v13; // [rsp+28h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+38h] [rbp-28h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h]
  int v17; // [rsp+88h] [rbp+28h] BYREF

  v14 = a4;
  winrt::WindowsUdk::UI::Shell::ShowShellViewOptions::ShowShellViewOptions(a1);
  winrt::WindowsUdk::UI::Shell::ShellViewAnimationProperties::ShellViewAnimationProperties(
    (winrt::WindowsUdk::UI::Shell::ShellViewAnimationProperties *)&v13,
    a3,
    a5);
  winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions2<winrt::WindowsUdk::UI::Shell::ShowShellViewOptions>::AnimationProperties(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a1,
    &v13);
  winrt::impl::consume_WindowsUdk_UI_StartScreen_ILogoLoadOptions<winrt::WindowsUdk::UI::StartScreen::ILogoLoadOptions>::PlatedSizeInRawPixels(
    (__int64 *)a1,
    (unsigned int *)&v14);
  v8 = *(_QWORD *)a1;
  LODWORD(v15) = 0;
  v16 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 56LL))(v8, 0LL);
  winrt::check_hresult(&v17, v9, (__int64)&v15);
  switch ( a2 )
  {
    case 2:
      v11 = L"Drag";
LABEL_8:
      winrt::param::hstring::hstring((winrt::param::hstring *)&v15, v11);
      winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::Context(
        (__int64 *)a1,
        &v15);
      break;
    case 6:
      winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions3<winrt::WindowsUdk::UI::Shell::ShowShellViewOptions>::TransferForegroundRights(
        (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a1,
        v10);
      break;
    case 30:
      winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions3<winrt::WindowsUdk::UI::Shell::ShowShellViewOptions>::TransferForegroundRights(
        (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a1,
        v10);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_58936295>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_58936295>::GetImpl'::`2'::impl) )
      {
        v11 = L"RightEdgeGesture";
        goto LABEL_8;
      }
      break;
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  return a1;
}
