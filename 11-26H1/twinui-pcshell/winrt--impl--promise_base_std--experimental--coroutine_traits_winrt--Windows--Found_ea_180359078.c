/*
 * XREFs of winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::final_suspend_awaiter::await_suspend @ 0x180359078
 * Callers:
 *     _lambda_ad4fdaeda6be1b81b98d00a1be3a64f1_$_ResumeCoro$1::operator() @ 0x180343220 (_lambda_ad4fdaeda6be1b81b98d00a1be3a64f1_$_ResumeCoro$1--operator().c)
 *     _lambda_ca9df4dcfe6d5cd8540c8434d0f06187_$_ResumeCoro$1::operator() @ 0x180343470 (_lambda_ca9df4dcfe6d5cd8540c8434d0f06187_$_ResumeCoro$1--operator().c)
 *     _lambda_6a8bd4d85aaf6b8b5565fde26477aaf5_$_ResumeCoro$1::operator() @ 0x1803437E0 (_lambda_6a8bd4d85aaf6b8b5565fde26477aaf5_$_ResumeCoro$1--operator().c)
 *     _lambda_6f0ec96f73276b26c622c449cb3cd9b5_$_ResumeCoro$1::operator() @ 0x180343A50 (_lambda_6f0ec96f73276b26c622c449cb3cd9b5_$_ResumeCoro$1--operator().c)
 *     _lambda_6f72b8d44943172be67b057af8fb054b_$_ResumeCoro$1::operator() @ 0x180343CB0 (_lambda_6f72b8d44943172be67b057af8fb054b_$_ResumeCoro$1--operator().c)
 *     _lambda_939cc389e5d3bee984e430b9134c7b2f_$_ResumeCoro$1::operator() @ 0x180344000 (_lambda_939cc389e5d3bee984e430b9134c7b2f_$_ResumeCoro$1--operator().c)
 *     _lambda_9d9c0f7c90154d0f8adafe78b5b5a9cf_$_ResumeCoro$1::operator() @ 0x180344270 (_lambda_9d9c0f7c90154d0f8adafe78b5b5a9cf_$_ResumeCoro$1--operator().c)
 *     _lambda_a46c03df8e345f39007d0c0666af0d28_$_ResumeCoro$1::operator() @ 0x1803444E0 (_lambda_a46c03df8e345f39007d0c0666af0d28_$_ResumeCoro$1--operator().c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 *     winrt::impl::invoke_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool____winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void__enum_winrt::Windows::Foundation::AsyncStatus_ @ 0x18033FEC0 (winrt--impl--invoke_winrt--Windows--Foundation--AsyncOperationCompletedHandler_winrt--Windows--F.c)
 *     winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncInfo_::subtract_reference @ 0x18035A184 (winrt--impl--root_implements_std--experimental--coroutine_traits_winrt--Windows--Fo_ea_18035A184.c)
 */

bool __fastcall winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::final_suspend_awaiter::await_suspend(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rdi
  __int64 *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = *a1;
  v5 = 0LL;
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(v2 + 72));
  LODWORD(v6) = *(_DWORD *)(v2 + 96);
  if ( !(_DWORD)v6 )
  {
    LODWORD(v6) = 1;
    *(_DWORD *)(v2 + 96) = 1;
  }
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)&v5, (__int64 *)(v2 + 80));
  ReleaseSRWLockExclusive_0((PSRWLOCK)(v2 + 72));
  if ( v5 )
  {
    winrt::impl::invoke_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool____winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void__enum_winrt::Windows::Foundation::AsyncStatus_(
      &v5,
      v2,
      (unsigned int *)&v6);
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v5);
  }
  return (unsigned int)winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncInfo_::subtract_reference(*a1) != 0;
}
