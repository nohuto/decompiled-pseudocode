/*
 * XREFs of ?OnAppViewClearPersistedStateRequested@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewClearPersistedStateRequestedEventArgs@3456@@Z @ 0x18041F310
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ffdc945382ef468f9062094f1096ede7___ @ 0x18041CD34 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_ffdc945382ef468f9062094f1096ede7.c)
 */

__int64 __fastcall WindowManagerBridge::OnAppViewClearPersistedStateRequested(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewClearPersistedStateRequestedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewClearPersistedStateRequestedEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  *(_QWORD *)&v6 = this;
  *((_QWORD *)&v6 + 1) = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ffdc945382ef468f9062094f1096ede7___(
           v4,
           CurrentThreadId,
           &v6);
}
