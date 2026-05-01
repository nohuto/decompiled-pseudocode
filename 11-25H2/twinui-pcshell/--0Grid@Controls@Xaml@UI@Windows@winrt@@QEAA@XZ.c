/*
 * XREFs of ??0Grid@Controls@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180574D48
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x1805758D4 (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 *     ?CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z @ 0x1805E57D8 (-CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??$call@AEAV_lambda_9a02dbc61a31b6bc534907489be5df7c_@@@?$factory_cache_entry@UGrid@Controls@Xaml@UI@Windows@winrt@@UIGridFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_9a02dbc61a31b6bc534907489be5df7c_@@@Z @ 0x180574234 (--$call@AEAV_lambda_9a02dbc61a31b6bc534907489be5df7c_@@@-$factory_cache_entry@UGrid@Controls@Xam.c)
 *     ??R_lambda_9385b473f465738bc2d277d457f6f118_@@QEBA@AEBUIAcrylicBrushFactory@Media@Xaml@UI@Windows@winrt@@@Z @ 0x180575254 (--R_lambda_9385b473f465738bc2d277d457f6f118_@@QEBA@AEBUIAcrylicBrushFactory@Media@Xaml@UI@Window.c)
 */

winrt::Windows::UI::Xaml::Controls::Grid *__fastcall winrt::Windows::UI::Xaml::Controls::Grid::Grid(
        winrt::Windows::UI::Xaml::Controls::Grid *this)
{
  _QWORD v3[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v4; // [rsp+68h] [rbp+20h] BYREF
  __int64 v5; // [rsp+70h] [rbp+28h] BYREF
  __int64 v6; // [rsp+78h] [rbp+30h] BYREF

  *(_QWORD *)this = 0LL;
  v6 = 0LL;
  v4 = 0LL;
  v3[0] = &v6;
  v3[1] = &v4;
  _InterlockedIncrement64(&qword_18089C288);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Controls::Grid,winrt::Windows::UI::Xaml::Controls::IGridFactory> )
  {
    _lambda_9385b473f465738bc2d277d457f6f118_::operator()(
      v3,
      &v5,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Controls::Grid,winrt::Windows::UI::Xaml::Controls::IGridFactory>);
    _InterlockedDecrement64(&qword_18089C288);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089C288);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Controls::Grid,winrt::Windows::UI::Xaml::Controls::IGridFactory>::call<_lambda_9a02dbc61a31b6bc534907489be5df7c_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
      (__int64)&v5,
      (__int64)v3);
  }
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this, &v5);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v4);
  if ( v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
  return this;
}
