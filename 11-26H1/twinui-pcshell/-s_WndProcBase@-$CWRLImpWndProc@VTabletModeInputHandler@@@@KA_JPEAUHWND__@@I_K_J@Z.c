/*
 * XREFs of ?s_WndProcBase@?$CWRLImpWndProc@VTabletModeInputHandler@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x18052FA90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VGhostDivider@@@WRL@Microsoft@@IEBAXXZ @ 0x18020E250 (-InternalAddRef@-$ComPtr@VGhostDivider@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VTabletModeInputHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x18052F5EC (-InternalRelease@-$ComPtr@VTabletModeInputHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall CWRLImpWndProc<TabletModeInputHandler>::s_WndProcBase(
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LONG_PTR *lParam)
{
  LONG_PTR v8; // rdi
  LONG_PTR WindowLongPtrW; // rax
  volatile int *v11; // rdx
  LONG_PTR v12; // rdi
  __int64 v13; // rsi
  __int64 v14[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( Msg == 129 )
  {
    v8 = *lParam;
    if ( *lParam )
    {
      *(_QWORD *)(v8 + 24) = hWnd;
      SetWindowLongPtrW(hWnd, 0, v8);
      return (**(__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))(v8 + 16))(
               v8 + 16,
               hWnd,
               Msg,
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
    v12 = WindowLongPtrW;
    if ( !WindowLongPtrW )
      return DefWindowProcW(hWnd, Msg, wParam, (LPARAM)lParam);
    v14[0] = WindowLongPtrW;
    Microsoft::WRL::ComPtr<GhostDivider>::InternalAddRef(v14, v11);
    v13 = (**(__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))(v12 + 16))(
            v12 + 16,
            hWnd,
            Msg,
            wParam,
            lParam);
    if ( Msg == 130 )
    {
      SetWindowLongPtrW(hWnd, 0, 0LL);
      *(_QWORD *)(v12 + 24) = 0LL;
    }
    Microsoft::WRL::ComPtr<TabletModeInputHandler>::InternalRelease(v14);
    return v13;
  }
}
