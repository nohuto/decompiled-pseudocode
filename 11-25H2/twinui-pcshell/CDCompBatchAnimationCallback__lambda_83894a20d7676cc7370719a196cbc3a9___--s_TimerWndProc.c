/*
 * XREFs of CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::s_TimerWndProc @ 0x18050AA20
 * Callers:
 *     <none>
 * Callees:
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_CleanupTimer @ 0x18050A7B0 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_CleanupTimer.c)
 *     CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::_InvokeCallback @ 0x18050A9AC (CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___--_InvokeCallback.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
LRESULT __fastcall CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::s_TimerWndProc(
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LPARAM lParam)
{
  __int64 v8; // rdi
  LONG_PTR WindowLongPtrW; // rax
  __int64 v10; // rbx

  v8 = 0LL;
  WindowLongPtrW = GetWindowLongPtrW(hWnd, 0);
  v10 = WindowLongPtrW;
  if ( !WindowLongPtrW )
    return DefWindowProcW(hWnd, Msg, wParam, lParam);
  if ( Msg == 2 )
  {
    KillTimer(hWnd, 0x64uLL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    SetWindowLongPtrW(hWnd, 0, 0LL);
    return DefWindowProcW(hWnd, Msg, wParam, lParam);
  }
  if ( Msg != 275 )
    return DefWindowProcW(hWnd, Msg, wParam, lParam);
  (*(void (__fastcall **)(LONG_PTR))(*(_QWORD *)WindowLongPtrW + 8LL))(WindowLongPtrW);
  if ( *(_QWORD *)(v10 + 32) )
  {
    CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_CleanupTimer(v10);
    if ( *(_DWORD *)(v10 + 28) == 2 )
      CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::_InvokeCallback(v10);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v8;
}
