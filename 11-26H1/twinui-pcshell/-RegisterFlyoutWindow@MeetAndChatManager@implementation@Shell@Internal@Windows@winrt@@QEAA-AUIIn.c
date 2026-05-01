/*
 * XREFs of ?RegisterFlyoutWindow@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUIInspectable@Foundation@56@AEBUWindowId@WindowManagement@ApplicationModel@456@AEBUhstring@6@@Z @ 0x1805F68CC
 * Callers:
 *     ?RegisterFlyoutWindow@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@PEAXPEAPEAX@Z @ 0x1805F6860 (-RegisterFlyoutWindow@-$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1805F4838 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 *     ?HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@@Z @ 0x1805F5484 (-HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
struct IInspectable __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::RegisterFlyoutWindow(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this,
        const struct winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId *a2,
        const struct winrt::hstring *a3,
        _QWORD *a4)
{
  __int64 (__fastcall **v8)(_QWORD, __int64); // rbx
  HWND v9; // rdi
  __int64 (__fastcall **v11)(_QWORD, __int64); // [rsp+38h] [rbp-30h] BYREF
  std::_Ref_count_base *v12; // [rsp+40h] [rbp-28h]

  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureFlyoutView((__int64)this, &v11);
  v8 = v11;
  (*((void (__fastcall **)(__int64 (__fastcall **)(_QWORD, __int64)))*v11 + 7))(v11);
  v9 = (HWND)*(int *)a3;
  (*((void (__fastcall **)(__int64 (__fastcall **)(_QWORD, __int64), const struct winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId *, HWND, _QWORD *))*v8
   + 5))(
    v8,
    a2,
    v9,
    a4);
  if ( !*a4 )
    winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::HideMACFlyout(this, v9);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  return (struct IInspectable)a2;
}
