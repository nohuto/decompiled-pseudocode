/*
 * XREFs of ?UpdateHotkeyRegistrations@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1801E8DF8
 * Callers:
 *     ?RegisterGameDvrRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ @ 0x180236088 (-RegisterGameDvrRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b82422c86d7ccda9967e06660bac40e9___::Run @ 0x180353080 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b82422c86d7ccda9967e06660bac40e9___--Run.c)
 * Callees:
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     CreationThreadDispatcher::RunAsync__lambda_be8637fd90d29ec88802c86b8fd24837___ @ 0x18033CFE4 (CreationThreadDispatcher--RunAsync__lambda_be8637fd90d29ec88802c86b8fd24837___.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::UpdateHotkeyRegistrations(GamingOverlayExperienceManager *this)
{
  _QWORD *v1; // rax
  __int64 v2; // r8
  char v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 124) )
  {
    v1 = (_QWORD *)winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
                     &v4,
                     this);
    CreationThreadDispatcher::RunAsync__lambda_be8637fd90d29ec88802c86b8fd24837___(v2, *v1);
  }
  return 0LL;
}
