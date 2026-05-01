/*
 * XREFs of ?s_WndProcBase@?$CWRLImpWndProc@VDummyWindow@CExperienceManagerAnimationHelper@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1800721A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall CWRLImpWndProc<CExperienceManagerAnimationHelper::DummyWindow>::s_WndProcBase(
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LONG_PTR *lParam)
{
  LONG_PTR WindowLongPtrW; // rax
  volatile int *v9; // rdx
  LONG_PTR v10; // rbx
  volatile signed __int32 *v11; // rsi
  __int64 v12; // r14
  signed __int32 v13; // edx
  LONG_PTR v15; // rbx

  if ( Msg == 129 )
  {
    v15 = *lParam;
    if ( *lParam )
    {
      *(_QWORD *)(v15 + 24) = hWnd;
      SetWindowLongPtrW(hWnd, 0, v15);
      return (**(__int64 (__fastcall ***)(__int64, HWND, __int64, WPARAM, LONG_PTR *))(v15 + 16))(
               v15 + 16,
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
    v11 = (volatile signed __int32 *)(WindowLongPtrW + 12);
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(WindowLongPtrW + 12), v9);
    v12 = (**(__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))(v10 + 16))(
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
    do
      v13 = *v11;
    while ( *v11 != 0x7FFFFFFF && v13 != _InterlockedCompareExchange(v11, v13 - 1, v13) );
    if ( v13 == 1 )
    {
      (*(void (__fastcall **)(LONG_PTR, __int64, __int64))(*(_QWORD *)v10 + 40LL))(v10, 1LL, 0x7FFFFFFFLL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    return v12;
  }
}
