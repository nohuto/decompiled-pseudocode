/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_a9532b1fa26d741b99fb0a1f5016c730___::Invoke @ 0x1805D17B0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?get@?$weak_ref@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x180283BDC (-get@-$weak_ref@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     ?HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@@Z @ 0x1805D0D40 (-HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_a9532b1fa26d741b99fb0a1f5016c730___::Invoke(
        __int64 a1)
{
  __int64 result; // rax
  struct IUnknown v3; // [rsp+30h] [rbp+8h] BYREF

  winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>::get((__int64 *)(a1 + 24), &v3);
  try
  {
    if ( v3.lpVtbl )
      winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::HideMACFlyout(
        *(winrt::Windows::Internal::Shell::implementation::MeetAndChatManager **)(a1 + 16),
        0LL);
    if ( v3.lpVtbl )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
