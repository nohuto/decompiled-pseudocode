/*
 * XREFs of _winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction_TaskViewFrame___IImmersiveMonitor___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::unhandled_exception_::_1_::catch$3 @ 0x1806ED9DA
 * Callers:
 *     <none>
 * Callees:
 *     ?store@?$_Atomic_storage@W4AsyncStatus@Foundation@Windows@winrt@@$03@std@@QEAAXW4AsyncStatus@Foundation@Windows@winrt@@W4memory_order@2@@Z @ 0x1800E681C (-store@-$_Atomic_storage@W4AsyncStatus@Foundation@Windows@winrt@@$03@std@@QEAAXW4AsyncStatus@Fou.c)
 */

__int64 __fastcall winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction_TaskViewFrame___IImmersiveMonitor___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::unhandled_exception_::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  std::_Atomic_storage<enum winrt::Windows::Foundation::AsyncStatus,4>::store(
    (_DWORD *)(*(_QWORD *)(a2 + 64) + 96LL),
    2);
  return 0LL;
}
