/*
 * XREFs of ?set_completed@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@AEBU1234@AEBU1234@@experimental@std@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x1800E667C
 * Callers:
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@AEBU1234@AEBU1234@@experimental@std@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1800E64B0 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOp.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1800E672C (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1800E672C.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$invoke@U?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@U?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@4@W4AsyncStatus@234@@impl@winrt@@YA_NAEBU?$AsyncOperationCompletedHandler@_N@Foundation@Windows@1@AEBU?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@01@AEBW4AsyncStatus@341@@Z @ 0x1800E636C (--$invoke@U-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@U-$promise_base@Upromis.c)
 *     ?load@?$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z @ 0x1800E680C (-load@-$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z.c)
 *     ?store@?$_Atomic_storage@W4AsyncStatus@Foundation@Windows@winrt@@$03@std@@QEAAXW4AsyncStatus@Foundation@Windows@winrt@@W4memory_order@2@@Z @ 0x1800E681C (-store@-$_Atomic_storage@W4AsyncStatus@Foundation@Windows@winrt@@$03@std@@QEAAXW4AsyncStatus@Fou.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 */

void __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference> const &,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference> const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,void>::set_completed(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rsi
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  v6[0] = 0LL;
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 72));
  if ( !(unsigned int)std::_Atomic_storage<unsigned int,4>::load(a1 + 96, 0LL) )
    std::_Atomic_storage<enum winrt::Windows::Foundation::AsyncStatus,4>::store(v3);
  v4 = (__int64 *)(a1 + 80);
  v5 = 0LL;
  if ( v6 != (__int64 *)(a1 + 80) )
  {
    v2 = *v4;
    *v4 = 0LL;
    v5 = v2;
    v6[0] = v2;
  }
  ReleaseSRWLockExclusive_0((PSRWLOCK)(a1 + 72));
  if ( v5 )
    winrt::impl::invoke<winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>,winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>,enum winrt::Windows::Foundation::AsyncStatus>(
      (__int64)v6,
      a1);
  if ( v2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
}
