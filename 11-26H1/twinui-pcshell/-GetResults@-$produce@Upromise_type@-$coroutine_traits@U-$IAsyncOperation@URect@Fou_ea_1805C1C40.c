/*
 * XREFs of ?GetResults@?$produce@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAUHWND__@@@experimental@std@@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x1805C1C40
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180328B94 (--0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?rethrow_if_failed@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@AEBU1234@AEBU1234@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@IEBAXW4AsyncStatus@Foundation@Windows@3@@Z @ 0x180332FC0 (-rethrow_if_failed@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Wind.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>>::GetResults(
        __int64 a1,
        __m128i *a2)
{
  __int64 v3; // rdi
  int v4; // edx
  __m128i v5; // xmm6
  const struct winrt::impl::slim_source_location *v7; // rax
  __int64 v8; // rdx
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v10[24]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v12; // [rsp+70h] [rbp+8h] BYREF

  v3 = (a1 - 16) & -(__int64)(a1 != 0);
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(v3 + 72));
  v4 = *(_DWORD *)(v3 + 96);
  if ( v4 != 1 )
  {
    try
    {
      winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncAction const &,winrt::Windows::Foundation::IAsyncAction const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::rethrow_if_failed(
        v3,
        v4);
      v7 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v10);
      winrt::hresult_illegal_method_call::hresult_illegal_method_call(
        (winrt::hresult_illegal_method_call *)pExceptionObject,
        v7);
      throw (winrt::hresult_illegal_method_call *)pExceptionObject;
    }
    catch ( ... )
    {
      *(_DWORD *)(v8 + 112) = *winrt::to_hresult(&v12);
      return (unsigned int)v12;
    }
  }
  v5 = _mm_loadu_si128((const __m128i *)(v3 + 104));
  ReleaseSRWLockExclusive_0((PSRWLOCK)(v3 + 72));
  *a2 = v5;
  return 0LL;
}
