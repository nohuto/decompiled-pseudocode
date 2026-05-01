/*
 * XREFs of ?put_WindowResizingState@WindowWrapperBase@@UEAAJW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180434A50
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f64966f8cf2f955615770413beca1be5___ @ 0x18042C4DC (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f64966f8cf2f955615770413beca1be5.c)
 */

__int64 __fastcall WindowWrapperBase::put_WindowResizingState(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  *(_QWORD *)&v5 = a1 - 8;
  *((_QWORD *)&v5 + 1) = &v6;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f64966f8cf2f955615770413beca1be5___(
           v3,
           CurrentThreadId,
           &v5);
}
