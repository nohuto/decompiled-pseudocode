/*
 * XREFs of ?s_WndProcBase@?$CWRLImpWndProc@VForegroundStagingWindow@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1801449F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
LRESULT __fastcall CWRLImpWndProc<ForegroundStagingWindow>::s_WndProcBase(
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LONG_PTR *lParam)
{
  LONG_PTR WindowLongPtrW; // rax
  LONG_PTR v9; // rbx
  __int64 v10; // rsi
  LONG_PTR v12; // rbx

  if ( Msg == 129 )
  {
    v12 = *lParam;
    if ( *lParam )
    {
      *(_QWORD *)(v12 + 24) = hWnd;
      SetWindowLongPtrW(hWnd, 0, v12);
      return (**(__int64 (__fastcall ***)(__int64, HWND, __int64, WPARAM, LONG_PTR *))(v12 + 16))(
               v12 + 16,
               hWnd,
               129LL,
               wParam,
               lParam);
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    WindowLongPtrW = GetWindowLongPtrW(hWnd, 0);
    v9 = WindowLongPtrW;
    if ( !WindowLongPtrW )
      return DefWindowProcW(hWnd, Msg, wParam, (LPARAM)lParam);
    (*(void (__fastcall **)(LONG_PTR))(*(_QWORD *)WindowLongPtrW + 8LL))(WindowLongPtrW);
    v10 = (**(__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))(v9 + 16))(
            v9 + 16,
            hWnd,
            Msg,
            wParam,
            lParam);
    if ( Msg == 130 )
    {
      SetWindowLongPtrW(hWnd, 0, 0LL);
      *(_QWORD *)(v9 + 24) = 0LL;
    }
    (*(void (__fastcall **)(LONG_PTR))(*(_QWORD *)v9 + 16LL))(v9);
    return v10;
  }
}
