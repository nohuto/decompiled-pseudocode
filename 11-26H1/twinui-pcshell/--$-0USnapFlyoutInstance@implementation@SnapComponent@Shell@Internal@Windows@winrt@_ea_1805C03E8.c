/*
 * XREFs of ??$?0USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@P80123456@EAAXAEBUIInspectable@Foundation@56@0@Z@?$TypedEventHandler@USnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@QEAA@$$QEAU?$weak_ref@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@3@$$QEAP8SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@23@EAAXAEBUIInspectable@123@1@Z@Z @ 0x1805C03E8
 * Callers:
 *     ?Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NIPEAUHWND__@@_N1W4SnapControlType@34567@W4InputDeviceKind@4UI@WindowsUdk@7@PEAUHMONITOR__@@@Z @ 0x1800A0798 (-Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N.c)
 *     ?FinishShow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXURect@Foundation@67@@Z @ 0x18026C20C (-FinishShow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXU.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SnapLayoutPickerExtension,winrt::Windows::Foundation::IInspectable>::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SnapLayoutPickerExtension,winrt::Windows::Foundation::IInspectable>(
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
  *(_QWORD *)v10 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SnapLayoutPickerExtension,winrt::Windows::Foundation::IInspectable>,_lambda_a9d2a8955e09a1d3e51b825b6c10608c_>::`vftable';
  *a1 = v10;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  return a1;
}
