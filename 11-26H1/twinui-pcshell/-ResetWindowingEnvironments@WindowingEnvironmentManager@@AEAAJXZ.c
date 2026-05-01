/*
 * XREFs of ?ResetWindowingEnvironments@WindowingEnvironmentManager@@AEAAJXZ @ 0x1800D011C
 * Callers:
 *     ?RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ @ 0x1800CFC94 (-RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ.c)
 *     ?v_ShutdownServices@WindowingEnvironmentManager@@UEAAJPEAUIProfferService@@@Z @ 0x1800D00A0 (-v_ShutdownServices@WindowingEnvironmentManager@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureLockHeldExclusive@WindowingEnvironmentManager@@UEAAXXZ @ 0x1800D0190 (-EnsureLockHeldExclusive@WindowingEnvironmentManager@@UEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f3c5176796a442ffa96ae8ba53d93332___ @ 0x1800D01D8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f3c5176796a442ffa96ae8ba53d93332.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 */

__int64 __fastcall WindowingEnvironmentManager::ResetWindowingEnvironments(WindowingEnvironmentManager *this)
{
  __int64 v2; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  int v5; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v9; // [rsp+30h] [rbp+8h] BYREF

  WindowingEnvironmentManager::EnsureLockHeldExclusive((WindowingEnvironmentManager *)((char *)this + 144));
  v2 = winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
         &v9,
         this);
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f3c5176796a442ffa96ae8ba53d93332___(
         v4,
         CurrentThreadId,
         v2);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x128,
      (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
      (const char *)(unsigned int)v5,
      v7);
  return 0LL;
}
