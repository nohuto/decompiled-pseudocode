/*
 * XREFs of ??1promise_type@?$coroutine_traits@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@PEAVJointResize@@@experimental@std@@UEAA@XZ @ 0x180537A44
 * Callers:
 *     ??_Epromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@UEAAPEAXI@Z @ 0x180537D00 (--_Epromise_type@-$coroutine_traits@U-$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Wind.c)
 *     JointResize::EnsureTileCollectionAsync$_ResumeCoro$1 @ 0x180538470 (JointResize--EnsureTileCollectionAsync$_ResumeCoro$1.c)
 *     ??_Epromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@UEAAPEAXI@Z @ 0x1805EE590 (--_Epromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IReference@_N@Foundation@Windows@winrt.c)
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x1805F0510 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1 @ 0x1805FDEC0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackContentAsync$_Resum.c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180601CC0 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x1806517D0 (Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1.c)
 *     _JointResize::EnsureTileCollectionAsync_::_1_::dtor$1 @ 0x1806F3AC1 (_JointResize--EnsureTileCollectionAsync_--_1_--dtor$1.c)
 *     _RequestNotificationPinConsentAsync_::_1_::dtor$1 @ 0x1806FF270 (_RequestNotificationPinConsentAsync_--_1_--dtor$1.c)
 *     _CLauncherTipContextMenu::GetMenuItemsAsyncHelper_::_1_::dtor$1 @ 0x180700072 (_CLauncherTipContextMenu--GetMenuItemsAsyncHelper_--_1_--dtor$1.c)
 *     _Util::TryOpenFileMappingAsStreamForWindowAsync_::_1_::dtor$3 @ 0x18070423D (_Util--TryOpenFileMappingAsStreamForWindowAsync_--_1_--dtor$3.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,JointResize *>::promise_type::~promise_type(
        __int64 *a1)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 13));
  return winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(a1);
}
