/*
 * XREFs of ?s_WndProcBase@?$CWRLImpWndProc@VAppResizeAcc@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x180534270
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

LRESULT __fastcall CWRLImpWndProc<AppResizeAcc>::s_WndProcBase(HWND hWnd, UINT Msg, WPARAM wParam, LONG_PTR *lParam)
{
  LONG_PTR v8; // rdi
  LONG_PTR WindowLongPtrW; // rax
  LONG_PTR v11; // rdi
  __int64 v12; // rsi
  __int64 v13[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( Msg == 129 )
  {
    v8 = *lParam;
    if ( *lParam )
    {
      *(_QWORD *)(v8 + 40) = hWnd;
      SetWindowLongPtrW(hWnd, 0, v8);
      return (**(__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))(v8 + 32))(
               v8 + 32,
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
    v11 = WindowLongPtrW;
    if ( !WindowLongPtrW )
      return DefWindowProcW(hWnd, Msg, wParam, (LPARAM)lParam);
    v13[0] = WindowLongPtrW;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v13);
    v12 = (**(__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))(v11 + 32))(
            v11 + 32,
            hWnd,
            Msg,
            wParam,
            lParam);
    if ( Msg == 130 )
    {
      SetWindowLongPtrW(hWnd, 0, 0LL);
      *(_QWORD *)(v11 + 40) = 0LL;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13);
    return v12;
  }
}
