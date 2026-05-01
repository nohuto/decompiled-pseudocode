/*
 * XREFs of winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::unhandled_exception @ 0x18058384C
 * Callers:
 *     __lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_ResumeCoro$1::operator()_::_1_::catch$6 @ 0x1806F5EFC (__lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_ResumeCoro$1--operator()_--_1_--catch$6.c)
 *     __anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1_::_1_::catch$26 @ 0x1806FE6F6 (__anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$1_--_1_--catch$26.c)
 * Callees:
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18028D81C (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 *     ?current_exception@std@@YA?AVexception_ptr@1@XZ @ 0x180330E80 (-current_exception@std@@YA-AVexception_ptr@1@XZ.c)
 */

void __fastcall winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::unhandled_exception(
        RTL_SRWLOCK *a1)
{
  _QWORD *v2; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF
  RTL_SRWLOCK *SRWLock; // [rsp+48h] [rbp+10h]

  SRWLock = a1 + 9;
  _Platform_AcquireSRWLockExclusive(a1 + 9);
  v2 = std::current_exception(&v3);
  __ExceptionPtrAssign(&a1[7], v2);
  __ExceptionPtrDestroy(&v3);
  v3 = 0LL;
  __ExceptionPtrCopy(&v3, &a1[7]);
  std::rethrow_exception(&v3);
  ReleaseSRWLockExclusive_0(SRWLock);
}
