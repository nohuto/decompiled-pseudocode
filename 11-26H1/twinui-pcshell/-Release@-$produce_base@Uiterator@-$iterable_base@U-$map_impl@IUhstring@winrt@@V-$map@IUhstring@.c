/*
 * XREFs of ?Release@?$produce_base@Uiterator@?$iterable_base@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAIXZ @ 0x1800E5FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?subtract_final_reference@?$root_implements@URemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@IEAAIXZ @ 0x1800E69C8 (-subtract_final_reference@-$root_implements@URemoteSystemWindowAddedEventArgs@implementation@She.c)
 *     ?store@?$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z @ 0x1800E713C (-store@-$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::iterable_base<winrt::impl::map_impl<unsigned int,winrt::hstring,std::map<unsigned int,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>,void>::Release(
        unsigned __int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi

  v1 = (a1 - 16) & ((unsigned __int128)-(__int128)a1 >> 64);
  v2 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs,winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>::subtract_final_reference(v1);
  if ( !v2 )
  {
    std::_Atomic_storage<unsigned __int64,8>::store(v1 + 8);
    if ( v1 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 8LL))(v1, v2 + 1);
  }
  return v2;
}
