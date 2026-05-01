/*
 * XREFs of ?NotifyWorkspaceRect@AccessibilityExperienceManager@@UEAAJXZ @ 0x1802C21C0
 * Callers:
 *     ?WorkAreaChanged@AccessibilityExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x180232380 (-WorkAreaChanged@AccessibilityExperienceManager@@UEAAJKPEBUtagRECT@@@Z.c)
 * Callees:
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     CreationThreadDispatcher::RunAsync__lambda_0cedd56e0c33e1c71352c370e3ecb162___ @ 0x1802C21F8 (CreationThreadDispatcher--RunAsync__lambda_0cedd56e0c33e1c71352c370e3ecb162___.c)
 */

__int64 __fastcall AccessibilityExperienceManager::NotifyWorkspaceRect(AccessibilityExperienceManager *this)
{
  _QWORD *v1; // rax
  __int64 v2; // r8
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
         &v4,
         (__int64)this - 144);
  CreationThreadDispatcher::RunAsync__lambda_0cedd56e0c33e1c71352c370e3ecb162___(v2, *v1);
  return 0LL;
}
