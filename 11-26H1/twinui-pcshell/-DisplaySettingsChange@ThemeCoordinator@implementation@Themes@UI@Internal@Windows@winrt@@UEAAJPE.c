/*
 * XREFs of ?DisplaySettingsChange@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1806062D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1801C46F8 (--1-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 *     ?GetBackgroundHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA?AU?$com_ptr@USharedDesktopBackgroundVisualHost@@@7@_K@Z @ 0x18060637C (-GetBackgroundHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA-A.c)
 *     ?GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA_KW4BackgroundIdentifier@34567@_N@Z @ 0x180606450 (-GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA.c)
 *     ?GetPrimaryMonitorSize@@YA?AUSize@Foundation@Windows@winrt@@XZ @ 0x180606768 (-GetPrimaryMonitorSize@@YA-AUSize@Foundation@Windows@winrt@@XZ.c)
 *     ?Size@SharedDesktopBackgroundVisualHost@@QEAAXAEBU0Foundation@Windows@winrt@@@Z @ 0x18060BCD0 (-Size@SharedDesktopBackgroundVisualHost@@QEAAXAEBU0Foundation@Windows@winrt@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::DisplaySettingsChange(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v5; // r8
  __int64 BackgroundHostForType; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF
  SharedDesktopBackgroundVisualHost *v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0;
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 56LL))(a2, &v9) >= 0 )
  {
    if ( v9 )
    {
      if ( (a3 & 0x2B) != 0 )
      {
        LOBYTE(v5) = 1;
        BackgroundHostForType = winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::GetBackgroundHostForType(
                                  a1,
                                  1LL,
                                  v5);
        if ( BackgroundHostForType != 0xFFFFFFFFLL )
        {
          winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::GetBackgroundHostForId(
            a1,
            &v10,
            BackgroundHostForType);
          if ( v10 )
          {
            GetPrimaryMonitorSize(v8);
            SharedDesktopBackgroundVisualHost::Size(v10, (const struct winrt::Windows::Foundation::Size *)v8);
          }
          winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(&v10);
        }
      }
    }
  }
  return 0LL;
}
