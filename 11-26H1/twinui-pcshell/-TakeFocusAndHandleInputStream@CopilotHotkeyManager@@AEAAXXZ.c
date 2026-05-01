/*
 * XREFs of ?TakeFocusAndHandleInputStream@CopilotHotkeyManager@@AEAAXXZ @ 0x180634D0C
 * Callers:
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1 @ 0x180633140 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800254EC (--1-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$integr.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CopilotHotkeyManager::TakeFocusAndHandleInputStream(CopilotHotkeyManager *this)
{
  const char *v2; // r9
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, _QWORD, GUID *, GUID *); // rbx
  int v5; // eax
  int v6; // eax
  HWND Window; // rax
  HWND v8; // rbx
  const char *v9; // r9
  const char *v10; // r9
  const char *v11; // r9
  int v12[2]; // [rsp+60h] [rbp-49h] BYREF
  HWND v13; // [rsp+68h] [rbp-41h] BYREF
  WNDCLASSEXW v14; // [rsp+70h] [rbp-39h] BYREF
  int X[4]; // [rsp+C0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v14.cbSize = 80;
  memset_0(&v14.style, 0, 0x4CuLL);
  v14.lpfnWndProc = (WNDPROC)CWRLImpWndProc<CopilotHotkeyManager>::s_WndProcBase;
  v14.hInstance = &_ImageBase;
  v14.hCursor = 0LL;
  v14.lpszClassName = L"CopilotKeyPressFocusFrame";
  v14.cbWndExtra = 8;
  v14.hbrBackground = (HBRUSH)4;
  if ( !RegisterClassExW(&v14) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x996,
      (int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
      v2);
  *(_QWORD *)v12 = 0LL;
  v3 = *((_QWORD *)this + 17);
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *))(*(_QWORD *)v3 + 72LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)v12);
  v5 = v4(v3, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x99A,
      (int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
      (const char *)(unsigned int)v5,
      (int)v12);
  *(_OWORD *)X = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v12 + 88LL))(*(_QWORD *)v12, X);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x99D,
      (int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
      (const char *)(unsigned int)v6,
      (int)v12);
  Window = CreateWindowExW(
             0x200088u,
             L"CopilotKeyPressFocusFrame",
             L"CopilotkeyFocusWindow",
             0x80000000,
             X[0],
             X[1],
             X[2] - X[0],
             X[3] - X[1],
             0LL,
             0LL,
             &_ImageBase,
             this);
  v8 = Window;
  v13 = Window;
  if ( Window )
  {
    if ( !SetPropW(Window, L"NonRudeHWND", HANDLE_FLAG_INHERIT) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x9BA,
        (int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
        v9);
    if ( !SetPropW(v8, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x9BB,
        (int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
        v10);
    ShowWindow(v8, 8);
    if ( !SetForegroundWindow(v8) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x9BF,
        (int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
        v11);
    v13 = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>(&v13);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v12);
}
