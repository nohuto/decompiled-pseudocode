/*
 * XREFs of ?WindowManagerWatcherConnectedBamo@UwpWindowManagerBridge@@AEAAJXZ @ 0x1802B5528
 * Callers:
 *     ?OnWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1802050E0 (-OnWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@A.c)
 *     ?OnUwpWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180432340 (-OnUwpWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@Uwp.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800CA6B4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?WindowEventDispatcher_WindowManagerWatcherConnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802321E8 (-WindowEventDispatcher_WindowManagerWatcherConnected@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180291BAC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_4db7e16b27d144662c4cfda4f02bbfea___ @ 0x180430B18 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_4db7e16b27d144662c4cfda4f02bbfea.c)
 *     ?StartUalmWatcherBamo@UwpWindowManagerBridge@@AEAAJXZ @ 0x180432A74 (-StartUalmWatcherBamo@UwpWindowManagerBridge@@AEAAJXZ.c)
 */

__int64 __fastcall UwpWindowManagerBridge::WindowManagerWatcherConnectedBamo(UwpWindowManagerBridge *this)
{
  RTL_SRWLOCK *v1; // rsi
  char v3; // bp
  _QWORD *v4; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v6; // rcx
  void *v7; // rdx
  int started; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v1 = (RTL_SRWLOCK *)((char *)this + 256);
  v3 = 0;
  AcquireSRWLockExclusive((PSRWLOCK)this + 32);
  if ( *((_BYTE *)this + 192) )
  {
    if ( *((_BYTE *)this + 248) )
    {
      *((_BYTE *)this + 264) = 1;
      v4 = winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
             &v12,
             (__int64)this);
      CurrentThreadId = GetCurrentThreadId();
      Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_4db7e16b27d144662c4cfda4f02bbfea___(
        v6,
        CurrentThreadId,
        v4);
      wil::details::SetEvent(*((wil::details **)this + 35), v7);
    }
    else
    {
      v3 = 1;
    }
  }
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
  if ( v3 )
  {
    started = UwpWindowManagerBridge::StartUalmWatcherBamo(this);
    if ( started < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x38A,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)started,
        v10);
  }
  ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherConnected();
  return 0LL;
}
