/*
 * XREFs of ?s_WndProc@CAppThumbnailWindow@@SA_JPEAUHWND__@@I_K_J@Z @ 0x180499130
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x180066798 (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x180396B10 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@.c)
 *     ?wndProc@CAppThumbnailWindow@@IEAA_JPEAUHWND__@@I_K_J@Z @ 0x180499274 (-wndProc@CAppThumbnailWindow@@IEAA_JPEAUHWND__@@I_K_J@Z.c)
 */

LRESULT __fastcall CAppThumbnailWindow::s_WndProc(HWND a1, UINT a2, unsigned __int64 a3, HWND **a4)
{
  HWND *v8; // rdi
  CAppThumbnailWindow *WindowLongPtrW; // rax
  CAppThumbnailWindow *v11; // rbp
  __int64 v12; // rsi

  if ( a2 == 129 )
  {
    v8 = *a4;
    if ( *a4 )
    {
      wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
        v8 + 20,
        a1);
      SetWindowLongPtrW(a1, 0, (LONG_PTR)v8);
      return CAppThumbnailWindow::wndProc((CAppThumbnailWindow *)v8, a1, 0x81u, a3, (__int64)a4);
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    WindowLongPtrW = (CAppThumbnailWindow *)GetWindowLongPtrW(a1, 0);
    v11 = WindowLongPtrW;
    if ( !WindowLongPtrW )
      return DefWindowProcW(a1, a2, a3, (LPARAM)a4);
    v12 = CAppThumbnailWindow::wndProc(WindowLongPtrW, a1, a2, a3, (__int64)a4);
    if ( a2 == 130 )
    {
      SetWindowLongPtrW(a1, 0, 0LL);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>>::operator=((HWND *)v11 + 20);
    }
    return v12;
  }
}
