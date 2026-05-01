/*
 * XREFs of ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1802C34B0
 * Callers:
 *     ?rethrow_if_failed@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@AEBU1234@AEBU1234@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@IEBAXW4AsyncStatus@Foundation@Windows@3@@Z @ 0x180332FC0 (-rethrow_if_failed@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Wind.c)
 *     ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x180333580 (-unhandled_exception@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UPackage.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::rethrow_if_failed @ 0x18035A0F8 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18035A0F8.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::unhandled_exception @ 0x18035A1AC (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18035A1AC.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_02d18896a6f04e84a63129cc1fd81310___ @ 0x1805E0218 (_anonymous_namespace_--RunSynchronousInSTA__lambda_02d18896a6f04e84a63129cc1fd81310___.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_037aa076caca4eb578368a6543edcedb___ @ 0x1805E0358 (_anonymous_namespace_--RunSynchronousInSTA__lambda_037aa076caca4eb578368a6543edcedb___.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_0b18bae158eb7b112561ba3eda31e137___ @ 0x1805E04A8 (_anonymous_namespace_--RunSynchronousInSTA__lambda_0b18bae158eb7b112561ba3eda31e137___.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_3de5d145e6ce0c9b4d563a35329ea675___ @ 0x1805E05F8 (_anonymous_namespace_--RunSynchronousInSTA__lambda_3de5d145e6ce0c9b4d563a35329ea675___.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_5724e9f0897f2fd11b6a24af4b09628e___ @ 0x1805E0730 (_anonymous_namespace_--RunSynchronousInSTA__lambda_5724e9f0897f2fd11b6a24af4b09628e___.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_a35eeb229c7164fc066a4b8a11da43cb___ @ 0x1805E0870 (_anonymous_namespace_--RunSynchronousInSTA__lambda_a35eeb229c7164fc066a4b8a11da43cb___.c)
 * Callees:
 *     <none>
 */

std::exception_ptr *__fastcall std::exception_ptr::exception_ptr(
        std::exception_ptr *this,
        const struct std::exception_ptr *a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  __ExceptionPtrCopy(this, a2);
  return this;
}
