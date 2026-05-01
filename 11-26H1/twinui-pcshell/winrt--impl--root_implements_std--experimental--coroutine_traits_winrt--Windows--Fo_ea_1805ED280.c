/*
 * XREFs of winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::subtract_reference @ 0x1805ED280
 * Callers:
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::Release @ 0x1805E8288 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_1805E8288.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::final_suspend_awaiter::await_suspend @ 0x1805ECA9C (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_1805ECA9C.c)
 * Callees:
 *     ?store@?$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z @ 0x1800E713C (-store@-$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z.c)
 *     winrt::impl::root_implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::subtract_final_reference @ 0x1800E7178 (winrt--impl--root_implements__anonymous_namespace_--ShellExecuteSite_IServiceProvider_ICreatingP.c)
 */

void __fastcall winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::subtract_reference(
        __int64 a1)
{
  if ( !(unsigned int)winrt::impl::root_implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::subtract_final_reference(a1) )
    std::_Atomic_storage<unsigned __int64,8>::store((_QWORD *)(a1 + 8));
}
