/*
 * XREFs of ?SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@AEBUtagWINDOWPLACEMENT@@@Z @ 0x18030BFC0
 * Callers:
 *     ?SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x18030BB90 (-SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPrivilegedArrangementOperations@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Microsoft@@XZ @ 0x1802B7AB0 (-GetPrivilegedArrangementOperations@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIPrivileg.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::SetWindowPosition(
        CWin32ApplicationView *this,
        HWND a2,
        const struct tagWINDOWPLACEMENT *a3)
{
  _QWORD *PrivilegedArrangementOperations; // rax
  int v6; // ebx
  const char *v8; // r9
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CWin32ApplicationView *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = this;
  if ( a3->showCmd == 3 )
  {
    PrivilegedArrangementOperations = ApplicationViewManagement::CGlobals::GetPrivilegedArrangementOperations(&v11);
    v6 = (*(__int64 (__fastcall **)(_QWORD, HWND))(*(_QWORD *)*PrivilegedArrangementOperations + 32LL))(
           *PrivilegedArrangementOperations,
           a2);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D5,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    return 0LL;
  }
  if ( SetWindowPlacement(a2, a3) )
    return 0LL;
  if ( GetLastError() != 5 )
  {
    v9 = 1009LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v9,
             (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
             v8);
  }
  if ( a3->showCmd == 1 || a3->showCmd == 4 )
    goto LABEL_14;
  if ( a3->showCmd != 6 )
  {
    if ( a3->showCmd != 9 )
    {
      v9 = 1002LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v9,
               (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
               v8);
    }
LABEL_14:
    if ( !PostMessageW(a2, 0x112u, 0xF120uLL, 0LL) )
    {
      v9 = 999LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v9,
               (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
               v8);
    }
    return 0LL;
  }
  if ( !PostMessageW(a2, 0x112u, 0xF020uLL, 0LL) )
  {
    v9 = 994LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v9,
             (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
             v8);
  }
  return 0LL;
}
