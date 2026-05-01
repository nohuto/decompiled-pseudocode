/*
 * XREFs of ?GetResults@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1805389A4
 * Callers:
 *     ?GetResults@?$produce@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180538950 (-GetResults@-$produce@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IReference@_N@Found.c)
 * Callees:
 *     ?rethrow_if_failed@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@AEBU1234@AEBU1234@@experimental@std@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@IEBAXW4AsyncStatus@Foundation@Windows@3@@Z @ 0x18028D7D8 (-rethrow_if_failed@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UIRandomAc.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180328B94 (--0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,void>::GetResults(
        __int64 a1,
        _QWORD *a2)
{
  RTL_SRWLOCK *v4; // rbx
  int v5; // edx
  __int64 v6; // rax
  const struct winrt::impl::slim_source_location *v8; // rax
  _BYTE pExceptionObject[24]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v10[32]; // [rsp+40h] [rbp-28h] BYREF

  v4 = (RTL_SRWLOCK *)(a1 + 72);
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 72));
  v5 = *(_DWORD *)(a1 + 96);
  if ( v5 != 1 )
  {
    winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference> const &,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference> const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,void>::rethrow_if_failed(
      a1,
      v5);
    v8 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v10);
    winrt::hresult_illegal_method_call::hresult_illegal_method_call(
      (winrt::hresult_illegal_method_call *)pExceptionObject,
      v8);
    throw (winrt::hresult_illegal_method_call *)pExceptionObject;
  }
  v6 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = 0LL;
  *a2 = v6;
  ReleaseSRWLockExclusive_0(v4);
  return a2;
}
