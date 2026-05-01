/*
 * XREFs of ??$?0USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@P80123456@EAAXAEBUIInspectable@Foundation@56@0@Z@RoutedEventHandler@Xaml@UI@Windows@winrt@@QEAA@$$QEAU?$weak_ref@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@4@$$QEAP8SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@34@EAAXAEBUIInspectable@Foundation@34@1@Z@Z @ 0x18059C250
 * Callers:
 *     ?Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NIPEAUHWND__@@_N1W4SnapControlType@34567@W4InputDeviceKind@4UI@WindowsUdk@7@PEAUHMONITOR__@@@Z @ 0x1801035C4 (-Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::UI::Xaml::RoutedEventHandler::RoutedEventHandler(
        _QWORD *a1,
        __int64 *a2,
        __int128 *a3)
{
  __int128 v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+28h] [rbp-20h]
  char *v10; // [rsp+50h] [rbp+8h]

  v4 = *a3;
  v5 = *a2;
  *a2 = 0LL;
  v8 = v5;
  v9 = v4;
  v10 = (char *)operator new(0x28uLL);
  *((_DWORD *)v10 + 2) = 1;
  v6 = v8;
  v8 = 0LL;
  *((_QWORD *)v10 + 2) = v6;
  *(_OWORD *)(v10 + 24) = v9;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v10 = &winrt::impl::delegate<winrt::Windows::UI::Xaml::RoutedEventHandler,_lambda_41627dfc51315f72f0b35d11aeb636b7_>::`vftable';
  *a1 = v10;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  return a1;
}
