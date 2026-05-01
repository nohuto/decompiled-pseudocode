/*
 * XREFs of ?ErrorCode@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@34@AEAUMeetAndChatFallbackContent@7834@@experimental@std@@U?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AUhresult@3@XZ @ 0x180452DBC
 * Callers:
 *     ?get_ErrorCode@?$produce@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVCVirtualDesktopManager@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEAUhresult@3@@Z @ 0x180453C40 (-get_ErrorCode@-$produce@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@_ea_180453C40.c)
 * Callees:
 *     ?load@?$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z @ 0x1800E680C (-load@-$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z.c)
 *     ?rethrow_if_failed@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@AEBU1234@AEBU1234@@experimental@std@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@IEBAXW4AsyncStatus@Foundation@Windows@3@@Z @ 0x18028D7D8 (-rethrow_if_failed@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UIRandomAc.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,winrt::Windows::Internal::Shell::MeetAndChatFallbackContent &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,void>::ErrorCode(
        __int64 a1,
        _DWORD *a2)
{
  RTL_SRWLOCK *v4; // rbx
  int v5; // eax
  _DWORD *result; // rax

  v4 = (RTL_SRWLOCK *)(a1 + 72);
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 72));
  v5 = std::_Atomic_storage<unsigned int,4>::load((unsigned int *)(a1 + 96));
  try
  {
    winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference> const &,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference> const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,void>::rethrow_if_failed(
      a1,
      v5);
    *a2 = 0;
    ReleaseSRWLockExclusive_0(v4);
    result = a2;
  }
  catch ( ... )
  {
    winrt::to_hresult(a2);
    return a2;
  }
  return result;
}
