/*
 * XREFs of _anonymous_namespace_::PinConsentPromptManager::_PinConsentPromptManager @ 0x1805E35E4
 * Callers:
 *     std::_Ref_count_obj2__anonymous_namespace_::PinConsentPromptManager_::_Destroy @ 0x1805EC4F0 (std--_Ref_count_obj2__anonymous_namespace_--PinConsentPromptManager_--_Destroy.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801C8264 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?Cancel@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180329D58 (-Cancel@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@UValueSet@Collections@Foundat.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@std@@@std@@YAXPEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@0@QEAU10@AEAV?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@0@@Z @ 0x1805E0B58 (--$_Destroy_range@V-$allocator@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperat.c)
 *     ??0?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@QEAA@AEBU01@@Z @ 0x1805E2AEC (--0-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperation@U-$IReference@_N@Foundati.c)
 *     ??1?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@QEAA@XZ @ 0x1805E33A8 (--1-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperation@U-$IReference@_N@Foundati.c)
 */

void __fastcall anonymous_namespace_::PinConsentPromptManager::_PinConsentPromptManager(__int64 a1)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rdi
  __int64 v4; // rcx
  std::_Ref_count_base *v5; // rcx
  RTL_SRWLOCK *v6; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // [rsp+38h] [rbp-20h] BYREF

  v6 = 0LL;
  wil::AcquireSRWLockExclusive(&v6, (RTL_SRWLOCK *)(a1 + 16));
  v2 = *(_QWORD **)(a1 + 32);
  for ( i = *(_QWORD **)(a1 + 24); i != v2; i += 3 )
  {
    std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>(
      v7,
      i);
    winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>>::Cancel(&v8);
    std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::~pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>((__int64)v7);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v6);
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>>(
      v4,
      *(_QWORD *)(a1 + 32));
    std::_Deallocate<16>(
      *(void **)(a1 + 24),
      (struct std::nothrow_t *)(8 * ((__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 24)) >> 3)));
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v5 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v5 )
    std::_Ref_count_base::_Decwref(v5);
}
