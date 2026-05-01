/*
 * XREFs of ?OnImmersiveWindowCreated@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@UUwpWindowContextId@3456@@Z @ 0x1804264F0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_db361ca5328a8944e953ba0371d4bce0___ @ 0x1804259D4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_db361ca5328a8944e953ba0371d4bce0.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnImmersiveWindowCreated(__int64 a1, __int64 a2, int a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  *(_QWORD *)&v6 = a1;
  *((_QWORD *)&v6 + 1) = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_db361ca5328a8944e953ba0371d4bce0___(
           v4,
           CurrentThreadId,
           &v6);
}
