/*
 * XREFs of winrt::impl::root_implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::subtract_final_reference @ 0x1800E7178
 * Callers:
 *     winrt::impl::root_implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::_root_implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_ @ 0x1805B9A5C (winrt--impl--root_implements__anonymous_namespace_--ShellExecuteSite_IServiceProvid_ea_1805B9A5C.c)
 *     winrt::impl::produce_base_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_void_::Release @ 0x1805BB100 (winrt--impl--produce_base_winrt--Windows--Internal--Shell--SnapComponent--implement_ea_1805BB100.c)
 *     winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::subtract_reference @ 0x1805ED280 (winrt--impl--root_implements_std--experimental--coroutine_traits_winrt--Windows--Fo_ea_1805ED280.c)
 *     winrt::implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::Release @ 0x1805F9E90 (winrt--implements__anonymous_namespace_--ShellExecuteSite_IServiceProvider_ICreatingProcess_--Re.c)
 * Callees:
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x1800E712C (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 */

__int64 __fastcall winrt::impl::root_implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::subtract_final_reference(
        __int64 a1)
{
  signed __int64 v1; // rax
  volatile signed __int64 *v2; // rcx
  unsigned int v3; // edx
  signed __int64 v4; // rtt

  v1 = std::_Atomic_storage<unsigned __int64,8>::load(a1 + 8);
  while ( v1 >= 0 )
  {
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64(v2, v1 - 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return winrt::impl::weak_ref<1,1>::decrement_strong((volatile signed __int32 *)(2 * v1));
}
