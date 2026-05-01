/*
 * XREFs of ?s_WndProcBase@?$CWRLImpWndProc@VGhostDivider@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1801D8A30
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIPWSLayoutItemInternal@@UIPenWorkspaceLayoutItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801D8B60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_1801D8B60.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall CWRLImpWndProc<GhostDivider>::s_WndProcBase(HWND hWnd, UINT Msg, WPARAM wParam, LONG_PTR *lParam)
{
  LONG_PTR WindowLongPtrW; // rax
  volatile int *v9; // rdx
  LONG_PTR v10; // rbx
  __int64 v11; // rsi
  LONG_PTR v13; // rbx

  if ( Msg == 129 )
  {
    v13 = *lParam;
    if ( *lParam )
    {
      *(_QWORD *)(v13 + 24) = hWnd;
      SetWindowLongPtrW(hWnd, 0, v13);
      return (**(__int64 (__fastcall ***)(__int64, HWND, __int64, WPARAM, LONG_PTR *))(v13 + 16))(
               v13 + 16,
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
    v10 = WindowLongPtrW;
    if ( !WindowLongPtrW )
      return DefWindowProcW(hWnd, Msg, wParam, (LPARAM)lParam);
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(WindowLongPtrW + 12), v9);
    v11 = (**(__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))(v10 + 16))(
            v10 + 16,
            hWnd,
            Msg,
            wParam,
            lParam);
    if ( Msg == 130 )
    {
      SetWindowLongPtrW(hWnd, 0, 0LL);
      *(_QWORD *)(v10 + 24) = 0LL;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IPWSLayoutItemInternal,IPenWorkspaceLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::Release(v10);
    return v11;
  }
}
