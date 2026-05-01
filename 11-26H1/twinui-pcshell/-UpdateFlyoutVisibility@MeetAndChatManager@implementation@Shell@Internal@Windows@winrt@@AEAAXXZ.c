/*
 * XREFs of ?UpdateFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805F7FFC
 * Callers:
 *     _lambda_e61605ece55422ba9fa5b55a2642b1df_::operator()_winrt::Windows::Foundation::IAsyncAction_ @ 0x1805F1700 (_lambda_e61605ece55422ba9fa5b55a2642b1df_--operator()_winrt--Windows--Foundation--IAsyncAction_.c)
 *     _lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_::operator()_winrt::Windows::Foundation::IAsyncAction_ @ 0x1805F1818 (_lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_--operator()_winrt--Windows--Foundation--IAsyncAction_.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1805F4838 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 *     ?ReportFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4ViewVisibility@3UI@WindowsUdk@6@@Z @ 0x1805F6B40 (-ReportFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::UpdateFlyoutVisibility(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this)
{
  char v2; // al
  __int64 (__fastcall **v3)(_QWORD, __int64); // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v4; // [rsp+28h] [rbp-10h]

  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureFlyoutView((__int64)this, &v3);
  v2 = (*((__int64 (__fastcall **)(__int64 (__fastcall **)(_QWORD, __int64)))*v3 + 1))(v3);
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::ReportFlyoutVisibility((__int64)this, v2 == 0);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
}
