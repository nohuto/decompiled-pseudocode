/*
 * XREFs of ?s_WndProcBase@?$CWRLImpWndProc@VVirtualDesktopGestureWindow@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1801CB2E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
LRESULT __fastcall CWRLImpWndProc<VirtualDesktopGestureWindow>::s_WndProcBase(
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LONG_PTR *lParam)
{
  LONG_PTR WindowLongPtrW; // rax
  LONG_PTR v9; // rdi
  __int64 v10; // rsi
  LONG_PTR v12; // r14
  LONG_PTR v13; // rdi

  if ( Msg == 129 )
  {
    v13 = *lParam;
    if ( *lParam )
    {
      *(_QWORD *)(v13 + 8) = hWnd;
      SetWindowLongPtrW(hWnd, 0, v13);
      return (**(__int64 (__fastcall ***)(LONG_PTR, HWND, __int64, WPARAM, LONG_PTR *))v13)(
               v13,
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
    v12 = WindowLongPtrW + 16;
    (*(void (__fastcall **)(LONG_PTR))(*(_QWORD *)(WindowLongPtrW + 16) + 8LL))(WindowLongPtrW + 16);
    v10 = (**(__int64 (__fastcall ***)(LONG_PTR, HWND, _QWORD, WPARAM, LONG_PTR *))v9)(v9, hWnd, Msg, wParam, lParam);
    if ( Msg == 130 )
    {
      SetWindowLongPtrW(hWnd, 0, 0LL);
      *(_QWORD *)(v9 + 8) = 0LL;
    }
    (*(void (__fastcall **)(LONG_PTR))(*(_QWORD *)v12 + 16LL))(v12);
    return v10;
  }
}
