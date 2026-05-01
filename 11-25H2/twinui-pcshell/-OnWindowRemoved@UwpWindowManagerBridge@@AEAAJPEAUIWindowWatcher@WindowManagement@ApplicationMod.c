/*
 * XREFs of ?OnWindowRemoved@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowChangedEventArgs@3456@@Z @ 0x1801D46A0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_665d6f33f7c53b091004cce062c6e03d___ @ 0x1801D46DC (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_665d6f33f7c53b091004cce062c6e03d.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnWindowRemoved(
        UwpWindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  v6[1] = this;
  v6[0] = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_665d6f33f7c53b091004cce062c6e03d___(
           v4,
           CurrentThreadId,
           v6);
}
