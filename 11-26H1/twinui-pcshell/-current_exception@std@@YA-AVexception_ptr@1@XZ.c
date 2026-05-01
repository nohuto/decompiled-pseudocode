/*
 * XREFs of ?current_exception@std@@YA?AVexception_ptr@1@XZ @ 0x180330E80
 * Callers:
 *     ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x180333580 (-unhandled_exception@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UPackage.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::unhandled_exception @ 0x18035A1AC (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18035A1AC.c)
 *     ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@PEAUHWND__@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x180453EBC (-unhandled_exception@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Wi.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::unhandled_exception @ 0x18058384C (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18058384C.c)
 *     __lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator()_::_1_::catch$14 @ 0x1806D284E (__lambda_2a8f8fa06f2e0b1768a49123f6915af2_--operator()_--_1_--catch$14.c)
 *     __lambda_f61e10ee7e543796b431f359b570f371_::operator()_::_1_::catch$1 @ 0x1806FE132 (__lambda_f61e10ee7e543796b431f359b570f371_--operator()_--_1_--catch$1.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::current_exception(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  __ExceptionPtrCreate(a1);
  __ExceptionPtrCurrentException(a1);
  return a1;
}
