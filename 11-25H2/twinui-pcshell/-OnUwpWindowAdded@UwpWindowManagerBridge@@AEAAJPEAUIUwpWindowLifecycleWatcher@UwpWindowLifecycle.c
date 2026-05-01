/*
 * XREFs of ?OnUwpWindowAdded@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@UUwpWindowContextId@3456@@Z @ 0x1801C7890
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8eaf758d85888cf62cbe11a93a7196c4___ @ 0x1801C78CC (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_8eaf758d85888cf62cbe11a93a7196c4.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnUwpWindowAdded(__int64 a1, __int64 a2, int a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  v6[0] = a1;
  v6[1] = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8eaf758d85888cf62cbe11a93a7196c4___(
           v4,
           CurrentThreadId,
           v6);
}
