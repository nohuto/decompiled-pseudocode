/*
 * XREFs of ?WndProc@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA_JQEAUHWND__@@I_K_J@Z @ 0x1801ADE80
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x180066798 (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     ?MessageHandler@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAA_JI_K_J@Z @ 0x1801ADF78 (-MessageHandler@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Wind.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

LRESULT __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::WndProc(
        HWND hWnd,
        UINT a2,
        WPARAM a3,
        LPARAM a4)
{
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *WindowLongPtrW; // rax
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rbx
  LONG_PTR v13; // rbx
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *v14; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 == 129 )
  {
    v13 = *(_QWORD *)a4;
    wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
      (HWND *)(*(_QWORD *)a4 + 40LL),
      hWnd);
    SetWindowLongPtrW(hWnd, -21, v13);
    return DefWindowProcW(hWnd, a2, a3, a4);
  }
  WindowLongPtrW = (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *)GetWindowLongPtrW(hWnd, -21);
  v9 = WindowLongPtrW;
  if ( !WindowLongPtrW )
    return DefWindowProcW(hWnd, a2, a3, a4);
  v10 = *(_QWORD *)WindowLongPtrW;
  v14 = WindowLongPtrW;
  (*(void (__fastcall **)(winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *))(v10 + 8))(WindowLongPtrW);
  v11 = winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::MessageHandler(
          v9,
          a2,
          a3,
          a4);
  if ( a2 == 130 )
    SetWindowLongPtrW(hWnd, -21, 0LL);
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v14);
  return v11;
}
