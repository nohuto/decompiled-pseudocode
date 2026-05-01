/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::Foundation::Point___lambda_95fe7ae5c51dffe541392b6a2acce5a3___::Invoke @ 0x180590110
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1800A6BC0 (--1-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1801C872C (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ?HasThreadAccess@?$consume_Windows_System_IDispatcherQueue2@UDispatcherQueue@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802719B4 (-HasThreadAccess@-$consume_Windows_System_IDispatcherQueue2@UDispatcherQueue@System@Windows@winr.c)
 *     ?ShowSnapBarOnMonitor@SnapFlyoutHost@@AEAAXUPoint@Foundation@Windows@winrt@@@Z @ 0x180272AAC (-ShowSnapBarOnMonitor@SnapFlyoutHost@@AEAAXUPoint@Foundation@Windows@winrt@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::Foundation::Point___lambda_95fe7ae5c51dffe541392b6a2acce5a3___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  struct IUnknownVtbl *lpVtbl; // rbx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown v8; // [rsp+40h] [rbp+8h] BYREF

  winrt::weak_ref<SnapFlyoutHost>::get((__int64 *)(a1 + 16), &v8);
  try
  {
    lpVtbl = v8.lpVtbl;
    if ( v8.lpVtbl )
    {
      if ( !winrt::impl::consume_Windows_System_IDispatcherQueue2<winrt::Windows::System::DispatcherQueue>::HasThreadAccess(&v8.lpVtbl[4]) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x28,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
          v5);
      SnapFlyoutHost::ShowSnapBarOnMonitor((__int64)lpVtbl, a3);
    }
    winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v8);
  }
  return result;
}
