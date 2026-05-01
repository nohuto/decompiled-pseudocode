/*
 * XREFs of ?WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ @ 0x18042BD08
 * Callers:
 *     ?OnAppViewEnumerationCompleted@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18042A6D0 (-OnAppViewEnumerationCompleted@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@Ap.c)
 *     ?OnWindowEnumerationCompleted@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18042A9D0 (-OnWindowEnumerationCompleted@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@Appl.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800CA6B4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?WindowEventDispatcher_AppViewWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18022FE50 (-WindowEventDispatcher_AppViewWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ?WindowEventDispatcher_WindowManagerWatcherConnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802321E8 (-WindowEventDispatcher_WindowManagerWatcherConnected@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180291BAC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_245d2a2be388f7a941ea2187d291aeff___ @ 0x180426FC0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_245d2a2be388f7a941ea2187d291aeff.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_84d0801e285d04801e5fe1360cfb4c37___ @ 0x180427380 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_84d0801e285d04801e5fe1360cfb4c37.c)
 */

__int64 __fastcall WindowManagerBridge::WindowManagerWatcherConnected(WindowManagerBridge *this)
{
  _QWORD *v2; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  void *v5; // rdx
  _QWORD *v6; // rbx
  DWORD v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 200) )
  {
    if ( *((_BYTE *)this + 64) )
    {
      *((_BYTE *)this + 256) = 1;
      v2 = winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
             &v14,
             (__int64)this);
      CurrentThreadId = GetCurrentThreadId();
      Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_84d0801e285d04801e5fe1360cfb4c37___(
        v4,
        CurrentThreadId,
        v2);
      wil::details::SetEvent(*((wil::details **)this + 33), v5);
    }
    else
    {
      v6 = winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
             &v14,
             (__int64)this);
      v7 = GetCurrentThreadId();
      v9 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_245d2a2be388f7a941ea2187d291aeff___(
             v8,
             v7,
             v6);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x153,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)(unsigned int)v9);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2A6,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)v10,
          v12);
      }
      ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewWatcherStarted();
    }
  }
  ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherConnected();
  return 0LL;
}
