/*
 * XREFs of ?RegisterFlyoutWindow@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUIInspectable@Foundation@56@AEBUWindowId@WindowManagement@ApplicationModel@456@AEBUhstring@6@@Z @ 0x1805D1EB8
 * Callers:
 *     ?RegisterFlyoutWindow@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@PEAXPEAPEAX@Z @ 0x1805D1E50 (-RegisterFlyoutWindow@-$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1805D0108 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 *     ?HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@@Z @ 0x1805D0D40 (-HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
struct IInspectable __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::RegisterFlyoutWindow(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this,
        const struct winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId *a2,
        const struct winrt::hstring *a3,
        _QWORD *a4)
{
  PVOID Ptr; // rbx
  HWND v9; // rdi
  RTL_SRWLOCK v11; // [rsp+38h] [rbp-30h] BYREF
  std::_Ref_count_base *v12; // [rsp+40h] [rbp-28h]

  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureFlyoutView((__int64)this, &v11);
  Ptr = v11.Ptr;
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)v11.Ptr + 48LL))(v11.Ptr);
  v9 = (HWND)*(int *)a3;
  (*(void (__fastcall **)(PVOID, const struct winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId *, HWND, _QWORD *))(*(_QWORD *)Ptr + 32LL))(
    Ptr,
    a2,
    v9,
    a4);
  if ( !*a4 )
    winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::HideMACFlyout(this, v9);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  return (struct IInspectable)a2;
}
