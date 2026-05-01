/*
 * XREFs of _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent @ 0x1805E890C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$1 @ 0x1805E8F60 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_ @ 0x1805E2D8C (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_1805E2D8C.c)
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1 @ 0x1805E84D0 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall anonymous_namespace_::PinConsentPromptManager::RequestPinConsent(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        __int64 a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rbx
  std::_Ref_count_base *v11; // rcx
  _QWORD v13[3]; // [rsp+28h] [rbp-50h] BYREF

  v8 = operator new(0x1D0uLL);
  v9 = (__int64)(v8 + 14);
  v8[53] = a1;
  v8[54] = 0LL;
  v8[55] = 0LL;
  v8[54] = *a3;
  v8[55] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v8[56] = a4;
  v8[14] = anonymous_namespace_::PinConsentPromptManager::RequestPinConsent__ResumeCoro_1;
  *((_DWORD *)v8 + 30) = 65538;
  v10 = v8;
  memset_0(v8, 0, 0x70uLL);
  winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_(v9 - 112);
  *v10 = &off_18075A050;
  v10[13] = 0LL;
  *a2 = (__int64)(v10 + 2);
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  v13[0] = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v13);
  *(_BYTE *)(v9 + 304) = 0;
  anonymous_namespace_::PinConsentPromptManager::RequestPinConsent__ResumeCoro_1(v9);
  v11 = (std::_Ref_count_base *)a3[1];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return a2;
}
