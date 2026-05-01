/*
 * XREFs of ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x180223568
 * Callers:
 *     ??1promise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@AEBU1234@AEBU1234@@experimental@std@@UEAA@XZ @ 0x1801ED444 (--1promise_type@-$coroutine_traits@U-$IAsyncOperation@UIRandomAccessStreamReference@Streams@Stor.c)
 *     winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK$_ResumeCoro$1 @ 0x18024EC20 (winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--UseMrtShim_WASDK$_Resu.c)
 *     winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1 @ 0x180283480 (winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_ResumeCoro$1.c)
 *     TaskViewFrame::UpdateWorkAreaAsync$_ResumeCoro$1 @ 0x180285B50 (TaskViewFrame--UpdateWorkAreaAsync$_ResumeCoro$1.c)
 *     ??1promise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UEAA@XZ @ 0x180446370 (--1promise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@.c)
 *     ??_Gpromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UEAAPEAXI@Z @ 0x180446670 (--_Gpromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std.c)
 *     ??_E?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@AEBU1234@AEBU1234@@experimental@std@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@UEAAPEAXI@Z @ 0x18055D150 (--_E-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UIRandomAccessStreamRefer.c)
 *     winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent$_ResumeCoro$1 @ 0x1805B64D0 (winrt--Windows--Internal--Shell--implementation--WaitForShellDesktopSwitchEvent$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

__int64 __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(
        __int64 *a1)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 11));
  if ( a1[10] )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1 + 10);
  __ExceptionPtrDestroy(a1 + 7);
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>::~root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>((__int64)a1);
}
