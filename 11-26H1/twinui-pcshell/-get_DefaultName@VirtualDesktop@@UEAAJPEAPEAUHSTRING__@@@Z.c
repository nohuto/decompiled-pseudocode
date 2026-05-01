/*
 * XREFs of ?get_DefaultName@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1802A3310
 * Callers:
 *     ?get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801DD000 (-get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetDefaultVirtualDesktopName @ 0x1801DEC7C (_anonymous_namespace_--GetDefaultVirtualDesktopName.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 */

__int64 __fastcall VirtualDesktop::get_DefaultName(VirtualDesktop *this, HSTRING *a2)
{
  RTL_SRWLOCK **v3; // rbx
  RTL_SRWLOCK *v4; // rdi
  __int64 Ptr; // rbx
  HSTRING string; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = (RTL_SRWLOCK **)winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
                         &v8,
                         (__int64)this);
  v4 = *v3 + 35;
  AcquireSRWLockShared(v4);
  Ptr = (__int64)(*v3)[18].Ptr;
  if ( v4 )
    ReleaseSRWLockShared(v4);
  anonymous_namespace_::GetDefaultVirtualDesktopName(&string, Ptr);
  *a2 = string;
  return 0LL;
}
