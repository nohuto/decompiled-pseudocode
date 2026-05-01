/*
 * XREFs of ?ToggleFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805F7E74
 * Callers:
 *     ?OnMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z @ 0x1802120B0 (-OnMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1805F4838 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 *     ?HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@@Z @ 0x1805F5484 (-HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@.c)
 *     ?ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@W4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805F6ED0 (-ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellVi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::ToggleFlyoutVisibility(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *a1)
{
  __int64 (__fastcall **v2)(_QWORD, __int64); // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v3; // [rsp+28h] [rbp-10h]
  __int64 *v4; // [rsp+50h] [rbp+18h] BYREF

  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureFlyoutView((__int64)a1, &v2);
  if ( (*((unsigned __int8 (__fastcall **)(__int64 (__fastcall **)(_QWORD, __int64)))*v2 + 1))(v2) )
  {
    winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::HideMACFlyout(a1, 0LL);
  }
  else
  {
    v4 = 0LL;
    winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::ShowMACFlyout((RTL_SRWLOCK *)a1, &v4, 2u);
  }
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
