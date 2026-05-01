/*
 * XREFs of ?StartWidgetsOverwatchAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUIAsyncAction@Foundation@56@XZ @ 0x1805D7CF0
 * Callers:
 *     ?NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805D5110 (-NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??0?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4SnapControlType@SnapComponent@Shell@Internal@34@IW4InputDeviceKind@9UI@WindowsUdk@4@PEAUHMONITOR__@@V?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@W4ShowFlags@5@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1805516AC (--0-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVS.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync$_ResumeCoro$1 @ 0x1805D7800 (winrt--Windows--Internal--Shell--implementation--DashboardManager--StartWidgetsOverwatchAsync$_R.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync(
        __int64 a1,
        __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  v4 = operator new(0x160uLL);
  v5 = (__int64)(v4 + 14);
  v4[43] = a1;
  v4[14] = winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync__ResumeCoro_1;
  *((_DWORD *)v4 + 30) = 65538;
  v6 = v4;
  memset_0(v4, 0, 0x68uLL);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,SnapFlyoutHost *,HWND__ *,enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType,unsigned int,enum winrt::WindowsUdk::UI::Shell::InputDeviceKind,HMONITOR__ *,tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>,enum SnapFlyoutHost::ShowFlags>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,SnapFlyoutHost *,HWND__ *,enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType,unsigned int,enum winrt::WindowsUdk::UI::Shell::InputDeviceKind,HMONITOR__ *,tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>,enum SnapFlyoutHost::ShowFlags>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(v5 - 112);
  *v6 = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp *>::promise_type::`vftable';
  *a2 = (__int64)(v6 + 2);
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  v8 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  *(_BYTE *)(v5 + 224) = 0;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync__ResumeCoro_1(v5);
  return a2;
}
