/*
 * XREFs of winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncInfo_::get_Status @ 0x1805834A0
 * Callers:
 *     <none>
 * Callees:
 *     ?load@?$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z @ 0x1800E680C (-load@-$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z.c)
 */

__int64 __fastcall winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncInfo_::get_Status(
        __int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  _DWORD *v4; // r8

  v2 = a1 + 72;
  if ( !a1 )
    v2 = 96LL;
  v3 = std::_Atomic_storage<unsigned int,4>::load((unsigned int *)v2);
  *v4 = v3;
  return 0LL;
}
