/*
 * XREFs of ?Release@?$produce_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAIXZ @ 0x18036E0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?store@?$_Atomic_storage@I$03@std@@QEAAXIW4memory_order@2@@Z @ 0x18036F55C (-store@-$_Atomic_storage@I$03@std@@QEAAXIW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>,void>::Release(
        __int64 a1)
{
  unsigned __int32 v1; // ebx
  __int64 v2; // r8

  v1 = _InterlockedDecrement((volatile signed __int32 *)(((a1 - 16) & -(__int64)(a1 != 0)) + 8));
  if ( !v1 )
  {
    std::_Atomic_storage<unsigned int,4>::store();
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 8LL))(v2, 1LL);
  }
  return v1;
}
