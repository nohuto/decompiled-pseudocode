/*
 * XREFs of ?get@?$weak_ref@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18027AF0C
 * Callers:
 *     _lambda_e61605ece55422ba9fa5b55a2642b1df_::operator()_winrt::Windows::Foundation::IAsyncAction_ @ 0x1805F1700 (_lambda_e61605ece55422ba9fa5b55a2642b1df_--operator()_winrt--Windows--Foundation--IAsyncAction_.c)
 *     _lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_::operator()_winrt::Windows::Foundation::IAsyncAction_ @ 0x1805F1818 (_lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_--operator()_winrt--Windows--Foundation--IAsyncAction_.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_02d8b57749828165b34285cde3764975___::Invoke @ 0x1805F5E70 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1805F5E70.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_0c278ba272db598cb3813ab71714e0df___::Invoke @ 0x1805F5ED0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1805F5ED0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180029578 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IUnknown *__fastcall winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>::get(
        __int64 *a1,
        struct IUnknown *a2)
{
  __int64 v2; // rsi
  void (__fastcall *v4)(__int64, __int64 *, void **); // rbx
  void **v5; // rax
  struct IUnknownVtbl *v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    v8 = 0LL;
    v4 = *(void (__fastcall **)(__int64, __int64 *, void **))(*(_QWORD *)v2 + 24LL);
    v5 = winrt::put_abi((winrt *)&v8, a2);
    v4(v2, &winrt::impl::guid_v<winrt::Windows::Internal::Shell::IMeetAndChatManager>, v5);
    v6 = 0LL;
    if ( v8 )
    {
      v6 = (struct IUnknownVtbl *)(v8 - 8);
      v8 = 0LL;
    }
    a2->lpVtbl = v6;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  }
  else
  {
    a2->lpVtbl = 0LL;
  }
  return a2;
}
