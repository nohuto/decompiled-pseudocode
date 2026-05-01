/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18036F56C
 * Callers:
 *     ??1iterator@?$iterable_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Uno_collection_version@23@@winrt@@UEAA@XZ @ 0x1802BFE6C (--1iterator@-$iterable_base@U-$scoped_input_iterable@U-$IKeyValuePair@Uhstring@winrt@@U12@@Colle.c)
 * Callees:
 *     ?store@?$_Atomic_storage@I$03@std@@QEAAXIW4memory_order@2@@Z @ 0x18036F55C (-store@-$_Atomic_storage@I$03@std@@QEAAXIW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::com_ptr<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>>::unconditional_release_ref(
        __int64 *a1)
{
  __int64 v1; // r8
  __int64 v2; // r8

  v1 = *a1;
  *a1 = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 8), 0xFFFFFFFF) == 1 )
  {
    std::_Atomic_storage<unsigned int,4>::store((_DWORD *)(v1 + 8));
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 8LL))(v2, 1LL);
  }
}
