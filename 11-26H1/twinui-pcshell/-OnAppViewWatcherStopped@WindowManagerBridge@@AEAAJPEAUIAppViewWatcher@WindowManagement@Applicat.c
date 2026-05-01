/*
 * XREFs of ?OnAppViewWatcherStopped@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18042A8D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_99fecce93f01391543c16575634a6bf3___ @ 0x180427920 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_99fecce93f01391543c16575634a6bf3.c)
 *     ?WindowEventDispatcher_OnAppViewWatcherStopped@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18042BC84 (-WindowEventDispatcher_OnAppViewWatcherStopped@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall WindowManagerBridge::OnAppViewWatcherStopped(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *a2,
        struct IInspectable *a3)
{
  _QWORD *v4; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v6; // rcx
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewWatcherStopped();
  wil::AcquireSRWLockExclusive(&v8, this + 31);
  v4 = winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
         &v9,
         (__int64)this);
  CurrentThreadId = GetCurrentThreadId();
  LODWORD(v4) = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_99fecce93f01391543c16575634a6bf3___(
                  v6,
                  CurrentThreadId,
                  v4);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v8);
  return (unsigned int)v4;
}
