/*
 * XREFs of winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::_promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_ @ 0x1803422B0
 * Callers:
 *     std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type::_promise_type @ 0x180342E5C (std--experimental--coroutine_traits_winrt--Windows--Foundation--IAsyncAction__lambda_ca9df4dcfe6.c)
 *     _lambda_ad4fdaeda6be1b81b98d00a1be3a64f1_$_ResumeCoro$1::operator() @ 0x180343220 (_lambda_ad4fdaeda6be1b81b98d00a1be3a64f1_$_ResumeCoro$1--operator().c)
 *     _lambda_ca9df4dcfe6d5cd8540c8434d0f06187_$_ResumeCoro$1::operator() @ 0x180343470 (_lambda_ca9df4dcfe6d5cd8540c8434d0f06187_$_ResumeCoro$1--operator().c)
 *     _lambda_6a8bd4d85aaf6b8b5565fde26477aaf5_$_ResumeCoro$1::operator() @ 0x1803437E0 (_lambda_6a8bd4d85aaf6b8b5565fde26477aaf5_$_ResumeCoro$1--operator().c)
 *     _lambda_6f0ec96f73276b26c622c449cb3cd9b5_$_ResumeCoro$1::operator() @ 0x180343A50 (_lambda_6f0ec96f73276b26c622c449cb3cd9b5_$_ResumeCoro$1--operator().c)
 *     _lambda_6f72b8d44943172be67b057af8fb054b_$_ResumeCoro$1::operator() @ 0x180343CB0 (_lambda_6f72b8d44943172be67b057af8fb054b_$_ResumeCoro$1--operator().c)
 *     _lambda_939cc389e5d3bee984e430b9134c7b2f_$_ResumeCoro$1::operator() @ 0x180344000 (_lambda_939cc389e5d3bee984e430b9134c7b2f_$_ResumeCoro$1--operator().c)
 *     _lambda_9d9c0f7c90154d0f8adafe78b5b5a9cf_$_ResumeCoro$1::operator() @ 0x180344270 (_lambda_9d9c0f7c90154d0f8adafe78b5b5a9cf_$_ResumeCoro$1--operator().c)
 *     _lambda_a46c03df8e345f39007d0c0666af0d28_$_ResumeCoro$1::operator() @ 0x1803444E0 (_lambda_a46c03df8e345f39007d0c0666af0d28_$_ResumeCoro$1--operator().c)
 *     std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type::_scalar_deleting_destructor_ @ 0x1803452B0 (std--experimental--coroutine_traits_winrt--Windows--Foundation--IAsyncAction__lambd_ea_1803452B0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

__int64 __fastcall winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::_promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_(
        __int64 *a1)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 11));
  if ( a1[10] )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1 + 10);
  __ExceptionPtrDestroy(a1 + 7);
  return winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncInfo_::_root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncInfo_(a1);
}
