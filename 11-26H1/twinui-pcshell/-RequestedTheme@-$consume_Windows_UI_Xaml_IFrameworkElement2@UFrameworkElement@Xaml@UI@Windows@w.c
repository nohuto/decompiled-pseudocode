/*
 * XREFs of ?RequestedTheme@?$consume_Windows_UI_Xaml_IFrameworkElement2@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBW4ElementTheme@Xaml@UI@Windows@3@@Z @ 0x1800A1098
 * Callers:
 *     ?Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NIPEAUHWND__@@_N1W4SnapControlType@34567@W4InputDeviceKind@4UI@WindowsUdk@7@PEAUHMONITOR__@@@Z @ 0x1800A0798 (-Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N.c)
 *     ?ApplyTheme@@YAXPE$AAVUIElement@Xaml@UI@Windows@@@Z @ 0x1800A0FE0 (-ApplyTheme@@YAXPE$AAVUIElement@Xaml@UI@Windows@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement2<winrt::Windows::UI::Xaml::FrameworkElement>::RequestedTheme(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        unsigned int *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  unsigned int v4; // eax
  __int64 v5; // rbx
  unsigned int v6; // eax
  int v7; // [rsp+20h] [rbp-20h] BYREF
  __int128 v8; // [rsp+28h] [rbp-18h]
  __int64 v9; // [rsp+50h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF

  v3 = *a1;
  if ( v3 )
  {
    v9 = 0LL;
    v4 = (**v3)(v3, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IFrameworkElement2>, &v9);
    v5 = v9;
    v10 = v9;
  }
  else
  {
    v4 = 0;
    v10 = 0LL;
    v5 = 0LL;
  }
  v7 = 0;
  v8 = 0LL;
  winrt::check_hresult(&v9, v4, &v7);
  v7 = 0;
  v8 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 56LL))(v5, *a2);
  winrt::check_hresult(&v9, v6, &v7);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
}
